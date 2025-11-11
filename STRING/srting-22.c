
#include <stdio.h>
#include<string.h>

int main() {
   char s[]="hello";
   
   char* token=strtok(s," ");
  int count=0;
   while(token!=NULL)
   {
       count++;
       token=strtok(NULL," ");
   }
   printf("%d",count);
    return 0;
}
