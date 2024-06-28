//Linear queue

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct Queue
{
    int arr[SIZE];
    int rear;
    int front;
}queue;

void init_queue(queue *pq);
void enqueue(queue *pq, int data);
void dequeue(queue *pq);
int peek(queue *pq);
int queue_full(queue *pq);
int queue_empty(queue *pq);


int main()
{
    queue Q;
    init_queue(&Q);
    int choice;
    do
    {
        printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek: \n");
        printf("Enter Your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0 :
             exit(0);
            case 1 :
                if(queue_full(&Q))
                 printf("Queue is Full !\n");
                else
                {
                    int data; 
                    printf("Enter the data to insert : ");
                    scanf("%d",&data);
                    enqueue(&Q,data);
                    printf("Data Entered = %d\n",data);
                }
                break;

            case 2:
                if(queue_empty(&Q))
                    printf("Queue is Empty !\n"); 
                else
                {
                    int data = peek(&Q);
                    dequeue(&Q);
                    printf("Data Deleted : %d\n",data);
                }
                 break;

            case 3:
                if(queue_empty(&Q))
                    printf("Queue Empty ! Peek not possible !\n");
                else
                {
                    int data = peek(&Q);
                    printf("FrontMost data = %d\n",data);
                }                     
                break;
            default :
                printf("enter the valid choice !\n");
        }
    }      
        while(choice !=0 );
        return 0;
    
}    

void init_queue(queue *pq)
{
    pq->rear = -1;
    pq->front = -1;
}

void enqueue(queue *pq,int data)
{
    pq->rear++;
    pq->arr[pq->rear] = data;
    if(pq->front == -1)
        pq->front = 0;
}    

void dequeue(queue *pq)
{
    pq->arr[pq->front] = 0;
    pq->front++;
}

int peek(queue *pq)
{
    return pq->arr[pq->front];
}

int queue_full(queue *pq)
{
    if(pq->rear == SIZE-1)
        return 1;
    else
        return 0;   
}

int queue_empty(queue *pq)
{
    if(pq->rear == -1 || pq->front > pq->rear)
        return 1;
    else
        return 0;    
}