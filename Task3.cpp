//#include<iostream>
//#include<queue>
//#include<iterator>
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
//			front = rear;
//			Size++;
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
//		if (rear == NULL)
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
//	Node* TraverseUntilK(int k)
//	{
//		int count = 0;
//		if (front == NULL)
//		{
//			return front;
//		}
//		else
//		{
//			Node* temp = front;
//			while (temp !=rear && count < k-1)
//			{
//				temp = temp->next;
//				count++;
//			}
//			return temp;
//		}
//	}
//	void Out(int k)
//	{
//		Node* temp = front;
//		Node* temp2 = TraverseUntilK(k);
//		Output(temp,temp2,k,0);
//	}
//	void Output(Node*&temp,Node*&temp2,int k,int count)
//	{
//		if (count == k)
//		{
//			return;
//		}
//		else
//		{
//			swap(temp->data, temp2->data);
//
//			temp2 = TraverseUntilK(k - 1);
//
//			Output(temp->next,temp2,k,count + 1);
//			cout << temp->data;
//
//		}
//	}
//	void Reverse(Node*&temp,Node *&temp2,int k)
//	{
//		if (temp == temp2)
//		{
//			return;
//		}
//		if (k = 2 ||  k > Size)
//		{
//			return;
//		}
//		else if (front == NULL)
//		{
//			return;
//		}
//		else
//		{
//			temp2 = TraverseUntilK(k-1);
//			swap(temp->data,temp2->data);
//			Reverse(temp->next,temp2,k - 1);
//		}
//	}
//	void WrapReverese(int k)
//	{
//		Node* temp = front;
//		Node* temp2 = front->next;
//		Reverse(temp,temp2, k);
//	}
//};
//int main()
//{
//	
//	Queue kj;
//	kj.enqueue(1);
//	kj.enqueue(2);
//
//	kj.enqueue(3);
//	kj.enqueue(4);
//	kj.enqueue(5);
//	kj.enqueue(7);
//	kj.enqueue(8);
//	kj.enqueue(9);
//	kj.Display();
//	cout << "reverse:\n";
//	kj.WrapReverese(4);
//	kj.Out(5);
//
//	return 0;
//}