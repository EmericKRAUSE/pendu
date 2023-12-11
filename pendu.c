#include "pendu.h"

void welcome()
{
	printf("Welcome to the hangman game\n");
	sleep(1);
	printf("Try to guess the secret word by entering letters one by one on the keyboard\n");
	sleep(1);
	pritnf("Be careful, the game is case sensitive\n");
}

int main()
{
	char	*str;
	int		len;
	char	*tab;
	char	to_find;
	int		count;

	str = "Hello";
	len = ft_strlen(str);
	tab = create_tab(len);
	count = 0;

	welcome();
	sleep(5);
	display_word(tab, len);

	while (1)
	{
		printf ("letter to find :");
		scanf ("%c", &to_find);
		getchar();

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