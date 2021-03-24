#include "str_head.h"

int length1(char* a)
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
    count+=1;
    }
    return count;
}