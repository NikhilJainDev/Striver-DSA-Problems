// We have to remove the duplicates from sorted array
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{

    vector<int> vc = {1, 1, 2, 2, 2, 3, 3};
    // create a set
    set<int> st;
    // Insert element in the set
    for(int i=0; i<vc.size(); i++){
        st.insert(vc[i]);
    }

    // Print the set
    // use for each loop
    cout<<" Array after remove duplicates is : "<<" "; 
    for(int num : st){
        cout << num <<" ";
    }
    

    return 0;
}