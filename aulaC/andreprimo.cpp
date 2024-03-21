#include <stdio.h>
#include <stdlib.h>

main()
{
int x,y,primo;

for(x=0;x<=100;x++){
primo=0;
for(y=1;y<=x;y++)
if ((x%y)==0)
primo++;

if(primo<1)
	printf("%d e primo\n",x);


return 0;	
}	
}
