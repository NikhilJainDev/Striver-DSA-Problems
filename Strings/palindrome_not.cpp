#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cout << " Enter the String : " << " ";
    cin >> str;
    int start = 0;
    int end = str.length() - 1;
    while(start <= end){
        if(str[start] != str[end]){
            cout<< " Not a Palindrome "<<endl;
            return 0;
        }
        else{
            start = start + 1;
            end = end -1 ;
        }
    }
    cout<<" Palindrome Strings "<<endl;
    return 0;
}