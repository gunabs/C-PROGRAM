
#include <stdio.h>
#include <stdbool.h>
bool divisorGame(int n)
{
    if(n%2==0)
      return true;
      
return false;      
}

int main() {
    
    int n=6;
    bool a=divisorGame(n);
    
    if(a)
    {
        printf("alice  win");
        
    }
    else
    {
        printf("alice not win");
    }

    return 0;
}
