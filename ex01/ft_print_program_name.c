#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
        write(1, &c, 1);
}
int		main(int argc, char *argv[0])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}