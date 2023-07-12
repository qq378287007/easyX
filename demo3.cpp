#include <graphics.h>
#include <conio.h>
int main()
{
    initgraph(600, 600);
    
    setbkcolor(YELLOW); // 背景色黄色
    cleardevice();      // 用背景色清空屏幕

    setlinestyle(PS_SOLID, 2); // 画实线，宽度为两像素
    setcolor(RGB(0, 0, 0));    // 设为黑色

    int step = 30;
    for (int i = 1; i <= 19; i++)
    {
        line(i * step, 1 * step, i * step, 19 * step);
        line(1 * step, i * step, 19 * step, i * step);
    }

    getch();
    closegraph();
    return 0;
}

// g++ demo3.cpp -o demo3 -I. libeasyx.a && demo3.exe