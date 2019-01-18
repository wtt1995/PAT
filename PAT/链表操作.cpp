//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node *next;
//}node[100];
//Node * creatlist(int a[], int n)
//{
//	Node *head = new Node;
//	Node *p = head;
//	p->next = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		Node *q = new Node;
//		q->data = a[i];
//		q->next = NULL;
//		p->next = q;
//		p = p->next;
//	}
//	return head;
//}
//
//void insert(Node *head, int pos, int x)
//{
//	Node *node = new Node;
//	Node *p = head;
//	for (int i = 0; i < pos - 1; i++)
//	{
//		p = p->next;
//	}
//	node->data = x;
//	node->next = p->next;
//	p->next = node;
//}
//
//void del(Node *head, int x)
//{
//	Node *p = head->next, *pre=head;
//	while (p != NULL)
//	{
//		if (p->data == x)
//		{
//			pre->next = p->next;
//			delete(p);
//			p = pre->next;
//		}
//		else
//		{
//			pre = p;
//			p = p->next;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	Node *p,*head;
//	head = creatlist(arr, 10);
//	p = head;
//	p = p->next;
//	while(p!=NULL)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//	cout << "-----------" << endl;
//	insert(head, 1, 20);
//	p = head;
//	p = p->next;
//	while (p != NULL)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//
//	cout << "-----------" << endl;
//	del(head, 20);
//	p = head;
//	p = p->next;
//	while (p != NULL)
//	{
//		cout << p->data << endl;
//		p = p->next;
//	}
//
//	system("pause");
//	return 0;
//}