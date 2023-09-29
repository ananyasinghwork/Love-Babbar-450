#include<iostream>
using namespace std;

int countBitsFlip(int a, int b)
{
    int result=a^b;
    int ans = result^a;
    return __builtin_popcount(result);
}