#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int key_value)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key_value)
        {
            return mid;
        }
        else if (key_value > arr[mid])
        {
            // move to right part of array
            start = mid + 1;
        }
        else
        {
            // move to left part
            end = mid - 1;
        }
    }
    return -1;
}

int LinearSearch(vector<int> vec, int target){
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {23,45,58,67,71,84,96};
    vector<int> vec= {10,20,30,48,96,74,5,6};
    cout<<" Index is : "<<BinarySearch(arr, 71);
    cout<<endl;
    cout<<" Index is : "<<LinearSearch(vec, 30);

    return 0;
}