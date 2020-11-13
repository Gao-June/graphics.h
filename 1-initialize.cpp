#include <iostream>
#include <graphics.h>		//图形库头文件
#include <conio.h>			//控制台输入输出

using namespace std;

int main() {

	initgraph(640, 480);			//创建画布 640*480

	line(200, 240, 440, 240);		// 画线(200,240) - (440,240)
	Sleep(2000);

	line(320, 120, 320, 360);
	Sleep(2000);

	setlinecolor(YELLOW);
	circle(100, 100, 50);

	Sleep(2000);
	setlinecolor(RED);
	circle(400, 400, 50);

	_getch();						//阻塞
	closegraph();					//关闭画布

	return 0;
}
