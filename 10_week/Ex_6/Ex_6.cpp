#include <stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT} ARROW;

int main(void)
{
    COLOR my_color = YELLOW;
    ARROW direction = UP;
    int i, j = direction;

    for (i = CYAN; i <= BLACK; i++)
    {
        j++;
        direction = ARROW(j % 4);
        if (i == my_color) break;
    }

    switch (direction)
    {
    case UP: printf("new direction : UP\n"); break;
    case DOWN: printf("new direction : DOWN\n"); break;
    case LEFT: printf("new direction : LEFT\n"); break;
    case RIGHT: printf("new direction : RIGHT\n"); break;
    }
    return 0;
}