/* 14. Need Some Change
    Given an array A of N positive integers. The task is to swap every ith element of the array with (i+2)th element.
*/

#include <iostream>
using namespace std;

void swapElements(int arr[], int sizeof_array) {
    for(int i = 0; i < sizeof_array - 2; i++) {
        arr[i] = arr[i] ^ arr[i+2];
        arr[i+2] = arr[i] ^ arr[i+2];
        arr[i] = arr[i] ^ arr[i+2];
    }
}
int main()
{
    int arr[4] = {5,10,15,20};
    swapElements(&arr[0], 4);
    cout << arr[0] << " " << arr[1] << endl;
    return 0;
}
