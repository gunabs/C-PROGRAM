#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isNumber(char* s) {
       bool seendigit=false;
       bool seenexp=false;
       bool seendot=false;
       bool afterdigitexp=true;

    for(int i=0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        {
            seendigit=true;
            if(seenexp)
            {
              afterdigitexp=true;
            }

        }
        else if(s[i]=='+'||s[i]=='-')
        {
            if(i>0&&s[i-1]!='e'&&s[i-1]!='E')
            {
                return false;
            }

        }
        else if(s[i]=='.')
        {
          if(seendot||seenexp)
          {
            return false;
          }
          seendot=true;
        }
        else if(s[i]=='e'||s[i]=='E')
        {
            if(seenexp||!seendigit)
            {
                return false;
            }
            seenexp=true;
            afterdigitexp=false;

        }
        else
        {
           return false;
        }
    }



    return seendigit&&afterdigitexp;
    
}

int main()
{
  char s[]="0";
  printf("%d",isNumber(s));

  return 0;
}
