#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 
 
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,h,salto1=0,salto2=0;
    vector<int> v,dp;
    dp.push_back(0);
    cin >>n;
    fore(i,0,n)
    {
        cin >>h;
        v.push_back(h);
    }  
    for(int i=1;i<n;i++)
    {
        salto1=abs(v[i-1]-v[i])+dp[i-1];
        if(i>1)
        {
        salto2=abs(v[i-2]-v[i])+dp[i-2];
        }
        else
        {
            salto2=1e9;
        }
        dp.push_back(min(salto1,salto2));
        
    }
    cout<<dp[n-1];
}    