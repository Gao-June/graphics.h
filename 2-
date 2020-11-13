#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	initgraph(640, 480);

	for (int x = 100; x < 540; x += 20)
	{
		// 绘制黄线、绿色填充的圆
		setlinecolor(YELLOW);
		setfillcolor(GREEN);
		fillcircle(x, 100, 20);

		// 延时
		Sleep(500);

		// 绘制黑线、黑色填充的圆
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(x, 100, 20);
	}

	closegraph();
	return 0;
}
