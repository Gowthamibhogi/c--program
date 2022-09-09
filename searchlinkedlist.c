#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
}

stnode, *endnode;

int findelement(int);
void main()
{
    int n,i,searchele,searchplace;
    stnode.next=NULL;
    endnode=&stnode;
    printf("\n\n linked list: search an element in a single linked list :\n");
    printf("**************\n");
    printf("input the number of nodes:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        endnode->next=(struct node*)malloc(sizeof(struct node));
        printf("input data for node %d:",i+1);
        scanf("%d",&endnode->num);
        endnode=endnode->next;
    }
    endnode->next=NULL;
    printf("\n data entered in the list are:\n");
    
    endnode=&stnode;
    while(endnode->next!=NULL)
    {
        printf("data=%d\n",endnode->num);
        endnode=endnode->next;
    }
    
    printf("\n");
    printf("input the element to be searched:");
    scanf("%d",&searchele);
    searchplace=searchelement(searchele);
    if(searchplace<=n)
    printf("element found at node %d \n\n",searchplace);
    else
    printf("this element does not exits in linked list \n\n");
}
int searchelement(int searchele)
{
    int count=1;
    endnode=&stnode;
    while(endnode->next!=NULL)
    {
        if(endnode->num==searchele)
        break;
        else
        count++;
        endnode=endnode->next;
    }
    return count;
}