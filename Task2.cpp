//#include<iostream>
//using namespace std;
//class Queue
//{
//private:
//	class Node
//	{
//	public:
//		int data;
//		Node* next;
//		Node(int k)
//		{
//			data = k;
//			next = NULL;
//		}		
//	};
//	long Size;
//	Node* front;
//	Node* rear;
//public:
//	Queue()
//	{
//		Size = 0;
//		front = NULL;
//		rear = NULL;
//	}
//	~Queue()
//	{
//		Node *tmp = front;
//		while (tmp != rear)
//		{
//			Node *junk = tmp;
//			tmp = tmp->next;
//			delete junk;
//		}
//		delete rear;
//	}
//	void enqueue(int k)
//	{
//		if (rear == NULL)
//		{
//
//			rear = new Node(k);
//			 front = rear;
//			 Size++;
//		}
//		else
//		{
//			rear->next = new Node(k);
//			rear = rear->next;
//			Size++;
//
//		}
//	}
//	void Display()
//	{
//		Node *tmp = front;
//		while (tmp != NULL)
//		{
//			cout << tmp->data << endl;
//			tmp = tmp->next;
//		}
//	}
//	void Dequeue()
//	{
//		if (front == NULL)
//		{
//			return;
//		}
//		else if (front->next == NULL)
//		{
//			Node* temp = front;
//			delete temp;
//			front = NULL; rear = NULL;
//			Size--;
//		}
//		else
//		{
//			Node* temp = front;
//			front = temp->next;
//			delete temp;
//			Size--;
//		}
//
//	}
//	int RetSize()
//	{
//		return Size;
//	}
//	bool IsEmpty()
//	{
//		if ( rear == NULL)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	int Peek()
//	{
//		if (front == NULL)
//		{
//			return 0;
//		}
//		else if (front->next == NULL)
//		{
//			return front->data;
//		}
//		else
//		{
//			Node* temp = front;
//			return temp->data;
//		}
//	}
//};
//int main()
//{
//	Queue yu;
//	yu.enqueue(5);
//	yu.enqueue(6);
//	yu.enqueue(7);
//
//	yu.Display();
//	cout << "\n------------------\n";
//
//	cout << yu.RetSize();
//
//	cout << "\n------------------\n";
//	cout <<yu.Peek();
//	cout << "\n------------------\n";
//
//	yu.Dequeue();
//	yu.Display();
//
//	yu.Dequeue();
//
//	cout << yu.IsEmpty();
//	return 0;
//}