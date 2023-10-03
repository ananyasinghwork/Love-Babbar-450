#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;

int findPosition(int n)
{
    if(n==1)
        return -1;
    int x = log2(n);
    int y = n&(n-1);
    if(!y)
        return n+1;
    else   
        return -1;
}