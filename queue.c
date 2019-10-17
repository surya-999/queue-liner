#include <stdio.h> 
#include <stdlib.h>
#define MAX 10 
int queue[MAX]; 
int front = -1, rear = -1; 
int enqueue(int val); 
int dequeue(); 
int main()
{ 
int n, ch, a; 
printf("QUEUE OPERATIONS:\n"); 
while(1)
{
printf("\n 1.) Enqueue \n 2.) Dequeue \n 3.) Display \n 4.) Exit \n"); 
printf("\nEnter Your Choice: "); 
scanf("%d", &ch); 
switch(ch)
{ 
case 1:
 printf("\nEnter the no. to be added: "); 
 enqueue(n); break; 
case 2: 
 printf("\nDequeued no.: "); 
 dequeue(); 
 break; 
case 3: 
 printf("\nQueue:\n"); 
for (a=front; a<=rear; a++)
 {
  printf("%d\n", queue[a]); 
 } 
  break; 
case 4:
 getchar(); 
 exit(0); 
 default: 
 break; 
} 
getch();
}
}
int enqueue(int val)
{ 
if (rear==MAX-1) 
printf("\nOverflow"); 
else 
rear=(rear+1) % MAX;
queue[rear]=val; 
if (front==-1) front++;
return;
}
int dequeue()
{ 
int i; 
if (rear==-1 || front==rear+1) 
printf("Underflow"); 
else 
printf("%d\n", queue[rear]);
i=queue[front]; 
front=(front+1)%MAX; 
return; 
}
