#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node * next;

	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int a)
	{
		data = a;
		this->next = NULL;
	}
};
class Linklist
{
private:
	Node *head;
public:
	Linklist()
	{
		head = NULL;
	}
	void insert_node(int data_a)
	{
		Node *newnode = new Node(data_a);
		if (head == NULL)
		{
			head = newnode;
			return;
		}
		Node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	void display(int* arr,int size)
	{
		Node* temp = head;

		if (head == NULL)
		{
			cout << "This list has no elements" << endl;
		}
		int i = 0;
		while (temp != NULL)
		{
			
			arr[i]=temp->data ;
			temp = temp->next;
			i++;
		}
	}
};
int main()
{
	Linklist obj1;
	obj1.insert_node(1);
	obj1.insert_node(10);
	obj1.insert_node(100);
	obj1.insert_node(1000);

	int arr[4];
	obj1.display(arr, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
