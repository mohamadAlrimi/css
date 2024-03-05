#include <stdio.h>
#include <stdlib.h>
struct node2
{
    int data;
    struct node2 *link;
};
int main()
{
    struct node2 *head = malloc(sizeof(struct node2));
    head->data = 12;
    head->link = NULL;
    struct node2 *current = malloc(sizeof(struct node2));
    current->data = 13;
    head->link = current;
    current = malloc(sizeof(struct node2));
    current->data = 14;
    head->link->link = current;
    printf("%d", head->data);
    printf("%d", current->data);
    return 0;
}

// struct node2
// {
//     int data;
//     struct node2 *link;
// };
// void count(struct node2 *head)
// {
//     int c = 0;
//     if (head == NULL)
//         printf("the node is empty");
//     struct node2 *ptr = NULL;
//     ptr = head;
//     while (ptr != NULL)
//     {
//         c++;
//         ptr = ptr->link;
//     }
//     printf("%d", c);
// }

// int main()
// {
//     struct node2 *head = malloc(sizeof(struct node2));
//     head->data = 88;
//     head->link = NULL;
//     struct node2 *current = malloc(sizeof(struct node2));
//     current->data = 55;
//     head->link = current;
//     current = malloc(sizeof(struct node2));
//     current->data = 55;
//     head->link->link = current;
//     // printf("%d", head->data);
//     count(head);

//     return 0;
// }#include <stdio.h>
// #include <stdlib.h>
// struct node2
// {
//     int data;
//     struct node2 *link;
// };
// void count(struct node2 *head){
//     int c=0;
//     if (head == NULL)
//     printf("the node is empty");
//     struct node2 *ptr=NULL;
//     ptr=head;
//     while(ptr != NULL){
//         c++;
//         ptr=ptr->link;    }

//         printf("%d",c);

// }

// int main()
// {
//     struct node2 *head = malloc(sizeof(struct node2));
//     head->data = 88;
//     head->link = NULL;
//     struct node2 *current = malloc(sizeof(struct node2));
//     current ->data = 55;
//     head->link=current;
//   current = malloc(sizeof(struct node2));
//     current->data=33;
//     head->link->link=current;

//     printf("%d\n", head->data);
//     printf("%d\n", current->data);
//        count(head);

//     return 0;
// }