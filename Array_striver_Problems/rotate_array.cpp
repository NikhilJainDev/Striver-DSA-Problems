#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Left rotate an array by one

    vector<int> vc = {1,2,3,4,5};
    int start = vc[0];
    for(int i=1; i<vc.size(); i++){
        vc[i-1] = vc[i];
    }
    vc[vc.size()-1] = start;

    cout<<"Vector After 1 left rotation is : "<<" ";
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<" ";
    }

// Right rotate array by one  

vector<int> arr = {1,2,3,4,5};

int temp = arr[arr.size()-1];
 for(int j = arr.size()-2; j>=0; j--){
    arr[j+1] = arr[j];
 }
 arr[0] = temp;

 cout<<endl; 

 cout<<" Vector after 1 Right  rotation is : "<<" ";
 for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
 }



    return 0;
}