
#include <stdio.h>

int heightChecker(int* heights, int heightsSize) {


int exp[heightsSize];

for(int i=0;i<heightsSize;i++)
{
    exp[i]=heights[i];
}

for(int i=0;i<heightsSize;i++)
{
    for(int j=i+1;j<heightsSize;j++)
    {
        if(heights[i]>heights[j])
        {
            int temp=heights[i];
            heights[i]=heights[j];
            heights[j]=temp;
        }

    }
}
int count=0;

 for(int i=0;i<heightsSize;i++)
 {
    if(heights[i]!=exp[i])
    {
        count++;
    }
 }

return count;

    
}

int main() {
  
  int arr[]={1,1,4,2,1,3};
  int size=sizeof(arr)/sizeof(arr[0]);
  
  int result=heightChecker(arr,size);
  
  
  printf("%d ",result);
  
  
}









