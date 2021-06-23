#include<unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_right_comb(char c, char d)
{
	ft_putchar(48 + c / 10);
	ft_putchar(48 + c % 10);
	ft_putchar(' ');
	ft_putchar(48 + d / 10);
	ft_putchar(48 + d % 10);
	if (c <= 97 || d <= 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_right_comb(c, d);
			d++;
		}
		c++;
	}	
}
