
#include <stdio.h>

int main() {
   
   int a=5,goal=7,sum=0,ans=0;;
   
  while(a>0||goal>0)
  {
  if((a&1)!=(goal&1))
  {
      ans++;
  }
  a=a>>1;
  goal=goal>>1;
  }
printf("%d",ans);
    return 0;
}
