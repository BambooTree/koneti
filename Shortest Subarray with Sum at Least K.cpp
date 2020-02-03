#include <iostream>
#include <vector>
#include <deque>
using namespace std;

#define INT_MAX 32227

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        vector<int> sum(A.size() + 1);
        for (int i = 0; i < A.size(); ++i) {
            sum[i + 1] = sum[i] + A[i];
        }
        
        int ans = INT_MAX;
        
        deque<int> dq;
        for (int i = 0; i < sum.size(); ++i)
        {
            while (dq.empty() == false && sum[i] <= sum[dq.back()])
            {
                dq.pop_back();
            }
            
            while (dq.empty() == false && sum[i] - sum[dq.front()] >= K) 
            {
                ans = min(ans, i - dq.front());
                dq.pop_front();
            }
            
            dq.push_back(i);
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};

int main() {

    /*
    Input: A = [2,-1,2], K = 3
Output: 3
*/
  
        vector<int> A {2,-1,1,1};
        
        int K = 3;
        
        int ret = Solution().shortestSubarray(A, K);

       cout<<"ret  "<<ret<<endl;
    return 0;
}
