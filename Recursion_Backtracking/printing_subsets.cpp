// Backtracking Concept with recursion 
#include<iostream>
#include<vector>
using namespace std;
void PrintSubsets(vector<int> arr , vector<int> ans , int i ){
    // Base Case 
    if(i == arr.size()){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    // inclusion 
    ans.push_back(arr[i]);
    PrintSubsets(arr, ans , i+1);
    // exclusion 
    ans.pop_back();  // Backtracking part 
    PrintSubsets(arr, ans , i+1);
}
int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    PrintSubsets(arr, ans , 0);
    return 0;
}