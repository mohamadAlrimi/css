#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void countofnode(struct Node *newNode)
{
    int count = 0;

    if (newNode == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    struct Node *ptr = newNode;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("Number of nodes: %d\n", count);
}

int main()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = 5;
    newNode->link = NULL;

    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    current->data = 3;
    current->link = NULL;

    newNode->link = current;

    current = (struct Node *)malloc(sizeof(struct Node));
    current->data = 6;
    current->link = NULL;

    newNode->link->link = current;

    countofnode(newNode);

    return 0;
}
