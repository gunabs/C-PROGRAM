#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    
int len=strlen(s);
int i=len-1;
int count=0;



while(i>=0&&s[i]==' ')
{
    i--;
}

while(i>=0&&s[i]!=' ')
{
count++;
i--;
}
    
return count;
}

int main() {
    
    char s[]="hello world ";
   int result= lengthOfLastWord(s);
   
   printf("%d",result);

    return 0;
}


