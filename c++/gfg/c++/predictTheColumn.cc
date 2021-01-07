// Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s.
//
// Input:
// First line of input contains number of testcases T. For each testcase, there will be two lines of input, first of which contains N and next N line contains N elements.
//
// Output:
// For each testcase, output the column with maximum number of 0s.
//
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 102
// 0 <= A[i][j] <= 1
//
// User Task:
// Your task is to complete the function columnWithMaxZero() which should return the column number with maximum number of zeros. If more than one column exists, print the one which comes first.

#include <iostream>
#include <vector>
using namespace std;

int M[1000][1000];
int columnWithMaxZeros(int N)
{
    int res[N];
    for(int i = 0; i < N; i++) {
        res[i] = 0;
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            res[i] += M[i][j];
        }
    }
    int result = 0;
    int current = 10000;
    for(int i = 0; i < N - 1; i++)
    {
        if(res[i + 1] < res[i])
        {
            result = i;
            current = res[i+1];
        }
    }
    return result;
}

int main()
{

    return 0;
}
