#include "../pendu.h"

void	welcome(void)
{
	printf("Welcome to the hangman game.\n");
	sleep(1);
	printf("Try to guess the secret word by entering letters one by one on the keyboard.\n");
	sleep(1);
	printf("Be careful, the game is case sensitive.\n");
	printf("\n");
	sleep(2);
	printf ("Here is the word you have to guess: ");
}
