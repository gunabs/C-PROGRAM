
#include <stdio.h>

int main() {
  int max=0; 
  int second=0;
  
  int a[]={1,2,4,7,7,5};
  
  for(int i=0;i<6;i++)
  {
      if(max<a[i])
      {
          second=max;
          max=a[i];
      }else if(max>a[i]&&second<a[i])
      {
          second=a[i];
      }
  }
  
  printf(" second max:%d",second);
    return 0;
}
