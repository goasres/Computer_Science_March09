#include <bits/stdc++.h>
using namespace std;
int main ()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=0;j<=5;j++)
        cout << " ";
        for (int k=5;k>=i;k--)
        {
            cout << "*";
        }
        cout<< endl;
    }
}