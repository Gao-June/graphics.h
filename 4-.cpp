// a 左  d 右

#include <graphics.h>
#include <conio.h>

int main()
{
	initgraph(640, 480);

	int x = 320;

	// 画初始图形
	setlinecolor(YELLOW);
	setfillcolor(GREEN);
	fillcircle(x, 240, 20);

	char c = 0;
	while (c != 27)
	{
		// 获取按键
		c = _getch();

		// 先擦掉上次显示的旧图形
		setlinecolor(BLACK);
		setfillcolor(BLACK);
		fillcircle(x, 240, 20);

		// 根据输入，计算新的坐标
		switch (c)
		{
		case 'a': x -= 2; break;
		case 'd': x += 2; break;
		case 27: break;
		}

		// 绘制新的图形
		setlinecolor(YELLOW);
		setfillcolor(GREEN);
		fillcircle(x, 240, 20);

		// 延时
		Sleep(10);
	}

	closegraph();
	return 0;
}
