//#include<iostream>
//#include<stack>
//#include"Linkstack.h"
//#define myfalse 0
//#define mytrue 1
//using namespace std;
//int num = 0;
//typedef struct Binarynode {
//	char ch;
//	struct Binarynode* lchild;
//	struct Binarynode* rchild;
//	
//}binarynode;
////遍历二叉树 
//typedef struct Bitreestacknode {
//	linknode node;
//	binarynode* root;
//	int flag;
//}bitreestacknode;
////bitreestacknode* creatreestacknode(binarynode* node, int flag)
////{
////	bitreestacknode* newnode = new bitreestacknode;
////	newnode->root = node;
////	newnode->flag = flag;
////	return newnode;
////}
////void nonrecursion(binarynode* root)
////{
////	//创建栈
////	linkstack* stack = init_linkstack();
////	//把根节点放栈里面
////	push_linkstack(stack, (linknode*)creatreestacknode(root, myfalse));
////
////	while (size_linkstack(stack)>0) {
////		//先弹出栈顶元素
////		bitreestacknode* node = (bitreestacknode*)top_linkstack(stack);
////		pop_linkstack(stack);
////		//判断节点是否为空
////		if (node->root == NULL)
////		{
////			continue;
////		}
////		if (node->flag == mytrue) {
////			cout << node->root->ch;
////		}
////	}
////
////
////
////}
//void recursion_1(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	cout << root->ch;
//	//遍历左子树
//	recursion_1(root->lchild);
//	//遍历右子树
//	recursion_1(root->rchild);
//}
////拷贝二叉树
//binarynode* copybinarytree(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	//拷贝左子树
//	binarynode* lchid = copybinarytree(root->lchild);
//	//拷贝右子树
//	binarynode* rchid = copybinarytree(root->rchild);
//	//创建节点
//	binarynode* newnode = new binarynode;
//	newnode->ch = root->ch;
//	newnode->lchild = lchid;
//	newnode->rchild = rchid;
//
//	return newnode;
//}
//int caculatedepth(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	int depth = 0;
//	//求左子树的高度
//	int leftdepth = caculatedepth(root->lchild);
//	int rightdepth = caculatedepth(root->rchild);
//	depth = leftdepth > rightdepth ? leftdepth + 1 : rightdepth + 1;
//	return depth;
//}
//void recursion(binarynode*root)
//{
//	if (root == NULL)
//	{
//		return;
//	}  
//	////先序遍历                                      
//	////先访问根结点
//	//cout << root->ch;
//	////再遍历左子树
//	//recursion(root->lchild);
//	////再遍历有子树
//	//recursion(root->rchild);                                        
//
//	//zhongxv
//	/*recursion(root->lchild);
//	cout << root->ch;
//	recursion(root->rchild);*/
//	recursion(root->lchild);
//	
//	recursion(root->rchild);
//	cout << root->ch;
//	
//}
//void freespacebinarytree(binarynode*root)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	//释放左子树
//	freespacebinarytree(root->lchild);
//	//释放右子树
//	freespacebinarytree(root->rchild);
//	//释放当前节点
//	free(root);
//}
//int caculate(binarynode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (root->lchild == NULL && root->rchild == NULL)
//	{
//		num++;
//	}
//	//左子树叶子节点数目
//	caculate(root->lchild);
//	//右子树叶子节点数目
//	caculate(root->rchild);
//	return num;
//
//}
//
////有默认构造函数去传递里面的每一个值
//void createbinarynode()
//{
//	//创建节点
//	binarynode node1 = { 'A',NULL,NULL };
//	binarynode node2 = { 'B',NULL,NULL };
//	binarynode node3 = { 'C',NULL,NULL };
//	binarynode node4 = { 'D',NULL,NULL };
//	binarynode node5 = { 'E',NULL,NULL };
//	binarynode node6 = { 'F',NULL,NULL };
//	binarynode node7 = { 'G',NULL,NULL };
//	binarynode node8 = { 'H',NULL,NULL };
//
//	//建立节点关系
//	node1.lchild = &node2;
//	node1.rchild = &node6;
//	node2.rchild = &node3;
//	node3.lchild = &node4;
//	node3.rchild = &node5;
//	node6.rchild = &node7;
//	node7.lchild = &node8;
//
//	////递归遍历
//	//recursion(&node1);
//	/*cout << caculatedepth(&node1) << endl;;*/
//	/*binarynode* root = copybinarytree(&node1);
//	recursion_1(root);
//	freespacebinarytree(root);*/
//
//}
//typedef struct Person {
//	linknode node;
//	string name;
//	int age;
//}person;
//
//
//int main()
//{
//	createbinarynode();
//	
//
//
//}