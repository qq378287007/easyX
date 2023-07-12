#include <graphics.h>
#include <conio.h>

int main()
{
    initgraph(666, 666); // 初始化画布

    // 背景填充
    setbkcolor(GREEN);
    // setbkmode(TRANSPARENT);
    cleardevice();

    // putpixel(x, y, c); // 画点(x,y)，颜色c

    // 圆
    setcolor(YELLOW); // 线条黄色
    // circle();//无填充

    setfillcolor(RED);        // 红色填充
    fillcircle(300, 300, 60); // 有边框填充

    // solidcircle();//无边框填充

    // ellipse, pie, polygon, rectangle, roundrect

    // 直线
    setlinecolor(RGB(200, 0, 0));
    // setlinestyle(PS_SOLID, 3);
    for (int y = 0; y < 200; y++)
    {
        setcolor(RGB(0, 0, y)); // 渐变颜色
        line(0, y, 640, y);
    }

    RECT r = {0, 0, 200, 100};
    setbkcolor(WHITE);
    settextcolor(BLUE);
    settextstyle(30, 0, TEXT("行楷"));
    drawtext(TEXT("hello world"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

TCHAR s[] = _T("Hello你好World");
    outtextxy(10, 10, s);
    // textwidth("哈哈哈哈");
    // textheight("嘿嘿");

    // IMAGE img;
    // loadimage(&img,"./123.jpg");
    // putimage(0,0,&img);

    // BeginBatchDraw();        //开始双缓冲绘图，放在绘图之前
    // EndBatchDraw();          //结束双缓冲绘图，放在绘图之后
    // 或者  FlushBatchDraw();

    // HWND aaa;    //用HWND类型变量获取窗口句柄
    // aaa = GetHWnd();
    // SetWindowText(aaa,"爱乐之城");

    getch();      // 按任意键继续
    closegraph(); // 关闭图形界面

    return 0;
}

// g++ demo.cpp -o demo -I. libeasyx.a && demo.exe
