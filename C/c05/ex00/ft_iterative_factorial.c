int	ft_iterative_factorial(int b)
{
	unsigned int	a;

	a = 1;
	while (b > 0)
	{
		a *= b;
		b--;
	}
	if (b < 0)
	{
		return (0);
	}
	return (a);
}
