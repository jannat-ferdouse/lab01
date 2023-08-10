#include<graphics.h>
#include <stdio.h>

int main()
{

    int driver=DETECT, mode=0;
    initgraph(&driver, &mode, NULL);
    setcolor(GREEN);
    rectangle(40,80, 600, 400);
    floodfill(320, 240, GREEN);
    setcolor(RED);
    circle(320, 240, 100);
    floodfill(320, 240, RED);
    setcolor(YELLOW);

    line(600, 80, 600, 480);

    getchar();
}
