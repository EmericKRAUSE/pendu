# ifndef PENDU_C
#define PENDU_C

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	check_for_occurence(char *tab, char *atr, char to_find, int len, int *count);
void	display_word(char *tab, int len);
char	*create_tab(int len);
int	is_finished(char *tab);

# endif