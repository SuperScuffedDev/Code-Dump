#include<stdio.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node_t;

void printList(node_t *head)
{
    node_t *temp = head;

    while (temp != NULL)
    {
        printf("(%d)->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    node_t n1, n2, n3;
    node_t *head;

    n1.data = 67;
    n2.data = 69;
    n3.data = 420;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printList(head);

    return 0;
}

/*
    linked list for collisions
*/
