#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));

	initgraph(640, 480);

	// 定义点的坐标数组
	int x[100];			// 点的 x 坐标
	int y[100];			// 点的 y 坐标
	int i;

	// 初始化点的初始坐标
	for (i = 0; i < 100; i++)
	{
		x[i] = rand() % 640;
		y[i] = rand() % 480;
	}

	while (!_kbhit())
	{
		for (i = 0; i < 100; i++)
		{
			// 擦掉前一个点
			putpixel(x[i], y[i], BLACK);
			// 计算新坐标
			y[i] += 3;
			if (y[i] >= 480) y[i] = 0;
			// 绘制新点
			putpixel(x[i], y[i], WHITE);
		}

		Sleep(10);
	}

	closegraph();
	return 0;
}
