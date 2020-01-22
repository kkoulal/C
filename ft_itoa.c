#include<stdlib.h>
#include<stdio.h>

char *ft_itoa(int nb)
{
	int sign;
	int size;
	long tmp;
	char *result;

	sign = (nb < 0) ? 1 : 0 ;
	size = (sign) ? 2  : 1 ;
	tmp = ( nb < 0) ? -(long)nb : nb;

	while(tmp /= 10)
		size++;

	result = (char *)malloc(sizeof(char) * (size + 1));

	result[size] = '\0';
	if(sign)
		result[0] = '-';

	tmp = (nb < 0) ? -(long)nb: nb;

	while(size-- > sign)
	{
		result[size] = (tmp % 10) + 48;
		tmp /= 10;
	}
	return(result);

}

int  main()
{
	printf("%s\n", ft_itoa(1));
	return (0);
}
