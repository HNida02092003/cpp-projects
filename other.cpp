#include <iostream>
#include <stdio.h>
#include <cstdlib>
int main(){

	float x,y,a;
	system("color 0c");
	for(y=1.5;y>-1.5;y-=0.1)
	{
		for(x=-1.5;x<1.5;x+=0.05){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
		}

		putchar('\n');
	}
	fflush(stdout);
	printf("i love you canim kendim <3\n");
	system("pause");
	return 0;
}

