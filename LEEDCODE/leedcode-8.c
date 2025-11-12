#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {

    *returnSize=rowIndex+1;
    int n=rowIndex+1;

    int arr[n][n];

    arr[0][0]=1;

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==j)
              arr[i][j]=1;
            else 
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            } 
        }
    }

    int *result=(int*)malloc(n*sizeof(int));

    for(int i=rowIndex;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            result[j]=arr[i][j];
        }
    }
return result;
    
}


int main() {
   
   int rowIndex=3,returnSize=0;
   int *arr=getRow(rowIndex,&returnSize);
   
   for(int i=0;i<=returnSize;i++)
   {
       printf("%d ",arr[i]);
   }
   
   
   
}
