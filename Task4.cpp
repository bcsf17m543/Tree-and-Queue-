//#include<iostream>
//#include<fstream>
//#include<string>
//#include<stdlib.h>
//#include<ctime>
//#define simtime 15
//using namespace std;
//class Myclass
//{
//private:
//	string proname;
//	int time;
//public:
//	Myclass()
//	{
//		proname = "";
//		time = 0;
//	}
//	Myclass(const string &f, const int &k)
//	{
//		proname = f;
//		time = k;
//	}
//	
//	int getTime()
//	{
//		return time;
//	}
//	bool operator>(const Myclass& y)
//	{
//		if (this->time > y.time)
//		{
//			return true;
//
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool operator<(const Myclass& y)
//	{
//		if (this->time < y.time)
//		{
//			return true;
//
//		}
//		else
//		{
//			return false;
//		}
//	}
//	void Display()
//	{
//		cout << "Process: " << proname << endl << "Time: " << time << endl;
//	}
//	Myclass& operator=(const Myclass& f)
//	{
//		proname = f.proname;
//		time = f.time;
//		return *this;
//	}
//};
//class Queue
//{
//private:
//	class Node
//	{
//	public:
//		Myclass data;
//		Node* next;
//		Node(Myclass k)
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
//	void enqueue(Myclass k)
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
//			tmp->data.Display();
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
//	Myclass Peek()
//	{
//		if (front == NULL)
//		{
//			return Myclass();
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
//	void Output(Node* temp)
//	{
//		temp->data.Display();
//	}
//	void Simulation()
//	{
//		Node* temp = front;
//		Output(temp);
//		float AverageWit = 0.00;
//		float  AverageTurnAround = 0.00;
//		int rno;
//		rno = rand()%3 + 1 ;
//
//		for (int tick = 1; tick < simtime; tick++)
//		{
//			// ------------------ queueing request
//			if (temp != rear)
//			{
//
//				rno = rand();
//				temp->data.Display();
//
//				cout << "Execution Time:  " << tick << "   Waiting Time: " << temp->data.getTime() << "  TurnAround Time:  " << temp->data.getTime() + tick << endl;
//				cout << "\n------------------------------------\n";
//				AverageTurnAround += temp->data.getTime() + tick;
//				AverageWit += tick;
//				temp = temp->next;
//
//			}
//			
//
//		}
//		cout << "\n----------------------\n";
//		cout << "Average wait time for jobs: " << AverageWit / Size << endl;
//		cout << "Average Turn Around time for jobs: " << AverageTurnAround / Size << endl;
//		cout << "\n----------------------\n";
//
//	}
//	void Sort(Myclass arr[], int n)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			Myclass min = arr[0];
//
//			for (int i = 0; i < n-1; i++)
//			{
//				if (arr[i] > min)
//				{
//					arr[i] = min;
//				}
//			}
//		}
//		for (int k = 0; k < n; k++)
//		{
//			Dequeue();
//		}
//		for (int k = 0; k < n; k++)
//		{
//			enqueue(arr[k]);
//		}
//		
//	}
//	void SortQue(Myclass arr[],int n)
//	{
//		Node *tmp = front;
//		int count = 0;
//		while (tmp->next != NULL && count < n)
//		{
//			arr[count] = tmp->next->data;
//			 arr[count].Display();
//			tmp = tmp->next;
//			count++;
//		}
//		Sort(arr, n);
//	}
//	
//	
//};
//
//
//int main()
//{
//	Queue obj;
//	ifstream inFile;
//	ofstream outFile;
//	inFile.open("readylist.txt" , ios::in);
//	string process;
//	int time;
//
//		while (inFile >> process >> time)
//		{
//			Myclass temp(process, time);
//			obj.enqueue(temp);
//		}
//	
//	inFile.close();
//	/*outFile.open("readylist.txt", ios::out |ios::trunc);
//	outFile.close();*/	
//	int suzi = obj.RetSize();
//	Myclass *arr = new Myclass[suzi];
//	obj.SortQue(arr,suzi);
//	obj.Simulation();
//	return 0;
//}