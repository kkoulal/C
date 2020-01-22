#include<stdio.h>
#include<stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	int sign;
	int size;
	long tmp;
	char *result;

	sign = (value < 0 && base == 10) ? 1 : 0;
	size = (sign) ? 2 : 1;
	tmp = (value < 0) ? -(long)value  : value;

	while(tmp /= base)
		size++;

	result = (char *)malloc(sizeof(char) * (size + 1));

	result[size] = '\0';
	
	if (sign)
		result[0] = '-';

	tmp = (value < 0) ? -(long)value : value;

	while(size-- > sign)
	{
		result[size] = (tmp % base < 10) ? (tmp % base + 48 )  : (tmp % base - 10 + 'A');
		tmp /= base;
	}
	return(result);
}

int main()
{
	printf("%s\n",ft_itoa_base(684,10));
}
