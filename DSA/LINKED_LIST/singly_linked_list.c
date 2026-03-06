//just create one linked list add the val end of list

#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *next;
};



int main() {
  
    struct node *head,*newnode,*temp;
    int choise=1;
    
    head=0;
      while(choise){
    newnode=(struct node*)malloc(sizeof (struct node));
    
    printf("enter val");
    scanf("%d",&newnode->val);
    
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->next=0;
        temp=newnode;
    }
    
    printf("enter newnode 1 : 0");
    scanf("%d",&choise);
    
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
    
    return 0;
}
