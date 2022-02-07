#include<stdio.h>
#include<stdlib.h>
#define maxsize 4

int rear = -1, front = -1;
int q[maxsize];

void insert();
void delete();
void visit();

void main(){
   int choice;
   while(choice != 4){
      printf("\nchoice one from below options\n");
      printf("1.insert an element\t2.Delete an element\t3.Display the queue\t4.Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
         case 1: insert();
         break;
         case 2: delete();
         break;
         case 3: visit();
         break;
         case 4:printf("Exiting...");
         break;
         default:
         printf("Enter the vaild choice!\n");
      }
   }
}

void insert(){
   int item;
   printf("Enter the element:  ");
   scanf("%d",&item);
   if(rear == maxsize - 1){
      printf("Overflow\n");
   }
   if((rear == -1) && (front == -1)){
      front = 0;
      rear = 0;
   }
   else{
      rear += 1;
   }
   q[rear] = item;
   printf("item inserted\n");
}

void delete(){  
   int item;   
   if(front == -1 || front > rear)  
   {  
      printf("\nUNDERFLOW\n");  
      return;  
              
   }  
   else{  
      item = q[front];  
      if(front == rear){  
         front = -1;  
         rear = -1 ;  
      }  
      else{  
         front = front + 1;  
      }  
      printf("Item is deleted! ");  
    } 
} 

void visit(){
   int i;
   if(rear == -1){
      printf("Queue is empty!\n");
   }
   else{
      printf("Queue contains\n");
      for(i=front; i<=rear;i++){
         printf("%d\n",q[i]);
      }
   }
}
