#include <stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}

int main() {
    int stone[]={6,2,2,7};
    int size=4;
    while(size>1)
    {
    qsort(stone,size,sizeof(int),cmp);
    
    int y=stone[0];
    int x=stone[1];
    
    if(x==y)
    {
       stone[0]=stone[size-1];
       stone[1]=stone[size-2];
       
       size-=2;
    }
    else
    {
        stone[0]=y-x;
        stone[1]=stone[size-1];
        size-=1;
    }
    
    
}
int result=(size==1)? stone[0]:0;
    printf("%d ",result);
    return 0;
}
