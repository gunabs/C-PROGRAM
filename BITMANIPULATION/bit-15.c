
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {

    if(n==1)
    {
        return true;
    }
  long p=2;
    while(p<=n)
    {
        if(p==n)
        {
            return true;
        }
        p*=2;
    }
return false;
    
}

int main() {
  
   int n=4;
   bool result=isPowerOfTwo(n);
   printf("%d ",result);

    return 0;
}
