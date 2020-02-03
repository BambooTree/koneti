#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st ;
        for(int i =0 ;i< tokens.size();i++)
        {
            if(tokens[i] == "+")
            { 
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b+a);
            }
            else if(tokens[i] == "*")
            {
                  int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b*a);
                
               
            }
             else if(tokens[i] == "-")
            {
                  int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }
               else if(tokens[i] == "/")
            {
                 int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }
            else
            {
                 st.push(atoi(tokens[i].c_str()));
            }
        }
     
        return st.top();
       
    }
};

int main()  
{  
    /*
      Input: ["2", "1", "+", "3", "*"]
      Output: 9
      Explanation: ((2 + 1) * 3) = 9
   */
    vector<std::string>exp{"2","1","+","3","*"};  
   
    int res = Solution().evalRPN(exp); 

    cout <<"res "<<res<<endl; 
    return 0;  
}  