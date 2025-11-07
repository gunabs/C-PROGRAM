
#include <stdio.h>

int main() {
 int nums[] = {0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1} , k = 3,n=17;
 int i=0;
 while(k)
 {
     if(nums[i]==0)
     {
         nums[i]=1;
         k--;
     }
     i++;
 }
 int count=0,max=0;
 for(i=0;i<n;i++)
 {
     if(max<count)
         {
             max=count;
         }
     if(nums[i]==1)
     {
         count++;
     }
     else
     {
         
         count=0;
     }
 }
   
   printf("%d ",max);

    return 0;
}
