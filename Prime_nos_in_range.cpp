#include <iostream>
using namespace std;
int main()
{
    int i, j, startrange, endrange, flag = 0;
    cout << "Enter the startrange\n";
    cin >> startrange;
    cout << "\nEnter the endrange\n";
    cin >> endrange;

    for (i = startrange; i <= endrange; i++)
    {
        if (i == 0 || i == 1)
            continue;

        flag = 0;    

        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << i << "  ";
    }
}