#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a='b';
    int x=1;
    while (a!='a'){
    	printf("%d\n", x);
    	x++;
    	scanf(" %c", &a);
	}
}
