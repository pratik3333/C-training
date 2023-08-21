#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
void insert();
void display();
int choice, data;

int main()
{
    do
    {
        printf("\nEnter 1 for Insert");
        printf("\nEnter 2 for Display");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    } while (choice != 3);

    return 0;
}

void insert()
{
    if (head == NULL)
    {
        head = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter data in node\n");
        scanf("%d", &head->data);
        head->next = NULL;
    }
    else
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter data in temporary node\n");
        scanf("%d", &temp->data);
        temp->next = head;
        head = temp;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\nData not present in linked list\n");
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp != NULL)
        {
            int data = temp->data;
            printf("%d\t", data);
            temp = temp->next;
        }
    }
}