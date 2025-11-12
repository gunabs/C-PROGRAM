// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   
   int n=43261596;
   int arr[32]={0};
   int i=0;
   while(n)
   {
       arr[i]=n%2;
       n/=2;
       i++;
       
   }
   int sum=0;
   int a=1;
   for(int j=31;j>=0;j--)
   {
      sum+=(arr[j]*a); 
      a=a*2;
   }
   printf("%d ",sum);
    return 0;
}
