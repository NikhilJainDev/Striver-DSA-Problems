#include<iostream>
using namespace std;
int main(){
    string str = "Nikhil";
    int start = 0;
    int end = str.length() - 1;

    // Original String printing 

    cout<<" original String is : "<<str<<endl;
    while(start <= end){
        swap(str[start] , str[end]);
        start = start + 1;
        end = end - 1;
    }

    // String After swapping 
    cout<<" String After swapping is : "<<str<<endl;


    return 0;
}