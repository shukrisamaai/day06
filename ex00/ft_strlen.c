#include<stdio.h>
#include<unistd.h>
int		ft_strlen(char *str)
{
	int b;

	b = 0;
	while (str[b])
		b += 1;
	return (b);
}