#ifndef PENDU_H
# define PENDU_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	check_for_occurence(char *tab, char *atr, char to_find, int len, int *count);
char	*create_tab(int len);
void	display_word(char *tab, int len);
int		ft_strlen(char *str);
int		is_finished(char *tab);
void	welcome(void);

#endif