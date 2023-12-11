#include "../pendu.h"

void	check_for_occurence(char *tab, char *str, char to_find, int len, int *count)
{
	int	i;
	int found;

	i = 0;
	found = 0;
	while(str[i])
	{
		if (str[i] == to_find)
		{
			tab[i] = to_find;
			found = 1;
		}
		i++;
	}
	if (!found)
	{
		printf ("\033[1;33mtry again !\033[0m\n");
		(*count)++;
	}
	display_word (tab, len);
}