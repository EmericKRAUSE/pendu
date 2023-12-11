#include "../pendu.h"

int	is_finished(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == '*')
			return (0);
		i++;
	}
	return (1);
}