#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// Leetcode Solution 409 

int main(){
    // Sorting in a String 
    string st;
    cout<<" Enter the String : "<<" ";
    getline(cin, st);
    sort(st.begin(), st.end());
    cout<<" Sorted String is : "<<st<<endl;

    return 0;
}