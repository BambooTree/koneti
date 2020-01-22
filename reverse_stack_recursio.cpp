// Reverse a stack using recursion
#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int>&st, int temp)
{
	if(st.empty())
	{
		st.push(temp);
		return;
	}
	else
	{
		int local = st.top();
		st.pop();
		insert_at_bottom(st,temp);
		st.push(local);
	}
}
void  reversestack(stack<int>&st)
{
	if(st.empty())
		return;
	else
	{
		int temp =st.top();
		st.pop();
		reversestack(st);
		insert_at_bottom(st,temp);
	}
}

void printstack(stack<int>st)
{
	while(!st.empty())
	{
		cout<<" "<<st.top()<<"\t";
		st.pop();
	}
}

int main()
{
	stack<int>st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);

	cout<< " Before reverse stack "<<endl;
	printstack(st);
	reversestack(st);

	cout<< " After reverse stack "<<endl;
	printstack(st);
	return 0;
}