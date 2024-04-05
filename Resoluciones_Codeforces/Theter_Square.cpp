#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a;
    long long x=0,y=0;
    cin >>n>>m>>a;
    x=n/a;
    y=m/a;
    if((n % a)!=0)
    {
        x=x+1;
    }
    if((m % a)!=0)
    {
        y=y+1;
    }
    cout <<x*y<<"\n";
}