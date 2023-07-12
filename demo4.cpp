#include <graphics.h>
#include <conio.h>

int main()
{
    initgraph(500, 500);

    setbkcolor(YELLOW);
    cleardevice();

    int step = 50;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if ((i + j) % 2 == 1)
            {
                setfillcolor(BLACK);
                solidrectangle(i * step, j * step, (i + 1) * step, (j + 1) * step);
            }
            else
            {
                setfillcolor(WHITE);
                solidrectangle(i * step, j * step, (i + 1) * step, (j + 1) * step);
            }
        }
    }
    
    getch();
    closegraph();
    return 0;
}

// g++ demo4.cpp -o demo4 -I. libeasyx.a && demo4.exe
