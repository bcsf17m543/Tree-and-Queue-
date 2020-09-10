//#include<iostream>
//#include<queue>
//#include<stack>
//using namespace std;
//void Reverse(int k, queue<int>& beta)
//{
//	if (beta.empty() == true || k > beta.size())
//		return;
//	if (k <= 0)
//		return;
//
//	stack<int> S;
//	for (int i = 0; i < k; i++) {
//		S.push(beta.front());
//		beta.pop();
//	}
//	while (!S.empty()) {
//		beta.push(S.top());
//		S.pop();
//	}
//	for (int i = 0; i < beta.size() - k; i++) {
//		beta.push(beta.front());
//		beta.pop();
//	}
//}
//void Print(queue<int>& k)
//{
//	while (!k.empty()) {
//		cout << k.front() << " ";
//		k.pop();
//	}
//}
//int main()
//{
//	queue<int> kal;
//	kal.push(1);
//	kal.push(2);
//
//	kal.push(3);
//	kal.push(4);
//	kal.push(5);
//	kal.push(6);
//	kal.push(7);
//	Reverse(5, kal);
//	Print(kal);
//
//
//	return 0;
//}