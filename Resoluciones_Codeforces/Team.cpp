#include <bits/stdc++.h>

using namespace std;
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,c,x=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>a>>b>>c;
        if((a+b+c)>=2)
        {
            x++;
        }
    }
    cout <<x<< "\n";
}