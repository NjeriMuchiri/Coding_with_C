// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
// int data;
// struct node *link;
// };
// int main()
// {
//     struct node *head = NULL;
//     head = (struct node *)malloc(sizeof(struct node));

//     head->data = 45;
//     head->link = NULL;

//     struct node *current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link=NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));
//     current->data = 3;
//     current->link = NULL;

//     head->link->link = current;

//     printf("%d\n,%d\n", head->data,current->data);
//     return 0;
// }

//traversing a cngle link list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
int main()
{
    count_of_nodes(head);
}