#include<iostream>
using namespace std;

int Greatest_number(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }

    }
}

int Smallest_number(int x, int y, int z)
{
    if(x<y)
    {
        if(x<z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if(y<z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}


int main()
{
    int a,b,c,x,y,z;
    int ch;
    do
    {
       cout<<"\n\n----------MENU-----------\n\n";
       cout<<"1.Finding the greatest element among 3 elements\n";
       cout<<"2.Finding the smallest element among 3 elements\n";
       cout<<"3.Exit\n";
       cout<<"Enter your choice: ";
       cin>>ch;

       switch(ch)
       {
           case 1: cout<<"\nEnter any Three integer values: ";
                   cin>>a>>b>>c;
                   cout<<"\nThe Greatest number is: "<<Greatest_number(a,b,c);
                   break;

           case 2: cout<<"\nEnter any Three integer values: ";
                   cin>>x>>y>>z;
                   cout<<"\nThe Smallest number is: "<<Smallest_number(x,y,z);
                   break;

           case 3: exit(0);

           default: cout<<"Invalid choice!!!!!!!!";                 
       }
    }while(ch != 3);
     return 0;     
}