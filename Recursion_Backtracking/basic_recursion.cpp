#include <iostream>
using namespace std;
// printing numbers using recursion
void printNum(int n)
{
    if (n > 0)
    { // Base Case
        cout << n << " ";
        printNum(n - 1);
    }
}

// Factorial of N using recursion 
int Fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * Fact(n-1);
    }
    cout<<endl;
}

// Classical Recursion Problem 1) Fibonacci Series 
int Fibonacci_Value(int FibIndex){
    if(FibIndex == 0 || FibIndex ==1){
        return FibIndex;
    }
    else{
        return Fibonacci_Value(FibIndex - 1) + Fibonacci_Value(FibIndex - 2);
    }
} 

int main()
{
    printNum(18);
    cout<<endl;
    cout<<Fact(5);
    cout<<endl;
    cout<<Fibonacci_Value(8);
    return 0;
}