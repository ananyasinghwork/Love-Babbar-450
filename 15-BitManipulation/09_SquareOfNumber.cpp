#include<iostream>
using namespace std;

int square(int n)
{
    if(n==0)
        return 0;
    
    if(n<0)
        n=-n;
    
    int x= n>>1;
    if(n%2!=0)
        return ((square(x)<<2) + (x<<2)+1);
    else
        return ((square(x)<<2));
}