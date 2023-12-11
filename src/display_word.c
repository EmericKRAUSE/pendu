#include "../pendu.h"

void	display_word(char *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf ("\033[1;36m%c\033[0m", tab[i]);
		i++;
	}
	printf ("\n");
}