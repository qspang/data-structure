//#include<iostream>
//#include<queue>
//using namespace std;
//typedef struct Binarynode {
//	char ch;
//	struct Binarynode* lchild;
//	struct Binarynode* rchild;
//}binarynode;
//bool flag = true;
//void recursion(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	cout << root->ch << endl;
//	recursion(root->lchild);
//	recursion(root->rchild);
//}
//binarynode* creatbinarytree()
//{
//	char ch; cin >> ch;
//	binarynode* node;
//	if (ch == '#')
//	{
//		node = NULL;
//	}
//	else {
//		node = new binarynode;
//		node->ch = ch;
//		node->lchild = creatbinarytree();
//		node->rchild = creatbinarytree();
//	}
//	return node;
//}
//bool isCBT(binarynode *head)
//{
//	if (head == NULL)
//	{
//		return true;
//	}
//	queue<binarynode>q;
//	q.push(*head);
//	bool ownson = false;
//	while (!q.empty())
//	{
//		binarynode cur = q.front();
//		q.pop();
//		binarynode *left = cur.lchild;
//		binarynode *right = cur.rchild;
//		if (left == NULL && right != NULL)
//		{
//			return false;
//		}
//		if (ownson && !(left == NULL && right == NULL))
//		{
//			return false;
//		}
//		if (left != NULL)
//		{
//			q.push(*left);
//		}
//		if(right!=NULL)
//		{
//			q.push(*right);
//		}
//		if (left == NULL || right == NULL)
//		{
//			ownson = true;
//		}
//	}
//	return true;
//	
//}
//int main()
//{
//	binarynode* root = creatbinarytree();
//
//	recursion(root);
//	if (isCBT(root))
//	{
//		cout << "yes" << endl;
//	}
//	else
//	{
//		cout << "no" << endl;
//	}
//	return 0;
//}