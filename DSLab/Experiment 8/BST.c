#include<stdio.h>
	 #include<stdlib.h>

 struct  Node
 {
		int data;
    		struct Node *lchild;
    		struct Node *rchild;
 };

  struct Node * insert(struct Node* , int);
	  struct Node * delete(struct Node* , int);
  struct Node * search(struct Node* , int);
  void preorder(struct Node* );
  void postorder(struct Node* );
  void inorder(struct Node* );
  struct Node * new_node(int);
  struct Node * find_min(struct Node* );

  int main()
  {
	           int choice, want_to_continue, data, temp, key, x;
    	       struct Node *root = NULL, *r;
        printf("Enter the choice::1.Insertion 2.Deletion 3.search 4.preorder 5.postorder 6.inorder”);
    	     do{
        		printf("Enter your choice:");
        		scanf("%d",&choice);
        		switch(choice){
            		case 1: printf("Enter the element to be inserted: ");
            			scanf("%d",&data);
            			root = insert(root, data);
            			break;
            		case 2: printf("Enter the element to be deleted: ");
            			scanf("%d", &data);
            			root = delete(root, data);
            			break;
            		case 3: printf("Enter the key: ");
            			scanf("%d", &key);
 r = search(root, key);
            			if(r != NULL){
              				  printf("Successful search");
            			}
            			else{
            				    printf("Unsuccessful search");
          				  }
          				  break;
         			   case 4: preorder(root);
         				   break;
          			  case 5: postorder(root);
           			 break;
            		case 6: inorder(root);
           			 break;
       			 }
       			 printf("Do you want to continue, enter 1 !!   \n");
        			scanf("%d", &want_to_continue);
   		 }while(want_to_continue == 1);
   		 return 0;
   }

struct Node * insert(struct Node *root, int x){
    if(root == NULL){
        return new_node(x);
    }
    else if(x > root->data){
        root->rchild = insert(root->rchild, x);
    }
    else{
        root->lchild = insert(root->lchild, x);
    }
    return root;
}

struct Node * delete(struct Node *root, int x){
    if(root == NULL){
        return NULL;
    }
    if(x > root->data){
        root->rchild = delete(root->rchild, x);
    }
    else if(x < root->data){
           root->lchild = delete(root->lchild, x);
    }
    else{
        if(root->lchild = NULL && root->rchild == NULL){
            free(root);
            return NULL;
        }
        else if(root->lchild == NULL || root->rchild == NULL){
            struct Node *temp;
            if(root->lchild == NULL){
                temp = root->rchild;
            }
            else{
                temp = root->lchild;
            }
            free(root);
            return temp;
        }
        else{
            struct Node *temp = find_min(root->rchild);
            root->data = temp->data;
            root->rchild = delete(root->rchild, temp->data);
        }
    }
    return root;
}

struct Node * search(struct Node* root, int x){
    if(root == NULL || root->data == x){
        return root;
    }
    else if(x > root->data){
        return search(root->rchild, x);
    }
    else{
        return search(root->lchild, x);
    }
}

struct Node * find_min(struct Node* root){
    if(root == NULL){
        
return NULL;
    }
    else if(root->lchild != NULL){
        return find_min(root->lchild);
    }
    else{
        return find_min(root->rchild);
    }
    return root;
}

struct Node * new_node(int x){
    struct Node *p;
    p = malloc(sizeof(struct Node));
    p->data = x;
    p->lchild = NULL;
    p->rchild = NULL;
    return p;
}

void preorder(struct Node* root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(struct Node* root)
{
    if (root != NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d ", root->data);  
    }
}

void inorder(struct Node* root)
{
    if (root != NULL)
    {
        inorder(root->lchild);
        printf("%d ", root->data);
        inorder(root->rchild);
    }
