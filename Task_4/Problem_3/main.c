#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* head = NULL;

void insertion_beginning(int new_data);
void insertion_end(int new_data);
void delete_node( int element);
int counter(struct node* head, int element);


int main()
{
    int op_num ,ele_num ,temp_data;

        printf("Enter the initial number of elements to insert: ");
        scanf(" %d",&ele_num);
        printf("Now,enter the elements: ");

    for(int i=0 ;i<ele_num ;i++)
    {
        if( i==0 || i == ele_num-1)
        {
            scanf(" %d",&temp_data);
            insertion_beginning(temp_data );
        }
        else
        {
            scanf(" %d",&temp_data);
            insertion_end(temp_data);
        }
    }

    printf("Please,enter number of the wanted operation: ");
    scanf(" %d",&op_num);

    if(op_num == 1)//insertion
    {
        printf("To enter extra element at beginning:1 ... at end:2 \n");
       int ans;
       scanf(" %d",&ans);
       if(ans==1)
       {
           printf("enter the number: ");
           int new_data;
           scanf(" %d",&new_data);
           insertion_beginning(new_data);
       }
       else if(ans ==2)
       {
           printf("enter the number: ");
           int new_data;
           scanf(" %d",&new_data);
           insertion_end(new_data);
       }

    }
    else if(op_num==2)//deletion
    {
        int delete_ele;
        printf("enter the element to delete:");
        scanf(" %d",&delete_ele);
        delete_node(delete_ele);
    }
    else if(op_num==3)//counting
    {
        int c_ele;
        printf("enter the element to count:");
        scanf(" %d",&c_ele);
       int x= counter(head,c_ele);
       printf("Number of occurrances is: %d",x);
    }
    else
        printf("INVALID OPERATION");

    printf("");



    return 0;
}

void insertion_beginning(int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));

     new_node->data  = new_data;
     new_node->next = head;

     head   = new_node;
}

void insertion_end(int new_data)
{

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *end = head;

    new_node->data  = new_data;

    new_node->next = NULL;

    if (head->next == NULL)
    {
       head = new_node;
       return;
    }

    while (end->next != NULL)
        end = end->next;

    end->next = new_node;
    return;
}


void delete_node( int element)
{
    struct node *the_node = head;
     struct node * prev;

    // If element is the head
    if (the_node != NULL && the_node->data == element)
      {
        head = the_node->next;
        free(the_node);
        return;
      }

    // loop till the wanted element
    while (the_node != NULL && the_node->data != element) {
        prev = the_node;
        the_node = the_node->next;
    }

    if (the_node == NULL)
        return;

    prev->next = the_node->next;

    free(the_node);
}

int counter(struct node* head, int element)
{
    int count = 0;
    if (head == NULL)
        return count;
    if (head->data == element)
        count++;
    return counter(head->next, element);
}
