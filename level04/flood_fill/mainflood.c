#include "flood_fill.h"
#include <unistd.h>

void print_tab(char **tab)
{
    int y;
    int x;
    
    y = 0;
    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            write(1, &tab[y][x], 1);
            x++;
        }
        write(1, "\n", 1);
        y++;
    }
}

char **make_area(char **zone)
{
    return zone;
}


int main(void)
{
	char **area;
	t_point size = {8, 5};
	t_point begin = {2, 2};
	char *zone[] = {
		"1 1 1 1 1 1 1 1",
		"1 0 0 0 1 0 0 1",
		"1 0 0 1 0 0 0 1",
		"1 0 1 1 0 0 0 1",
		"1 1 1 0 0 0 0 1",
	};
	area = make_area(zone);
	print_tab(area);
	flood_fill(area, size, begin);
	write(1, "\n", 1);
	print_tab(area);
	return (0);
}
