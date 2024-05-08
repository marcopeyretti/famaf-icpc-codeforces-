#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 bool cont2(vector <long long>a, vector <long long>b)
 {
    return a[1]>b[1];
 }
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   long long n,w,p,v,aux=0,c;
    vector <vector<long long>> dp;
    vector<long long> itemsp,itemsv;
    cin >>n>>w;
    fore(i,0,n)
    {
        cin >>p>>v;
        itemsp.push_back(p);
        itemsv.push_back(v);
    }
    dp.push_back({0,0});
    fore(i,0,n)
    {
        aux=0;
        c=dp.size()-1;
        while(aux<=c)
        {
            p=itemsp[i]+dp[aux][0];
            if(p<=w)
            {
            dp.push_back({p,itemsv[i]+dp[aux][1]});
            }
            aux++;
        }
        
    }
    for(int i=0;i<dp.size();i++)
    {
        cout <<dp[i][0]<<","<<dp[i][1]<<"   ";
    }
    sort(dp.begin(),dp.end(),cont2);
    cout<<dp[0][1];
}    