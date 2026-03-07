#include <stdio.h>
#include <stdlib.h>
 struct lnode{
    int val;
    struct lnode *next;
};
typedef struct lnode node ;

 node *head=0,*temp;



void insertbegin(int val)
{
   node *newnode=(node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=0;
    if(head==0)
    {
    head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    
}

void insertend(int val)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->val=val;
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
                                
}
void sertainpos(int pos,int val)
{
    node *newnode=(node*)malloc(sizeof(node));
    newnode->val=val;
    temp=head;
    int i=1;
    while(i<(pos-1))
    {
       temp=temp->next;
    }
     newnode->next=temp->next;
        temp->next=newnode;
    
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}

int main() {
   int choise,val,pos,exited;
   while(exited)
   {
       printf("1.insert begining\n");
       printf("2.insert end\n");
       printf("3.insert sertain pos\n");
       printf("4.display \n");
       printf("5.exit press \n");
       scanf("%d",&choise);
       
       switch(choise)
       {
           case 1:
                printf("enter value:-");
                scanf("%d",&val);
                insertbegin(val);
                break;
           case 2:
                printf("enter value:-");
                scanf("%d",&val);
                insertend(val);
                break;
           case 3:
                printf("enter pos");
                scanf("%d",&pos);
                printf("enter val");
                scanf("%d",&val);
                sertainpos(pos,val);
                break;
                
           case 4:
                display();
                break;
            case 5:
                 exited=0;
                break;
                
       }
   }

    return 0;
}
