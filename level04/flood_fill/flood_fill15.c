#include "flood_fill.h"

void	fill(char **tab, t_point size,char target, int x, int y)
{
	if (x < 0 || y < 0 || x >= size || y >= size)
		return ;
	if (tab[x][y] == 'F' || tab[x][y] != target)
		return ;
	fill(*tab, size, objective, x + 1, y);
	fill(*tab, size, objective, x - 1, y);
	fill(*tab, size, objective, x, y + 1);
	fill(*tab, size, objective, x, y - 1);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{

	char target = tab[begin.x][begin.y];
	fill(tab, size, target, begin.y, begin.x);
}

