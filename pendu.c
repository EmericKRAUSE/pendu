#include "pendu.h"

int	main(void)
{
	char	*str;
	int		len;
	char	*tab;
	char	to_find;
	int		count;

	str = "bitches";
	len = ft_strlen(str);
	tab = create_tab(len);
	count = 0;
	welcome();
	display_word(tab, len);
	while (1)
	{
		printf ("Enter a letter: ");
		to_find = getchar();
		if (to_find == '\n')
		{
			printf("\033[1;33mPlease enter a letter\n\033[0m");
			continue ;
		}
		while (getchar() != '\n');
		check_for_occurence(tab, str, to_find, len, &count);
		if (count == len)
		{
			printf("\033[1;31mYou lost...\033[0m\n");
			free (tab);
			return (0);
		}
		if (is_finished(tab))
		{
			printf ("\033[1;32mYou win!!\033[0m\n");
			free (tab);
			return (0);
		}
	}
	free (tab);
}
