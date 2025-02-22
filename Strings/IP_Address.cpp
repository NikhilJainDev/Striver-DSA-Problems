#include <iostream>
using namespace std;
int main()
{
    // Defanging the IP Address
    int index = 0;
    string str = "1.1.1.1.1.1.1";
    string ans;
    while (index < str.length())
    {
        if (str[index] == '.')
        {
            ans = ans + "[.]";
        }
        else
        {
            ans = ans + str[index];
        }
        index = index + 1;
    }

    // Printing the Answer
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
