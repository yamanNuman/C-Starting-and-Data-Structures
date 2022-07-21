#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


typedef struct node
{
    int data;
    int priority;
    struct node *next;
}Node;

Node *front = NULL;

void add(int data,int priority);
void delete();
void display();

int main()
{   
    int choice,data,priority;

    do
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
                printf("Enter the data which is to be added in the queue : ");
                scanf("%d",&data);
                printf("Enter its priority : ");
                scanf("%d",&priority);
                add(data,priority);
                break;
            
            case 2 :
                delete();
                break;

            case 3 :
                display();
                break;

            case 4 :
                break;
                default :
                printf("Wrong Choice\n");
        }
    } while (choice != 4);
    
    getch();
}

void add(int data,int priority)
{
    Node *q;

    Node *temp = (Node*) malloc(sizeof(Node)); //dugum olustur
    temp -> data = data; //datayi 
    temp -> priority = priority; //priority aktardik

    if(front == NULL || priority < front -> priority) //hic eleman yoksa ve ya oncelik durumu sorgulama
    {
        temp -> next = front; //olusturulan dugumun nexti front gosteriyor
        front = temp; //front temp oldu.
    }
    else
    {
        q = front;

        while(q -> next != NULL && q -> next -> priority <= priority) // null degilse ve oncelikli veya esitse
        {
            q = q -> next; // dugumu dolanması icin
        }
            temp -> next = q -> next; //tempin nexti q nun nexti olsun
            q -> next = temp; //q nun nexti yeni temp
    }
}

void delete()
{
    Node *temp;

    if(front == NULL)
    {
        printf("Queue Underflow.\n");
    }
    else
    {
        temp = front;
        printf("Deleted item is %d\n",temp->data);
        front = front -> next;
        free(temp);
    }
}

void display()
{
    Node *ptr;
    ptr = front;
    
    if(front == NULL)
    {
        printf("Queue Empty...\n");
    }
    else
    {
        printf("Queue is:\n");
        printf("Priority        Item \n");

        while(ptr != NULL)
        {
            printf("%d              %d\n",ptr->priority,ptr->data);
            ptr = ptr -> next;
        }
    }
}