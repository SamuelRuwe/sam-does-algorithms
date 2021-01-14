#include <iostream>
using namespace std;

#define arrayLength(array) (sizeof(array)/sizeof(array[0]))

void strangePartition(int *arr, int x)
{
}
int main()
{
    int arr[] = {3,6,9};
    int len = arrayLength(arr);
    cout << len << endl;
    strangePartition(arr, 3);
    return 0;
}
