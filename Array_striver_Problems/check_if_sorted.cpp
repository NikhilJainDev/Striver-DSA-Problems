// There is an Array : Check that the Array is sorted or not if the Array is Sorted in Ascending Order then return true else return false

#include <iostream>
#include <vector>
using namespace std;
bool is_Sorted(vector<int> arr){
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] >= arr[i-1]){
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6,11,8,9};
    cout<<is_Sorted(arr);

    return 0;
}