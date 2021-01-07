/*
 * Working with 2D arrays is quite important. Here we will do swapping of columns in a 2D array. You are given a matrix M of r rows and c columns. You need to swap the first column with the last column.

Input Format:
The first line of input contains T, the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains r and c, separated by a space. The next r lines contains c elements of the matrix, separated by spaces.

Output Format:
For each testcase, in a new line, print the modified matrix.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided function interchange(int ,  int ) that take rows and columns number as parameter.

Constraints:
1 <= T <= 100
1 <= r,c <= 100
 */

#include <iostream>
using namespace std;

// int arr[1000][1000] = {0};
int arr[1][1] = {
    1
};
void interchange(int r, int c)
{
    if(r == 1 && c == 1) {
        cout << arr[r - 1][c - 1];
        return;
    }
    for(int i = 0; i < r; i++)
        {
            arr[i][0] = arr[i][0] ^ arr[i][c - 1];
            arr[i][c - 1] = arr[i][0] ^ arr[i][c - 1];
            arr[i][0] = arr[i][0] ^ arr[i][c - 1];
        }

    for(int i=0;i<r;i++)
	   {
	       for(int j=0;j<c;j++)
    	    {
    	        cout<<arr[i][j]<<" ";

    	    }
    	 cout<<endl;
	   }
}
int main()
{
    interchange(1,1);
    return 0;
}
