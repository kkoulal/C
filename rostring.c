#include<unistd.h>

int ft_isblank(char c)
{
	return(c == ' ' || c == '\t');
}


void rostring(char *s)
{
	int i = 0;
	int strlen1 = 0;

	while(s[i])
	{
		while(ft_isblank(s[i]))
			i++;
		if(s[i] && !ft_isblank(s[i]))
		{
			if(strlen1 = 0)
				while(s[i] && !ft_isblank(s[i++]))
					strlen1++;
			else
			{
				while(s[i] && !ft_isblank(s[i]) && write(1,&s[i++],1));
				write(1," ",1);
			}
		}
	}
	i = 0;
	while(ft_isblank(s[i]))
		i++;
	while(strlen1--)
		write(1,&s[i++],1);
}





int main(int ac, char **av)
{
	if(ac == 2 && *av[1])
		rostring(av[1]);
	write(1,"\n",1);
	return(0);
}
