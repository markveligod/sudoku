#ifndef _HEAD_H_
#define _HEAD_H_
#include <unistd.h>

typedef struct Box
{
	
} Box;

typedef struct Square
{
	char num;
	char possible;
	Box * box;
	char row;
	char column;
} Square;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		check_lines(char **str);
void	sudoku(char **str);
void	print_grid(char **str);
int		error_vert_line(char **str);
int		error_horiz_line(char **str);
int		check_horiz(char c, int i, char **str);
int		check_vert(char c, int j, char **str);
int		check_box(char c, int i, int j, char **str);

#endif