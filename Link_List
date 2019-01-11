#include<stdio.h>
#include<stdlib.h>
#define SIZE    10

typedef struct node{
        int data;
        struct node *next;
}Node;

//Node *head = NULL;

void create_link_list(Node **, int);
void display(Node *);
void insert_node_begning(Node **,int);
void insert_node_end(Node *, int);
void insert_between(Node *,int,int);
void delete_link_list(Node **);
void delete_node(Node **, int);
void count_node(Node *);
void middle_node(Node *);

int main(void)
{
        Node *head = NULL;

        create_link_list(&head,SIZE);
        display(head);
        middle_node(head);
        count_node(head);
        insert_node_begning(&head,-1);
        display(head);
        middle_node(head);
        count_node(head);
        count_node(head);
        insert_node_end(head,10);
        display(head);
        middle_node(head);
        count_node(head);
        count_node(head);
        insert_between(head,5,-3);
        display(head);
        middle_node(head);
        count_node(head);
        count_node(head);
        delete_node(&head , 10);
        display(head);
        count_node(head);
        delete_link_list(&head);
        display(head);
        count_node(head);
        return 0;
}

void middle_node(Node *head)
{
        Node *slow = NULL;
        Node *fast = NULL;
        slow = head;
        fast = head;

        while(fast != NULL && fast -> next != NULL)
        {
                fast = fast -> next -> next;
                slow = slow -> next;
        }

        printf("Middle Data = %d\n",slow -> data);
        return ;
}


void count_node(Node *head)
{
        int count = 0;
        Node *current = NULL;
        current = head;

        while(current != NULL)
        {
                count++;
                current = current -> next;
        }
        printf("Number of Node = %d\n", count);
        return ;
}

void delete_node(Node **head, int node_value)
{
        Node *current = NULL;
        Node *prv = NULL;
        Node *next = NULL;

        current = *head;

        if(current == NULL)
        {
                printf("No lInk List\n");
                return ;
        }

        if(current -> data == node_value && current -> next == NULL)
        {
                printf("Only one node\n");
                free(*head);
                return;
        }

        if(current -> data == node_value && current -> next != NULL)
        {
                printf("Deleting Head Node\n");
                *head = current -> next;
                free(current);
                return ;
        }

        while(current != NULL)
        {
                if(current -> data == node_value && current -> next  == NULL)
                {
                        printf("Deleting Last Node \n");
                        prv -> next = NULL;
                        free(current);
                        return;
                }
                if(current -> data == node_value && current -> next != NULL)
                {
                        prv-> next = current -> next;
                        free(current);
                        return;

                }

                prv = current ;
                current = current -> next;
        }

        return ;
}


void delete_link_list(Node **head)
{
        Node *current = NULL;
        Node *prv = NULL;
        current = *head;

        while(current != NULL)
        {
                prv = current ;
                current = current -> next;
                free(prv);
        }

        *head = NULL;
        printf("Link List deleted\n");
        return ;
}

void insert_between(Node *head,int pos,int val)
{
        Node *new = NULL;
        Node *current = NULL;
        int i;
        current = head;
        new = (Node *)malloc(sizeof(Node));
        new -> data = val;

        if(current == NULL)
        {
                printf("No link list");
                return;
        }

        for(i = 0; i < pos - 1 ; i++)
                current = current -> next;

        new -> next = current -> next;
        current -> next = new;
        return;
}
void insert_node_end(Node *head, int num)
{
        Node *current = NULL;
        Node *new = NULL;

        current = head;
        new = (Node *)malloc(sizeof(Node));
        new -> data = num;
        new -> next = NULL;

        if(current == NULL){
                printf("Empty Link List\n");
                return ;
        }

        while(current -> next != NULL )
                current = current -> next;

        current -> next = new;
        return;
}
        

void insert_node_begning(Node **head, int num)
{
        Node *new = NULL;

        new = (Node *)malloc(sizeof(Node));
        new -> data = num;
        if(*head == NULL)
        {
                printf("Createing new link list\n");
                *head = new;
                new -> next = NULL;
                return;
        }

        new -> next = *head;
        *head = new;

        return;
}

void create_link_list(Node **head, int num)
{
        int i;
        Node *current = NULL;
        Node *new = NULL;
        Node *prv = NULL;
        current = *head;

        for(i = num -1; i >= 0; i--)
        {
                new = (Node *)malloc(sizeof(Node));
                new -> data = i;
                new -> next = prv;
                prv = new;
        }
        *head = new;
        return;
}


void display(Node *head)
{
        Node *current = NULL;
        current = head;

        if(current == NULL)
        {
                printf("No Link list \n");
                return ;

        }
        while(current != NULL)
        {
                printf("%d,",current->data);
                current = current -> next;
        }
        printf("\n");
        return;
}
  
