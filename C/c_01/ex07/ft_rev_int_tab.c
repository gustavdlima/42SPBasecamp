void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	position;

	position = size - 1;
	i = 0;
	while (position >= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[position];
		tab[position] = temp;
		i++;
		position--;
	}
}
