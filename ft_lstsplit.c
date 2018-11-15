
#include "libft.h"
/*
static int	ft_word_count(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}
*/
t_list		**ft_lstsplit(char const *s, char c)
{
	t_list	**retval;
	char	*sub;
	int		i;
	int		j;

	retval = malloc(sizeof(t_list *));
	*retval = NULL;
	// printf("char is \"%c\"\n", c);
	i = 0;
	while (s[i])
	{
		// printf("Check\n");
		// printf("i = %d\n", i);
		while (s[i] && s[i] == c)
			i++;
		// printf("i stops at %d\n", i);
		if (!s[i])
			break ;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		// printf("j stops at %d\n", j);
		// printf("adding from %c to %c\n", s[i], s[j]);
		sub = ft_strsub(s, i, j - i);
		// printf("sub is %s\n", sub);
		// ft_lstadd(retval, ft_lstnew((void *)sub,ft_strlen(sub) + 1));
		ft_lst_add_tail(retval, ft_lstnew((void *)sub,ft_strlen(sub) + 1));
		i = j;
	}
	return (retval);
}
