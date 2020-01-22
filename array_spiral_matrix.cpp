// Print array in spiral matrix
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix)
 {
        
        int numRows = matrix.size();
        int numCols = matrix[0].size();
        int top = 0;
        int  bottom = numRows - 1;
        int  left = 0 ;
        int right = numCols - 1;
        vector<int> ans;
        if (matrix.size() == 0) 
            return ans ;
		
        while (top < numRows && bottom< numCols)
         {
            for (int i = left; i <= right; i++)
             {
                ans.push_back(matrix[top][i]);
            }
            
            top++;
			
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            
            right--;
			
            if(top<numRows)
            {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            
            bottom--;
			}
            if(bottom< numCols)
            {
                for (int i = bottom; i >= top; i--) 
                {
                ans.push_back(matrix[i][left]);
                }
            left++;
            }
        }
        return ans;
    }
    void printvector(std::vector<int> vect)
    {
        for (int i = 0; i < vect.size(); i++) 
        { 
   //     for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i] << " "<<"\t"; 
        }
    }

   void printvector2D(std::vector<std::vector<int>> vect)
    {
        for (int i = 0; i < vect.size(); i++) 
        { 
            for (int j = 0; j < vect[i].size(); j++) 
            cout << vect[i][j] << " "<<"\t"; 
        }
    }
    int main()
    {
       vector<std::vector<int> > vect{ { 1, 2, 3}, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9 } }; 
  
      cout << " Before Spiral Order"<<endl;
       printvector2D(vect);

        vector<int>res = spiralOrder(vect);
        cout<<endl;
        cout << " After Spiral Order"<<endl;
        printvector(res);
        return 0;
    }