#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 
 
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,c;
    vector <int> va,vb,vc;
    cin>>n;
    vector<vector<int>> dp;
    
    fore(i,0,n)
    {
        cin>>a>>b>>c;
        va.push_back(a);
        vb.push_back(b);
        vc.push_back(c);
    }
    dp.push_back({va[0],vb[0],vc[0]});
    fore(i,1,n)
    {
        a=va[i]+max(dp[i-1][2],dp[i-1][1]);
        b=vb[i]+max(dp[i-1][2],dp[i-1][0]);
        c=vc[i]+max(dp[i-1][0],dp[i-1][1]);
        dp.push_back({a,b,c});
    }
    
    cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}    