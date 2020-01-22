#include<stdlib.h>
#include<stdio.h>

void fprime(int nb)
{
	int i = 2;

	if(nb == 1)
	{
		printf("1");
		return;
	}
	else if(nb == 0)
	{
		printf("0");
		return;
	}
	while(nb >= i)
	{
		if(nb % i == 0)
		{
			printf("%d",i);
			if(nb != i)
				printf("*");
			nb /= i;
			i--;
		}
		i++;
	}
}




int main(int ac, char **av)
{
	if(ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return(0);
}
