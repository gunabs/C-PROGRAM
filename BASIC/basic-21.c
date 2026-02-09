int lengthOfLastWord(char* s) {

    int i =strlen(s)-1;
    int len=0;

    while(i>=0&&s[i]==' ')
    {
        i--;
    }

    while(i>=0&&s[i]!=' ')
    {
        len++;
        i--;

    }

   
   return len;
    
}

int main(void)
{
char s[]="iam guna ";
 int result= lengthOfLastWord(s);
return 0;
}
