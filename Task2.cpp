#include <iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(){
		data = 0;
		next = NULL;
	}
	node(int dat){
		data = dat;
		this->next = NULL;
	}
};
class linkedlist{
private:
	node* head;
public:
	linkedlist(){
		head = NULL;
	}
	void insertnode(int dato){
		node *newnode = new node(dato);

		if (head == NULL){
			head = newnode;
			return;
		}
		node* temp = head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
}
	void display(){
		node* temp = head;
		while (temp!=NULL)
		{
			cout << endl << temp->data;
			temp = temp->next;
		}
	}
};





int main()
{
	linkedlist one;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int x = 0;
	for (int i = 0; i < 5; i++){
		x = arr[i];
		one.insertnode(x);
	}
	one.display();

	system("pause");
	return 0;

}
