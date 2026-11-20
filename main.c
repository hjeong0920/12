#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("input p1 coordinate (x y) : ");
    if (scanf("%d %d", &p1.x, &p1.y) != 2)
        return 1;

    printf("input p2 coordinate (x y) : ");
    if (scanf("%d %d", &p2.x, &p2.y) != 2)
        return 1;

    xdiff = p2.x - p1.x;
    ydiff = p2.y - p1.y;
    dist = sqrt((double)xdiff * xdiff + (double)ydiff * ydiff);

    printf("distance : %f\n", dist);

    return 0;
}