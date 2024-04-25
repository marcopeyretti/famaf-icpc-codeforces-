#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 
 
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x,y,aux=1;
    vector <pair<int,int>> v;
    pair<int,int> ap;
    cin >>n;
    fore(i,0,n)
    {
        cin>>x>>y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end());
    ap=v[0];
    for(auto pair:v)
    {
        if(ap.first<=pair.second)
        {
            ap=pair;
            aux++;
        }
    }
    cout <<aux<<"\n";
}