#include <stdio.h>
#include <string.h>

int countCharacters(char** words, int wordsSize, char* chars) {

    int charfreq[26]={0};
    for(int i=0;i<strlen(chars);i++)
    {
        charfreq[chars[i]-'a']++;
    }

   int result=0;

    for(int i=0;i<wordsSize;i++)
    {
        int words_freq[26]={0};

         for(int j=0;words[i][j]!='\0';j++)
         {
         words_freq[words[i][j]-'a']++;

         }
      int present=1;
         for(int k=0;k<26;k++)
         {
            if(charfreq[k]<words_freq[k])
            {
               present=0;
                break;
            }
         }

         if(present==1)
         {
            result+=strlen(words[i]);
         }




    }

  return result;  
}

int main()
{
   char *words[]={"cat","bt","hat","tree"};
   int n=sizeof(words)/sizeof(words[0]);
   char chars[]="atach";
   
   int ans=countCharacters(words,n,chars);
   
   printf("%d",ans);
   
    return 0;
}
