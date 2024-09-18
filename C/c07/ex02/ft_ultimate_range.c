
#include <stdlib.h>

int	*ft_allocate_range(int **range, int bound)
{
	int	*buffer;

	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (0);
	}
	*range = buffer;
	return (buffer);
}

void	ft_fill_range(int *buffer, int min, int bound)
{
	int	index;

	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	buffer = ft_allocate_range(range, bound);
	if (!buffer)
		return (-1);
	ft_fill_range(buffer, min, bound);
	return (bound);
}
