#include <stdio.h>
#include <stdlib.h>
struct Node1
{
    int data;
    struct Node1 *link;
};
void numberofnods(struct Node1 *head , int data )
{
    //int count = 0;
    if (head == NULL)
        printf("the node is empty");
    struct Node1 *ptr = head;
    // struct Node1 *temp;
    while (ptr->link != NULL)
    { 

        // لطباعة القيم
        // printf("%d", ptr->data);
        // ptr = ptr->link;
    //number-of-nodes
        // count++;
        // ptr = ptr->link;
    }
   // printf("%d", count);
}
int main()
{
    struct Node1 *head = (struct Node1 *)malloc(sizeof(struct Node1));
    head->data = 55;
    head->link = NULL;
    struct Node1 *current = (struct Node1 *)malloc(sizeof(struct Node1));
    current->data = 44;
    current->link = NULL;
    head->link = current;
    current = (struct Node1 *)malloc(sizeof(struct Node1));
    current->data = 22;
    current->link = NULL;
    head->link->link = current;
    current = (struct Node1 *)malloc(sizeof(struct Node1));
    current->data = 45;
    current->link = NULL;
    head->link->link->link = current;
    numberofnods(head);
    return 0;
}
