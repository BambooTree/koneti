// Reverse a queue using recursion

#include <iostream>
#include <queue>
using namespace std;


void reverse_queue_recursion(queue<int>&q)
{
	if(q.empty())
		return;
	else
	{
		int data = q.front();
	    q.pop();
	    reverse_queue_recursion(q);
	    q.push(data);
	}
}


void printqueue(queue<int>q)
{
	while(!q.empty())
	{
		cout<<" "<<q.front()<<"\t";
		q.pop();
	}
}

int main()
{
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   cout <<"Before reversing using recursion"<<endl;
   printqueue(q);
   reverse_queue_recursion(q);
  cout <<"After reversing using recursion"<<endl;
  printqueue(q);
	 return 0;
}