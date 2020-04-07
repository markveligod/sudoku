#include "head.h"

void	print_grid(char **str)
{
	int i;
	int j;

	i = 1;
	while (i != 10)
	{
		if ((i-1) % 3 == 0)
			ft_putstr(" -----------------------\n");
		j = 0;
		while (str[i][j] != '\0')
		{
			if (j % 3 == 0)
				ft_putstr("| ");
			ft_putchar(str[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putstr("|\n");
		i++;
	}
	ft_putstr(" -----------------------\n");
}

int		check_horiz(char c, int i, char **str)
{
	int j;

	j = 0;
	while (str[i][j] != '\0')
	{
		if (str[i][j] == c)
			return (1);
		j++;
	}
	return (0);
}

int		check_vert(char c, int j, char **str)
{
	int i;

	i = 1;
	while (i != 10)
	{
		if (str[i][j] == c)
			return (1);
		i++;
	}
	return (0);
}

int		check_box(char c, int i, int j, char **str)
{
	int k;
	int l;

	if ((i >= 1 && i <= 3) && (j >= 0 && j <= 2))
	{
		k = 1;
		while (k != 4)
		{
			l = 0;
			while (l != 3)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 1 && i <= 3) && (j >= 3 && j <= 5))
	{
		k = 1;
		while (k != 4)
		{
			l = 3;
			while (l != 6)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 1 && i <= 3) && (j >= 6 && j <= 8))
	{
		k = 1;
		while (k != 4)
		{
			l = 6;
			while (l != 9)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 4 && i <= 6) && (j >= 0 && j <= 2))
	{
		k = 4;
		while (k != 7)
		{
			l = 0;
			while (l != 3)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 4 && i <= 6) && (j >= 3 && j <= 5))
	{
		k = 4;
		while (k != 7)
		{
			l = 3;
			while (l != 6)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 4 && i <= 6) && (j >= 6 && j <= 8))
	{
		k = 4;
		while (k != 7)
		{
			l = 6;
			while (l != 9)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 7 && i <= 9) && (j >= 0 && j <= 2))
	{
		k = 7;
		while (k != 10)
		{
			l = 0;
			while (l != 3)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 7 && i <= 9) && (j >= 3 && j <= 5))
	{
		k = 7;
		while (k != 10)
		{
			l = 3;
			while (l != 6)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	if ((i >= 7 && i <= 9) && (j >= 6 && j <= 8))
	{
		k = 7;
		while (k != 10)
		{
			l = 6;
			while (l != 9)
			{
				if (str[k][l] == c)
					return (1);
				l++;
			}
			k++;
		}
	}
	return (0);
}

void	sudoku(char **str)
{
	char	array_num[] = "918273645";
	int		i;
	int		j;
	int		k;
	int		end;
	int		check_h;
	int		check_v;
	int		check_b;

	end = 0;
	i = 1;
	while (end != 1)
	{
		j = 0;

		while (j != 9)
		{
			if (str[i][j] == '.')
			{
				k = 0;
				while (k != 9)
				{
					check_h = check_horiz(array_num[k], i, str);
					check_v = check_vert(array_num[k], j, str);
					check_b = check_box(array_num[k], i, j, str);
					if (check_h == 0 && check_v == 0 && check_b == 0)
					{
						str[i][j] = array_num[k];
						break;
					}
					k++;
				}
			}
			j++;
		}
		if (i == 9 && j == 9)
			end = 1;
		i++;
	}
	print_grid(str);
}
