#include <stdio.h>
int add(int a, int b )
{
    int c;
    c=a+b;
    return c;
}

int main ()
{
    int x,y,z;
    x=2;
    y=3;
    z= add(x,y);
   printf("%d ",z);
}