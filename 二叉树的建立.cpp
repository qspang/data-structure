#include<iostream>
using namespace std;
typedef struct Binarynode {
	char ch;
	struct Binarynode* lchild;
	struct Binarynode* rchild;
	
}binarynode;
void recursion(binarynode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->ch << endl;
	recursion(root->lchild);
	recursion(root->rchild);
}

binarynode* creatbinarytree()
{
	char ch; cin >> ch;
	binarynode* node;
	if (ch == '#')
	{
		node = NULL;
	}
	else {
	

		node = new binarynode;
		node->ch = ch;
		node->lchild = creatbinarytree();
		node->rchild = creatbinarytree();

	}


	return node;
}
int main()
{
	binarynode* root = creatbinarytree();
	recursion(root);

	return 0;
}