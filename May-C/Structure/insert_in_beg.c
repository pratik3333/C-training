#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;
void insertAtBeg();
void Display();
int data,choice;

void main()
{
    do
    {
        printf("\nEnter the choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            insertAtBeg();
            break;

        case 2:
             Display();
             break;

        default:
               printf("\n Invalid Input");
            break;
        }
    } while (choice!=3);
    
}

void insertAtBeg()
{
    if (head==NULL)
    {
        head=(struct node*)malloc(sizeof (struct Node));
        printf("\nEnter the data in node");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else
    {
        struct Node *temp;
        temp=(struct node*)malloc(sizeof(struct Node));
        printf("\nEnter data in temporary node\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        head=temp;
    }
    
}

void Display()
{
    if (head==NULL)
    {
        printf("\nData not present in linked list\n");
    }
    else
    {
        struct Node *temp;
        temp=head;
        while (temp!=NULL)
        {
            int data=temp->next;
            printf("%d\t",data);
            temp=temp->next;

        }
        
    }
    
}