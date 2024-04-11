#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,j=0,i=0,x=0;;
    for(int e=0;e<25;e++)
    {
        if((e%5)==0)
        {
            i=0;
        }
        i++;
        if((e%5)==0)
        {
            j++;
        }
        cin >>n;
        if (n==1)
        {
            x=(abs(i-3))+(abs(j-3));
        }
    }
    cout <<x<<"\n";
}