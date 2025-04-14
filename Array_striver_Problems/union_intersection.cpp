/* Problem Statement */


#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    // Union of two sorted arrays with distinct elements 
    // This is a Better approach  =  O(N log N + M log(N) 
    // Brute force Approach = O(N.M)
    // Optimal Approach = O(N + M)

    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3,6,7};
    set<int> st;
    for(int i=0; i<a.size(); i++){
        st.insert(a[i]);
    }
    for(int i=0; i<b.size(); i++){
        st.insert(b[i]);
    }

    for(int nums : st){
        cout<<nums<<" ";
    }

    cout<<endl;
    // Intersectin of two Sorted Arrays : 
    // Explanation : Just Find out the common elements between two sorted Arrays in sorted order 

    vector<int> ans;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] == b[i]){
                ans.push_back(a[i]);
                break; // To handle the duplicates Value 
            }
    }
}
    // finally print the 'ans' vector for intersection 
    for(int nums : ans){
        cout<<nums<<" ";
    }











    // Optimal Approach of Both Intersection & Union 
    
return 0;
}