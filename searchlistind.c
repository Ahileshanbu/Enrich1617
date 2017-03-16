#include<stdio.h>
#include<stdlib.h>

struct list
{
    int element;
    struct list * next;
};

struct list * head=NULL;
struct list * curr=NULL;

void create(int n)
{
    struct list * temp = (struct list*)malloc (sizeof(struct list));
    temp->next = NULL;
    temp->element=n;
    if(head==NULL)
    {
        head=curr=temp;
    }
    else
    {
        curr->next=temp;
        curr=temp;
    }
    printf("%d",curr->element);
}

void disp()
{
    struct list * p;
    printf("\n");
    for(p=head;p->next!=NULL;p=p->next)
    {
        printf("%d ",p->element);
    }
    printf("%d ",p->element);

}

void search(int n)
{
    struct list * p ;
    int c=0;
    for(p=head;p!=curr;p=p->next)
    {
        c++;
        if(p->element==n)
        {
            break;
        }

    }
    if((p->element==curr->element) && (p->element==n ))
    {
        c++;
        printf("The index is %d",c);
    }
   else if(p->element==n)
    {
        printf("The index is %d",c);
    }
    else
    {
        printf("The element is not present");
    }

}
void main()
{
    int n,e,i,s;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("enter element");
         scanf("%d",&e);
         create(e);
    }
    disp();
    printf("Enter the search element");
    scanf("%d",&s);
    search(s);
}
