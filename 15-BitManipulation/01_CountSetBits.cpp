//Naive Solution
#include<iostream>
using namespace std;

int countSetBits(int n)
{
    int  res=0;
    while(n>0)
    {
        if(n%2==1)
        {
            res++;
        }
        n=n/2;
    }
    return res;
}

//Efficient Solution - Brian Kerningam's Algorithm
#include<iostream>
using namespace std;

int countSetBits(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res=res+1;
    }
    return res;
}

//Most Efficient Solution - Lookup Table Solution
#include<iostream>
using namespace std;

int tbl[256];
void initialise()
{
    tbl[0]=0;
    for(int i=1;i<256;i++)
    {
        tbl[i]=tbl[i&(i-1)]+1;
    }
}

int countSetBits(int n)
{
    return tbl[n&255] + tbl[(n>>8)&255] + tbl[(n>>16)&255] + tbl[(n>>24)];
}


//Most Used
#include<iostream>
using namespace std;

int setBits(int n)
{
    int setBits=0;
    while(n>0)
    {
        n=n&(n-1);
        setBits++;
    }
    return setBits;
}