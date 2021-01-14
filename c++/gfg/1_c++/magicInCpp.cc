// This Module is all about pointers and how they can be cleverly employed to solve typical CPP problems.
//
// Given two integers A and B. The task is to swap two numbers. Swapping here means to interchange the values of A and B.
//
//
// Input Format:
// First line of input contains T, denoting the number of testcases. For each testcase, there will be a single line containing A and B seperated by space.
//
// Output Format:
// For each testcase, swap the values of A and B.
//
// User Task:
// Your task is to complete the two swap() functions, such that values of A and B gets interchanged.
//

#include <iostream>
using namespace std;

void swap(int *P, int *Q){
    *P = *P ^ *Q;
    *Q = *P ^ *Q;
    *P = *P ^ *Q;
}

void swap(int &A, int &B){
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;
}
int main()
{
    int p = 1, q = 2, a = 3, b = 4;
    int *P = &p;
    int *Q = &q;
    int &A = a;
    int &B = b;
    swap(P, Q);
    swap(&A, &B);
    cout << p << " " << q << endl;
    cout << a << " " << b << endl;
    cout << A << " " << B << endl;
    cout << &A << " " << &B << endl;
    cout << P << " " << Q << endl;
    return 0;
}
