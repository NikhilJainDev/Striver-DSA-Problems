#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
// Check if Array is Sorted or not
bool is_Sorted(vector<int> arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    else
    {
        return arr[size - 1] >= arr[size - 2] && is_Sorted(arr, size - 1);
    }
}

// Binary Search using recursion
// condition : Binary Search is always applied on the sorted data

int BinarySearch(vector<int> array, int start, int end, int target)
{
    if (start <= end)
    { // Base case
        int mid = start + (end - start) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        else if (target > array[mid])
        {
            // Call to right Half
            return BinarySearch(array, mid + 1, end, target);
        }
        else
        {
            // Call to left half
            return BinarySearch(array, start, mid - 1, target);
        }
    }
    return -1;
}

// Calculate the Number of Subsets in the array 
int Calc_Subsets(vector<int> ar , int size){
    return pow(2, size);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 8, 9};
    cout << is_Sorted(arr, arr.size());
    cout<<endl;
    vector<int> array = {2,18,34,58,77,87,96,98};
    cout<<"Found at Index "<<BinarySearch(array , 0 , array.size() - 1 , 87);
    cout<<endl;
    // Calculate Subsets 
    vector<int> ar = {1,2,3,8,5};
    cout<<Calc_Subsets(ar , ar.size());

    return 0;
}