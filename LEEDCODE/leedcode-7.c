
#include <stdio.h>

int main() {
  
  int x=1,y=4;
  int count=0;
  
   while(x||y)
   {
       if((x^1)!=0&&(y^1)!=0)
       {
           //skip
       }
       else
       {
           count++;
       }
       x>>=1;
       y>>=1;
       
   }
   
   printf("%d ",count);

    return 0;
}
