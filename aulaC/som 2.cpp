#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
	int x=0,y=0;
	while (x<=100&&y<=100)
	{
		printf("%d\n",x);
		x++;
		Sleep(1);
		Beep(1550,170);
		printf("%d\n",y);
		y++;
		Sleep(2);
		Beep(2757,60);
							}
	return(0);
}
