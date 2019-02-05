#include <stdlib.h>
#include<stdio.h>

typedef struct node
{
        int data;
        struct node *next;
}Node;

void display_list(Node *);
void insert_new_node(Node **, int);
void insert_short_order(Node **, int);
void search(Node *, int);

int main(void)
{
        int choice;
        int num;
        Node *head = NULL;

        while(1)
        {
                printf("\n");
                printf("1.Display\n");
                printf("2.Insert a new node\n");
                printf("3.Inserted in shorted order\n");
                printf("4.Search for an element\n");
                printf("50.Exit\n");
                printf("Enter your choice : ");
                scanf("%d",&choice);

                if(choice == 50)
                {
                        printf("BYE BYE \n");
                        return ;
                }

                switch(choice)
                {
                        case 1:
                                display_list(head);
                                break;
                        case 2:
                                printf("Enter the number : ");
                                scanf("%d",&num);
                                insert_new_node(&head,num);
                                break;
                        case 3:
                                printf("Enter the number : ");
                                scanf("%d",&num);
                                insert_short_order(&head,num);
                                break;
                        case 4:
                                printf("Entert the element for search : ");
                                scanf("%d",&num);
                                search(head, num);
                                break;
                        default :
                                printf("Wrong input try again\n");
                }
        }

        return 0;
}

void search(Node *head, int num)
{
        Node *temp = head;
        int pos = 0;
        int flag = 0;
        if(temp == NULL)
        {
                printf("Link List is Empty\n");
                return;
        }

        while(temp != NULL)
        {
                pos++;
                if(temp -> data == num)
                {
                        flag++;   //if the element is present more than one time
                        printf("\nElement %d is present at position %d\n",temp -> data, pos);
                }
                temp = temp -> next;
        }

        if(!flag)
                printf("Element %d is not present\n",num);

        return ;
}

void insert_short_order(Node **head, int num)
{
        Node *temp = NULL;
        Node *new = NULL;
        temp = *head;
        new = (Node *)malloc(sizeof(Node));
        new -> data = num;

        if(temp == NULL || temp -> data > num )
        {
                new -> next = temp;
                *head = new;
                return ;
        }

        while(temp -> next != NULL && temp -> next -> data <= num)
                        temp = temp -> next ;

        new -> next = temp -> next;
        temp -> next = new;

        return ;
}

void insert_new_node(Node **head, int num)
{
        Node *temp = NULL;
        Node *new = NULL;
        temp = *head;

        if(temp == NULL)
        {
                printf("\nCreating new link list \n");
                temp = (Node *)malloc(sizeof(Node));
                temp -> data = num;
                temp -> next = NULL;
                *head = temp;
                return ;
        }

        else
        {
                while(temp -> next != NULL)
                        temp = temp -> next;

                new = (Node *)malloc(sizeof(Node));
                new -> data = num;
                new -> next = NULL;

                temp -> next = new;
        }

}

void display_list(Node *head)
{

        Node *temp = NULL;
        temp = head;

        if(temp == NULL)
        {
                printf("\nEmpty Link List\n");
                return ;
        }

        while(temp != NULL)
        {
                printf("%d,",temp -> data);
                temp = temp -> next;
        }


}
