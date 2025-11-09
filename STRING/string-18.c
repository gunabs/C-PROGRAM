
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* multiply(char* num1, char* num2) {

    int len1=strlen(num1);
    int len2=strlen(num2);
    int len=len1+len2;

    int *result=(int*)calloc(len,sizeof(int));

    char* product=malloc(len+1);

    if(num1[0]=='0'||num2[0]=='0')
    {
        product[0]='0';
        product[1]='\0';
        free(result);
        return product;
    }

    for(int i=len2-1;i>=0;i--)
    {
        for(int j=len1-1;j>=0;j--)
        {
            int mul=(num2[i]-'0')*(num1[j]-'0');
            int sum=mul+result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]+=sum/10;
        }
    }

    int index=0;
    int start=0;

    while(len>start&&result[start]==0)
    {
        start++;
    }
    
   for(int i=start;i<len;i++)
   {
    product[index++]=result[i]+'0';
   }
   product[index]='\0';
   free(result);

   return product;


}

int main() {
    
    char num1[100],num2[100];
    printf("enter num");
    scanf("%s",num1);
    printf("enter num");
    scanf("%s",num2);
    
    char *result=multiply(num1,num2);
   
  printf("the mul of num1 and num2 =%s",result);
  free(result);

    return 0;
} 
