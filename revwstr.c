#include<unistd.h>

int ft_isblank(char c)
{
	return(c == ' ' || c == '\t');
}

int str_len(char *str)
{
	int len = 0;

	while(*str)
	{
		len++;
		str++;
	}
	return(len);
}

void rev(char *str)
{
	int fast = str_len(str)	- 1;
	int curr = fast;
	int slow = fast;

	while(fast >= 0)
	{
		curr = fast;
		slow = fast;
		while(fast >= 0 && !ft_isblank(str[fast]))
			fast--;
		fast++;

		curr =fast;

		while(curr <= slow)
		{
			write(1,&str[curr],1);
			curr++;
		}
		if(fast > 0)
			write(1," ",1);
		fast--;
		fast--;

	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		rev(av[1]);
	write(1,"\n",1);
	return(1);
}
