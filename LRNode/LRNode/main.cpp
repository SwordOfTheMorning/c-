#include<stdlib.h>
#include<iostream>
using namespace std;

struct TNode
{
	TNode* left;
	TNode* right;
	int value;
};

TNode* root=NULL;
void append(int N);
void free_tree(TNode *root);  
void print_tree(TNode *root);  

int main()
{
	append(63);
	append(45);
	append(32);
	append(77);
	append(96);
	append(21);
	append(17); 
	print_tree(root);
	free_tree(root);
	/*string a = "aaa\taaa\t";
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i] == '\t')
		{
			a.erase(i, 1);
			a.insert(i, "    ", 4);
		} 
	}
	cout<< a.c_str() <<endl;
	int j,k,l,m;
	int i=(j=4,k=8,l=16,m=32);
	cout<<i<<endl;*/
	system("pause");
	return 0;
}

void append(int N)
 {
	 TNode* NewNode=(TNode *)malloc(sizeof(TNode));
	 NewNode->value=N;
	 NewNode->left = NULL;
	 NewNode->right = NULL;
	 if(root==NULL)
	 {
		 root=NewNode;
		 return;
	 }
	 else
	 {
		 TNode* temp;
		 temp=root;
		 while((N>=temp->value && temp->left!=NULL) || (N < temp->value && temp->right !=NULL))
		 {
			 while(N>=temp->value && temp->left!=NULL)
				temp=temp->left;
			 while(N < temp->value && temp->right != NULL)
				temp=temp->right;
		 }
		 if(N>=temp->value)
			temp->left=NewNode;
		 else
			temp->right=NewNode;
		 return;
	 }
 }

//释放内存函数  
void free_tree(TNode *root){  
    if (!root->left && !root->right)  
    {  
        free(root);  
        return;  
    }  
    if (root->left)  
    {  
        free_tree(root->left);  
    }  
    else{  
        free_tree(root->right);  
    }  
}  
  
  
//打印函数  
void print_tree(TNode *root){  
    if (!root->left && !root->right)  
    {  
        cout<<root->value<<" ";  
        return;  
    }  
    if (root->right)  
        print_tree(root->right);  
  
        cout<<root->value<<" ";  
  
    if (root->left)  
    {  
        print_tree(root->left);  
    }  
}  