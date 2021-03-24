#include<stdio.h>
#include<string.h>
#include "str_head.h"

int main()
{
    
    char a[]="hello_aditya";
    char b[]="world";
    int len1=length1(a);
    int len2=length1(b);
    printf("%d\n",len1);
    printf("%d\n",len2);
    printf("%d\n",sum_length(a,b));
    printf("%d\n",maxlength(len1,len2));
    return 0;

}