#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // Inserting and Searching on O(N) time complexity
    int size;
    cout << " Enter the size of Array -> " << " ";
    cin >> size;
    int arr[size];
    cout << " Enter the Elements in the array : " << " ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Print my array :
    cout << "Printed Array is : " << " ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    // end of the Line 
cout<<endl;

    vector<int> vec;
  vec.push_back(10);
  cout<<" Size of Vector is : "<<vec.size()<<endl;
  vec.push_back(20);
  vec.push_back(30);
  cout<<" Now capacity of the vector is : "<<vec.capacity()<<endl;
  cout<<" But, Size of the vector is : "<<vec.size()<<endl;
    return 0;
}