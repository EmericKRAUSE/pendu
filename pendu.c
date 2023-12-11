#include "pendu.h"

int main()
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
	sleep(2);
	printf ("Here is the word you have to guess: ");
	display_word(tab, len);

	while (1)
	{
		printf ("Enter a letter: ");
		to_find = getchar();
		while(getchar() != '\n');

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