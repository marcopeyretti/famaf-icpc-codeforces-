#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,h,auxk=0,aux=0;
    vector<int> v,dp,salto;
    dp.push_back(0);
    cin >>n>>k;
    fore(i,0,n)
    {
        cin >>h;
        v.push_back(h);
    }  
    fore(i,1,n)
    {
        auxk=k;
        aux=i-1;
          while(aux>=0 && auxk>0)
        {
            salto.push_back(abs(v[aux]-v[i])+dp[aux]);
            aux--;
            auxk--;
        }  
        sort(salto.begin(),salto.end());
        dp.push_back(salto[0]);
        salto.clear();
    }
    cout<<dp[n-1];
}    