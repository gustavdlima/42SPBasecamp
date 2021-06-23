#include <unistd.h>

void	write_line(int a[3]);

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write_line(a);
				a[2]++;
			}		
			a[1]++;
		}
		a[0]++;
	}
}

void	write_line (int a[3])
{
	write(1, &a[0], 1);
	write(1, &a[1], 1);
	write(1, &a[2], 1);
	if (a[0] != '7')
		write(1, ", ", 1);
}
