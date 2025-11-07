
#include <stdio.h>

void rotation(int *num,int k)
{
    int n=5;
    int temp[k];
    for(int i=0;i<k;i++)
    {
        temp[i]=num[i];
    }
    for(int j=0;j<n-k;j++)
    {
        num[j]=num[j+k];
    }
    for(int i=0;i<k;i++)
    {
        num[n-k+i]=temp[i];
    }
}

int main() {
  
int num[]={1,2,3,4,5};

int k=2;

rotation(num,k);
for(int i=0;i<5;i++)
{
    printf("%d ",num[i]);
}
    return 0;
}
