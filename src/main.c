#include "head.h"

int check_lines(char **str)
{
	int i;
	int j;
	int check_strlen;

	i = 1;
	while (i != 10)
	{
		j = 0;
		check_strlen = ft_strlen(str[i]);
		while (str[i][j] != '\0')
		{
			if (((str[i][j] >= '1' && str[i][j] <= '9') || str[i][j] == '.') && check_strlen == 9)
			{
				j++;
				continue;
			}
			else
			{
				ft_putstr("Error: Check that you entered the correct line size and the number of non-repeating digits!\nExample: sudoku.exe '1........' '.2.......' '..3......' '...4.....' '....5....' '.....6...' '......7..' '.......8.' '........9'");
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		error_horiz_line(char **str)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i != 10)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] != '.')
			{
				k = j + 1;
				while (str[i][k] != '\0')
				{
					if (str[i][j] == str[i][k])
					{
						ft_putstr("Error: On one line there are repeated numbers horizontally!");
						return (1);
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		error_vert_line(char **str)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i != 9)
	{
		j = 1;
		while (j != 10)
		{
			if (str[j][i] != '.')
			{
				k = j + 1;
				while (k != 10)
				{
					if (str[j][i] == str[k][i])
					{
						ft_putstr("Error: On one line there are duplicate numbers vertically!");
						return (1);
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int check;

	if (ac == 10)
	{
		check = 0;
		check += check_lines(av);
		check += error_horiz_line(av);
		check += error_vert_line(av);
		if (check == 0)
			sudoku(av);
	}
	else
		ft_putstr("Error: Use sudoku.exe line_1 line_2 line_3 line_4 line_5 line_6 line_7 line_8 line_9!");
	return (0);
}