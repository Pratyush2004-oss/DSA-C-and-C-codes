#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode(int item){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right=NULL;
    return temp;
}

void inorder(struct node* root){
    if(root != NULL){
        inorder(root->left);
        printf("\n %d",root->data);
        inorder(root->right);
    }
}

struct node *insert(struct node *node,int val){
    if(node == NULL){
        return newnode(val);
    }
    if(val < node->data){
        node->left=insert(node->left,val);
    }
    else if(val > node->data){
        node->right = insert(node->right,val);
    }
    return node;
}

int getright(struct node *root){
	struct node *temp = root;
	while(temp->left != NULL){
		temp = temp->left;
	}
	return temp->data;
}

struct node *deletenode(struct node *root, int val){
	if(root == NULL){
		return NULL;
	}
	if(root->data < val){
		root->right = deletenode(root->right,val);
	}
	else if(root->data > val){
		root->left = deletenode(root->left,val);
	}
	else{
		
		if(root->left == NULL && root->right == NULL){
			free(root);
			return NULL;
		}
		else if(root->left == NULL){
			struct node *temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL){
			struct node *temp = root->left;
			free(root);
			return temp;
		}
		else{
			int rightMin = getright(root->right);
			root->data = rightMin;
			root->right = deletenode(root->right,rightMin);
		}
	}
	return root;
}
	

int main(){
    struct node *root = NULL;
    root=insert(root,10);
    insert(root,11);
    insert(root,6);
    insert(root,8);
    insert(root,19);
    insert(root,4);
    insert(root,12);
    insert(root,5);
    insert(root,17);
    insert(root,49);
    inorder(root);
    
    printf("\n \n"); 
    
    deletenode(root,10);
    inorder(root);
}



