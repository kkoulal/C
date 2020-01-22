#include<unistd.h>
#include<stdlib.h>

char *brackets(char *src, int way)
{
	int i = 0;
	while(1)
	{
		if(*src == '[')
			i++;
		if(*src == ']')
			i--;
		if(i == 0)
			return(src);
		src = src + way;
	}
	return (NULL);
}


void brainfuck(char *s)
{
	char *buff;
	buff = (char *)malloc(sizeof(*buff) * 4096);

	while(*s != '\0')
	{
		if(*s == '>')
			buff++;
		if(*s == '<')
			buff--;
		if(*s == '+')
			*buff += 1;
		if(*s == '-')
			*buff -= 1;
		if(*s == '.')
			write(1,&*buff,1);
		if(*s == '[' && *buff == 0)
			s = brackets(s, 1);
		if(*s == ']' && *buff != 0)
			s = brackets(s, -1);
		s++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		brainfuck(av[1]);
	else
		write(1,"\n",1);
}
