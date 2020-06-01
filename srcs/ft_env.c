#include "../includes/minishell.h"

int ft_path_len(char **path_str)
{
	int	i;

	i = 0;
	while(path_str[i] != NULL)
		i++;
	return (i);
}

int			pos_find(char *str, char **g_envp)
{
	int		i;
	char	*temp;

	i = 0;
	while (g_envp[i])
	{
		temp = ft_strjoin(str, "=");
		if (ft_strnequ(g_envp[i], temp, ft_strlen(temp)))
		{
//			free(temp);
			return (i);
		}
		free(temp);
		i++;
	}
//  free(temp);
	return (i);
}

static char	**arr_alloc(int pos, char **g_envp)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (pos + 1));
	while (g_envp[i] && i < pos)
	{
		arr[i] = ft_strdup(g_envp[i]);
		free(g_envp[i]);
		i++;
	}
	free(g_envp[i]);
	return (arr);
}

char	*env_find(char *str, char **g_envp)
{
	int		i;
	char	*temp;

	i = 0;
	while (g_envp[i])
	{
		temp = ft_strjoin(str, "=");
		if (ft_strnequ(g_envp[i], temp, ft_strlen(temp)))
		{
			free(temp);
			return (ft_strchr(g_envp[i], '=') + 1);
		}
		free(temp);
		i++;
	}
	return (NULL);
}

void	ft_path_env_set(char *str, char *env, char **g_envp)
{
	int		pos;
	char	*temp;

	pos = pos_find(str, g_envp);
	temp = ft_strjoin("=", env);
	if (g_envp[pos])
	{
		free(g_envp[pos]);
		if (env)
			g_envp[pos] = ft_strjoin(str, temp);
	}
	else
	{
		g_envp = arr_alloc(pos + 1, g_envp);
		if (env)
			g_envp[pos] = ft_strjoin(str, temp);
		g_envp[pos + 1] = NULL;
	}
	free(temp);
  ///// new /////
//  free(&g_envp);
}