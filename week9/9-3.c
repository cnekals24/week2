#include <stdio.h>
#include <stdlib.h>
void f(void)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;
int main(void)
{
	for (i=0;i<5;i++)
	{
		f();
	}
	return 0;
	
}

void f(void)
{
	for(i=0;i<10;i++)
		printf("#");
}
