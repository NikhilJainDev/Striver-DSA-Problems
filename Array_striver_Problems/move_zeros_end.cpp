#include<iostream>
#include<vector>
using namespace std;
int main(){
    // We have to move Zeros to end in the Given Problem - Amazon Basic Interview Problem 
    // Task 1 ) - Remove the zeros from the array 
    vector<int> vec = {0,2,5,0,4,0,0,9,11,0,5,0,0,6};
    vector<int> ans;
    for(int i=0; i<vec.size(); i++){
        if(vec[i] != 0){
            ans.push_back(vec[i]);
        }
    }

  // Move the zeros to the end 
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == 0){
            ans.push_back(vec[i]);
        }
    }
    cout<<"Array after moving zeros to end is : "<<" ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}