#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a=0;
    int r=0,n=0;
    size_t c=0;
    cin >>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin >>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    set <int> s;
    fore(i,0,v.size())
    {
        s.insert(v[i]);
    }
    c=s.size();
    fore(i,0,c)
    {
        auto it = s.begin();
        r=max(r,count(v.begin(),v.end(),*it));
        s.erase(s.begin());
    }
    cout <<r<<"\n";
}

