
#include <stdio.h>
void swap(char* ch1,char*ch2)
{
    char tem=*ch1;
    *ch1=*ch2;
    *ch2=tem;
}

void fun(char *cht,int str,int end)
{
    if(str==end)
    {
        printf("%s ",cht);
    }
    else
    {
        for(int i=str;i<end;i++)
        {
            swap((cht+str),(cht+i));
            fun(cht,str+1,end);
            swap((cht+str),cht+i);
        }
    }
}

int main() {
   char str []="abc";
   int n=sizeof(str)/sizeof(str[0]);
   
   fun(str,0,n-1);
   
   

    return 0;
}
