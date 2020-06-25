#include<stdio.h>
#include<unistd.h>
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
		ft_putchar(str[a++]);
}