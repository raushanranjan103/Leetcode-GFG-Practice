// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find a solved Sudoku. 
  bool check(int grid[N][N], int x, int y, int digit) {
        for (int k = 0; k < N; k++) {
            if (grid[x][k] == digit || grid[k][y] == digit)
                return false;
        }
        x /= 3; y /= 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (grid[3 * x + i][3 * y + j] == digit)
                    return false;
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N], int x = 0, int y = 0) { 
        if (x == N)
            return true;
        if (y == N)
            return SolveSudoku(grid, x + 1, 0);
        if (grid[x][y] == 0) {
           for (int k = 1; k <= N; k++) {
               if (check(grid, x, y, k)) {
                   grid[x][y] = k;
                   if (SolveSudoku(grid, x, y + 1))
                       return true;
                   grid[x][y] = 0;
               }
           }
           return false;
        }
        else
            return SolveSudoku(grid, x, y + 1);
    }
    void printGrid(int grid[N][N]) {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cout << grid[i][j] << " ";
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends