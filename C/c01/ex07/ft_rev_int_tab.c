void	ft_rev_int_tab(int *t, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = t[i];
		t [i] = t [size - 1 - i];
		t [size - 1 - i] = swap;
		i++;
	}
}
