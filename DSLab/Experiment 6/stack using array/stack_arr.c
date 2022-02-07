#include<stdio.h>
#include<stdlib.h>

int s[100],i,j,size,top=-1,choice=0;

void push();
void pop();
void show();

void main(){
   printf("Enter the size of an array: ");
   scanf("%d",&size);
   while(choice != 4){
      printf("\nchoice one from below options\n");
      printf("1.Push   2.Pop   3.Show   4.Exit");  
      printf("\nEnter your choice \n");       
      scanf("%d",&choice);
      switch(choice){
         case 1:{
            push();
            break;
         }
         case 2:{
            pop();
            break;
         }
         case 3:{
            show();
            break;
         }
         case 4:{
            printf("Exiting...");
            break;
         }
         default:{
           printf("Please Enter vaild choice\n"); 
         }
      };
   }
}


void push(){
   int value;
   if(top == size){
      printf("Overflow");
   }
   else{
      printf("Enter the value: ");
      scanf("%d",&value);
      top += 1;
      s[top] = value;
   }
}

void pop(){
   if(top == -1){
      printf("Underflow");
   }
   else{
      top -= 1;
   }
}

void show(){
   for(i=top; i>= 0; i--){
      printf("%d\t",s[i]);
   }
   if(top == -1){
      printf("Stack is empty");
   }
}
