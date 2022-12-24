#include <graphics.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int main()
{
	initgraph(500, 500);
	circle(250,250,100);
	_getch();
	closegraph();
	return 0;
}