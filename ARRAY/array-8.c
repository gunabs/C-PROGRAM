#include <stdio.h>

int main(){

int a[]={1,3,4,5};


int n=4;

int a1=0;
int a2=0;

for(int i=0;i<n-1;i++)
{

  a1=a1^(i+1);
  a2=a2^a[i];

}

a1=a1^n;


printf("%d ",a1^a2);


return 0;
}
