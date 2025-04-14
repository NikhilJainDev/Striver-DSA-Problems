#include<iostream>
#include<vector>
using namespace std;

int Largest_SecondLargest(vector<int> vc, int ans = INT32_MIN , int ans1 = INT32_MIN){
    for(int i=0; i<vc.size(); i++){
        if(vc[i] > ans){
            ans = vc[i];
        }
    }

    cout<<" First Largest is : "<<ans<<endl;

    for(int i=0; i<vc.size(); i++){
        if(vc[i] > ans1 && vc[i] != ans){
            ans1 = vc[i];
        }
    }
    cout<<"Second Largest is : "<<ans1<<endl;
}

int main(){
    vector<int> vc  = {28,55,45,78,23,69,71,25,87,42,49,52,41};
    Largest_SecondLargest(vc);


    return 0;
}