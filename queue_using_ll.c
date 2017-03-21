#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}
*front,*rear,*temp,*front1;

void ins(int data);
void del();
void display();
void main()
{
    int no, ch, e;

    printf("\n 1 - Insert");
    printf("\n 2 - Delete");
    printf("\n 3 - Exit");
    printf("\n 4 - Display");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            ins(no);
            break;
        case 2:
            del();
            break;
        case 3:
            exit(0);
        case 4:
            display();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
void ins(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;

        rear = temp;
    }
}

void display()
{
    front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}

void del()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\n Error: Empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Deleted value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Deleted value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
}



