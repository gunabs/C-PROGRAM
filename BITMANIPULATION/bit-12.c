
#include <stdio.h>

int main() {
  
  int a=15;//0000 1111
  int count=0;
  while(a)
  {
      if(a&1!=0)
      {
          count++;
      }
      a=a>>1;
  }
  
  printf("%d",count);

    return 0;
}
