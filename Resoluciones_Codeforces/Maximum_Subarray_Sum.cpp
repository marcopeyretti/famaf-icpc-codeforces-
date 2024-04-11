#include <bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

int main ()
{
    long long n,ma=LLONG_MIN,mi,x;
    cin >>n;
    vector<long long> v,s;
    fore(i,0,n)
    {
        cin >>x;
        v.push_back(x);
    }
    s.push_back(0);
    fore(i,0,n)
    {
        s.push_back(s[i]+v[i]);
    }
    mi = 0;
    for(size_t i=1;i<s.size();i++)
    {
        ma=max(ma,s[i]-mi);
        mi=min(mi,s[i]);
    }   
    cout <<ma<<"\n";
}