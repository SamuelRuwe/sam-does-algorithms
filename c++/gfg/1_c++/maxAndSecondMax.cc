/**
 * Given an array arr[] of size N of positive integers which may have duplicates.
 * The task is to find the maximum and second maximum from the array, and both of
 * them should be distinct, so If no second max exists, then the second max will be -1.
 */

// not checked yet. gfg issues
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<int> largestAndSecondLargest(int sizeOfArray, int *arr)
{
    int mx = numeric_limits<int>::min(), mx2 = numeric_limits<int>::min();
    for(int i = 0; i < sizeOfArray; i++)
    {
        if(arr[i] > mx)
        {
            mx2 = mx;
            mx = arr[i];
        } else if(arr[i] > mx2 && mx != arr[i])
        {
            mx2 = arr[i];
        }
    }
    cout << mx << " " << mx2 << endl;
    mx2 = mx > mx2 && mx2 != numeric_limits<int>::min()? mx2:-1;
    vector<int> v = { mx, mx2 };
    for(int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
    return v;
}
int main()
{
    int arr[6] = {1000,1000,1000,1000,1000,100};
    largestAndSecondLargest(6, arr);
    return 0;
}
