
#include <stdio.h>

int main() {
  
  char text[] = "xyzabxyzabxyz", pattern[] = "xyz";
  int n=13;
 
  for(int i=0;i<n;i++){
      int t=1;
      for(int j=0;j<3;j++)
      {
           
          if(text[i+j]!=pattern[j])
          {
              t=0;
              break;
    
          }
          
      }
      if(t==1)
      {
          printf("%d ",i);
      }
  }
    return 0;
}
