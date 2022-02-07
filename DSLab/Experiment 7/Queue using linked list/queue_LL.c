#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
};
struct node *front;
struct node *rear;

void insert();
void delete();
void show();

void main(){
   int choice;
   while(choice != 4){
      printf("\nchoose one from below options");
      printf("\n1.insert an element\t2.Delete an element\t3.Display the queue\t4.Exit\n");
      printf("Enter your choice:  ");
      scanf("%d",&choice);
      switch(choice){
         case 1: insert();
         break;
         case 2: delete();
         break;
         case 3: show();
         break;
         case 4: printf("Exiting...");
         break;
         default:
         printf("Enter valid choice!!\n");
      }
   }
}

void insert(){
   struct node *ptr;
   int item ;
   ptr = (struct node *)malloc(sizeof(struct node));
   if(ptr == NULL){
      printf("Overflow!\n");
   }
   else{
      printf("Enter value: ");
      scanf("%d",&item);
      ptr -> data = item;
      if(front == NULL){
         front = rear = ptr;
         front -> next = NULL;
         rear -> next = NULL;
      }
      else{
         rear -> next = ptr;
         rear = ptr;
         rear -> next = NULL;
      }
   }
}

void delete(){
   struct node *ptr;
   if(front == NULL){
      printf("Underflow");
   }
   else{
      ptr = front;
      front = front -> next;
      free(ptr);
   }
}

void show(){
   struct node *ptr;
   ptr = front;
   if(front == NULL){
      printf("Queue is empty!");
   }
   else{
      printf("Queue contains: \n");
      while (ptr != NULL){
         printf("%d\n",ptr -> data);
         ptr = ptr -> next;
      }
   }
}
