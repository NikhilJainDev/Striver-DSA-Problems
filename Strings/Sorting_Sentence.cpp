#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// Sorting of a string using bubbl sort algorithmm 
string sort_String(string &s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}
int main()
{
    string str;
    cout << " Enter the String : " << " ";
    cin >> str;
    cout << sort_String(str);

    return 0;
}