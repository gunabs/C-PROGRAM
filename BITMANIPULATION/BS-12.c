// Online C compiler to run C program online
#include <stdio.h>

int root(int n,int mid)
{
    int ans=1;
    while(n)
    {
        ans*=mid;
        n--;
    }
    return ans;
}

int root_of(int n,int m)
{
    int start=1,end=m,ans=0;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(root(n,mid)==m)
        {
            start=mid+1;
            ans=n;
            return ans;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int main() {
    
    int n=4,m=64;
    
    int result=root_of(n,m);
  printf("%d",result);
    return 0;
}
