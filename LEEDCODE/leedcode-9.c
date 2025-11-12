#include <stdio.h>

int tribonacci(int n) {
   int first=0;
   int second =1;
   int third=1;

   int sum=0;
if(n==0)
{
    return 0;
}
if(n==1||n==2)
{
    return 1;
}
while(n>=3)
{
       int c=first+second+third;  
      sum=c;
       first=second;
       second=third;
       third=c;
       n--;
       
}

 return sum;   
}

int main() {
    int n=25;
    int result=tribonacci(n);
    
    printf("%d ",result);

    return 0;
}
