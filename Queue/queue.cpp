#include<stdio.h>
#include<conio.h>
#define N 3
int FRONT=-1,REAR=-1,QUEUE[3];
void INSERTION(int DATA)
{
if((FRONT==0&&REAR==N-1)||(FRONT==REAR+1))
 printf("QUEUE Overflow");
 else
 {
 printf("Enter the data to be stored: ");
 scanf("%d",&DATA);
 if(FRONT==-1)    //Queue is Empty
 FRONT=0,REAR=0;
 else
 if(REAR==N-1)
 REAR=0;
 else
 REAR=REAR+1;
 QUEUE[REAR]=DATA;
 }
 }
void DELETION()
 {
 if(FRONT==-1)
 printf("Queue Underflow");
 else
 if(FRONT==REAR)
 FRONT=-1,REAR=-1;
 else
 if(FRONT==N-1)
 FRONT=0;
 else
 FRONT=FRONT+1;
 }
void TRAVERSE()
 {
 int i;
 if(FRONT==-1&&REAR==-1)
 printf("Queue is Empty");
 else
 {
 printf("Elements of Queue: \n");
 if(REAR<FRONT)
 {
 for(i=0;i<=REAR;i++)
 printf("%d ",QUEUE[i]);
 for(i=FRONT;i<=N-1;i++)
 printf("%d ",QUEUE[i]);
 }
 else
 {
 for(i=FRONT;i<=REAR;i++)
 printf("%d ",QUEUE[i]);
 }
 }
 }
void main()
{
int k,DATA;
char ch='Y';
clrscr();
printf("\t\t\t NAME: RISHABH AGGARWAL \n");
while(ch=='Y'||ch=='y')
{
printf("\t Choose the operation you want to perform: \n");
printf("\t 1. Insertion \n");
printf("\t 2. Deletion \n");
printf("\t 3. Traversing \n");
printf("\t Enter your choice(1-3): ");
scanf("%d",&k);
switch(k)
{
case 1: INSERTION(DATA);
	break;
case 2: DELETION();
	break;
case 3: TRAVERSE();
	break;
default: printf("Wrong Choice entered\n");
}
printf("\n Do you want to perform another operation(Y/y): ");
fflush(stdin);
scanf("%c",&ch);
}
getch();
}