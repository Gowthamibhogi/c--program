#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertend(struct node** head, int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    {
        struct node* lastnode=*head;
        while(lastnode->next!=NULL)
        {
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
    printf("%d inserted at the end\n",data);
}
void display(struct node* head)
{
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");
}
int main()
{
    struct node* head=NULL;
    struct node* head2=NULL;
    struct node* head3=NULL;
    struct node* head4=NULL;
    
    head=(struct node*)malloc(sizeof(struct node));
    head2=(struct node*)malloc(sizeof(struct node));
    head3=(struct node*)malloc(sizeof(struct node));
    head4=(struct node*)malloc(sizeof(struct node));
    
    head->data=19;
    head->next=node2;
    
    head2->data=21;
    node2->next=node3;
    
    head3->data=11;
    node3->next=node4;
    
    head4->data=18;
    node4->next=NULL;
    
    printf("linked list before operation :");
    display(head);
    
    insertend(&head,1);
    insertend(&head,2);
    insertend(&head,3);
    insertend(&head,4);
    printf("linked list after operations :");
    display(head);
    return 0;
}