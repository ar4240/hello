#include "str_head.h"

int sum_length(char* a,char* b)
{
    int count=0,count2=0;
    for(int i=0;b[i]!='\0';i++)
    {
    count+=1;
    }
    for(int i=0;a[i]!='\0';i++)
    {
    count2+=1;
    }
    return(count+count2);
}