// Input Format:
// First line of input contains number of testcases T. For each testcase, first line contains N, size of row and columns of matrix (Number of rows = Number of columns). Next N line contains N integers in each line.
//
// Output Format:
// For each testcase, print the array elements in row-column order (Refer Sample Output for detail).
//
// User Task: Your task is to complete the function twoDimensional() that takes two parameters: 2D array mat and N. You need to write the parameter for 2D array and print matrix.
//
// Constraints:
// 1 <= T <= 10
// 1 <= N <= 100
// 1 <= A[i][j] <= 106

#include <iostream>
using namespace std;

void twoDimensional(int **mat, int N)
{
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
           cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int **mat;
    mat = new int*[2];
    int arr[2][2] = {1,2,3,4};
    mat[0] = arr[0];
    mat[1] = arr[1];
    twoDimensional(mat, 2);
    return 0;
}
