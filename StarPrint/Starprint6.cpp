#include <bits/stdc++.h>
using namespace std;
int main ()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            cout <<" ";
        }
        cout<< endl;
        for (int k=1;k<=i;k++)
        {
          cout << "*";  
        }
        
        cout<< endl;
    }
}
