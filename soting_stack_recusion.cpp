#include <iostream>
#include <stack>
using namespace std;
stack<int>st;
void sortstack(stack<int>&st, int temp)
{

    if(st.empty() || (temp>st.top()))
    {
         st.push(temp);
         return;
    }
    else
    {

   		int local = st.top();
   		st.pop();
   		sortstack(st,temp);
   		st.push(local);
   	}

}


void stackrecursion(stack<int>&st)
{
   

    if(!st.empty())
    {
    	int temp =st.top();
    	st.pop();
    	stackrecursion(st);
    	sortstack(st,temp);
    }
    else
    	return ;

}
void printstack(stack<int>st)
{
  while(!st.empty())
  {
    cout <<" "<<st.top()<<"\t";
    st.pop();
  }
}
int main()
{

  
  st.push(20);
  st.push(50);
  st.push(30);
  st.push(40);
  st.push(10);
  cout << " Before sorting"<<endl;
 //  for(int i =0 ;i<5;i++){
 // 	std::cout<<st.top()<<endl;
 //   st.pop();
  //}

printstack(st);
  stackrecursion(st);
  cout <<"After  Sorting"<<endl;
  printstack(st);
  
    return 0;
}
