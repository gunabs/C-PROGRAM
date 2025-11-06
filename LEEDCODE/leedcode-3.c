
#include <stdio.h>
#include <stdbool.h>
int perpectnum(int n)
{
    int sum=0;
   for(int i=1;i<=n/2;i++)
   {
       if(n%i==0)
       {
          sum+=i; 
       }
   }
      
return sum;      
}

int main() {
    
    int n=28;
    int a=perpectnum(n);
    
    if(a==n)
    {
        printf("its perfect num ");
        
    }
    else
    {
        printf("its not perfect num ");
    }

    return 0;
}
