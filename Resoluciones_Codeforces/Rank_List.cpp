#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;


bool cont(pair<int,int> a , pair<int,int> b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a>b;
}
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,p,t,res=0;
    vector <pair<int,int>> v;
    cin >>n>>k;
    fore(i,0,n)
    {
        cin >>p>>t;
        v.push_back(make_pair(p,t));
    }
    sort(v.begin(),v.end(),cont);
    fore(i,0,v.size())
    {
        if(v[i]==v[k-1])
        {
            res++;
        }
    }
    cout <<res;
}