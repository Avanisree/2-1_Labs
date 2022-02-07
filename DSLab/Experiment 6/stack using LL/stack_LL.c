#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node{
   int value;
   struct node *next;
};

struct node *head;

void main ()  
{  
    int choice=0;     
    printf("\t\t\t\t\tStack operations using linked list\n");   
    while(choice != 4)  
    {  
        printf("Choose one from below options: \n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice:  ");        
        scanf("%d",&choice);  
         switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            } 
            case 2:  
            {  
                pop();  
                break;  
            } 
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }  
         };  
    }  
} 

void push(){
   int value;
   struct node *ptr = (struct node*)malloc(sizeof(struct node));
   if(ptr == NULL){
      printf("Can't able to push the element!!\n");
   }
   else{
      printf("Enter the value:  ");
      scanf("%d", &value);
      if(head == NULL){
         ptr -> value = value;
         ptr -> next = NULL;
         head = ptr;
      }
      else{
         ptr -> value = value;
         ptr -> next = head;
         head = ptr;
      }
   }
   printf("Item is pushed sucessfully!!\n");
}

void pop(){
   int item;
   struct node *ptr;
   if(head == NULL){
      printf("Underflow");
   }
   else{
      item = head -> value;
      ptr = head;
      head = head -> next;
      free(ptr);
      printf("Item is popped sucessfully\n");
   }
}

void display(){
   int i;
   struct node *ptr;
   ptr = head;
   if(ptr == NULL){
      printf("Stack is empty!!");
      return;
   }
      printf("printing Stack elements \n");
      while(ptr != NULL){
         printf("%d\n",ptr -> value);
         ptr = ptr -> next;
      }
}
