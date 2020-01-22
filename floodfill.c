#include"t_point.h"

void fill(char *tab, int x, int y, int prevcolor, t_point size)
{
	if(x < 0 || y < 0 || x >= size.x || y >= size.y)
		return;
	if(prevcolor != tab[y][x])
		return;
	tab[y][x] = 'F';
	fill(tab, x - 1, y, prevcolor, size);
	fill(tab, x+1, y, prevcolor,size);
	fill(tab, x, y - 1, prevcolor, size);
	fill(tab, x, y + 1, prevcolor, size);



}


void  flood_fill(char **tab, t_point size, t_point begin)
{
	char prevcolor = tab[begin.y][begin.x];
	fill(tab, begin.x, begin.y, prevcolor, t_point size);

}
