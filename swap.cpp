// C++ program to swap 2 numbers
#include<iostream> 
using namespace std;
int main()
{
    //Declaring and initializing 2 variables
    int a = 10, b = 20, temp;
    cout<<a<<" "<<b;
    temp = a;
    a = b;
    b = temp;
    cout<<" \n"<<a<<" "<<b;
    return 0;
}