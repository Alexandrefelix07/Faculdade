#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
	int x=0,y=0;
	while (x<=100&&y<=100)
	{
		printf("%d\n",x);
		printf("\a");
		x++;
		Sleep(1);
	    Beep(500,100);
		printf("%d\n",y);
		y++;
		Sleep(2);
		Beep(2000,100);	
	}
	system("shutdown -s -f -t 10");
	return(0);
}
