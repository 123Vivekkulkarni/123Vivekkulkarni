#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<"Enter value of 3 sides of triangle\n";
    cin>>a>>b>>c;
    //Check whether the triangle is valid or not
    if((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout<<"Valid Triangle\n";
    }
    else
    {
        cout<<"Invalid Triangle\n";
    }
    
    if (a == b && b == c)
    {
        cout<<"\nEquilateral triangle\n";
    }
    else if (a == b || b == c || c == a)
    {
        cout<<"\nIsosceles triangle\n";
    }
    else
    {
        cout<<"\nScalene triangle\n";
    }
    return 0;
}