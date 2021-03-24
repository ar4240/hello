#include<stdio.h>
#include "calc_head.h"

int main()
{
    int a=10,b=10;
    printf("%d\n",sum(a,b));
    printf("%d\n",sub(a,b));
    printf("%d\n",mul(a,b));
    printf("%d\n",div(a,b));
    
    test_main();
	return 0;
}