#include <graphics.h>
#include <conio.h>
#include <math.h>

#define PI 3.1415926

int main()
{
    initgraph(640, 480);
    int c;
    double a;
    int x, y, r = 200;
    for (a = 0; a < PI * 2; a += 0.0001)
    {
        x = (int)(r * cos(a) + 320 + 0.5);
        y = (int)(r * sin(a) + 240 + 0.5);
        c = (int)(a * 255 / (2 * PI) + 0.5);
        setcolor(RGB(0, 255, c));
        line(320, 240, x, y);
    }

    getch();
    closegraph();
    return 0;
}

// g++ demo2.cpp -o demo2 -I. libeasyx.a && demo2.exe