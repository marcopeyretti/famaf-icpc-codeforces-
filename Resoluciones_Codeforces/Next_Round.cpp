#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,a,x=0,r=0;  
    cin >>n>>k;
    for(int i=0;i<n;i++)
    {
        cin >>a;
        if (i==(k-1))
        {
            x=a;
        }
        if((a>=x) && (a>0))
        {
            r++;
        }
    }
    cout <<r<<"\n";
}