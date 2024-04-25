#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s,n,x,y,aux=0;
    vector <pair<int,int>> v;
    cin >>s>>n;
    fore(i,0,n)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(auto pair:v)
    {
        if(aux==0)
        {
        if(s>pair.first)
        {
            s=s+pair.second;
        }
        else
        {
            aux=1;
            cout <<"NO\n";
        }
        }
    }
    if(aux==0)
    {
        cout<<"YES\n";
    }
}