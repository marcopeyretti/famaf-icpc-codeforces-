#include <bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;

int main ()
{
 ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int n,m,type,l,r;
 long long vi;
 vector <long long> v,s,sv;
 cin >>n;
 fore(i,0,n)
 {
    cin >>vi;
    v.push_back(vi);
 }
    s.push_back(0);
    fore(i,0,n)
    {
        s.push_back(s[i]+v[i]);
    }
    sort(v.begin(),v.end());
    sv.push_back(0);
    fore(i,0,n)
    {
        sv.push_back(sv[i]+v[i]);
    }

    cin >>m;
    fore (i,0,m)
    {
        cin >>type>>l>>r;
        if (type==1)
        {
            cout <<s[r]-s[l-1]<<"\n";
        }
        else
        {
            cout <<sv[r]-sv[l-1]<<"\n";
        }

    }
}