
#include <stdio.h>

int itsprime(int i)
{
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n=20;
    int len=n/2;
    int flag=1;
    for(int i=6;i<=len;i++)
    {
        if(n%i==0)
        {
            int result=itsprime(i);
           
            if(result==1)
            {
                flag=0;
                break;
            }
        }
        
    }

if(flag)
{
    printf("%d is ugly num",n);
}
else
{
    printf("%d is not ugly num",n);
}


    return 0;
    
    
    
}
