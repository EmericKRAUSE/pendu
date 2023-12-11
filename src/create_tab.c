#include "../pendu.h"

char	*create_tab(int len)
{
	char *tab;
	int	i;

	tab = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		tab[i] = '*';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}