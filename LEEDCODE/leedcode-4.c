
#include <stdio.h>

int last_1(int n)
{
    int count=0;
    while(n)
    {
            count++;
        n=n>>1;
    }
    return count;
}

int main() {
    int n=9;
    
    int last=last_1(n);
    
    int a=1;
    
    while(last)
    {
        n=n^a;
        a=a<<1;
        last--;
    }
printf("%d",n);
    return 0;
}
