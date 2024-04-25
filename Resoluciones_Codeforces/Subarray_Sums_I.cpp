#include<bits/stdc++.h>
#define ll long long
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 
 
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,x,a,p1=0,p2=1,aux=0;
    vector <int> v,s;
    cin >>n>>x;
    fore(i,0,n)
    {
        cin >>a;
        v.push_back(a);
    }
    s.push_back(0);
    fore(i,0,n)
    {
        s.push_back(s[i]+v[i]);
    }
while(p2<=n && p1<p2)
{
    if(v[p2-1]==x)
    {
        aux++;
        p1=p2;
        p2++;
    }
    else
    {
    if((s[p2]-s[p1])==x)
    {
        aux++;
        p2++;
    }
    else
    {
        if ((s[p2]-s[p1])<x)
        {
            p2++;
        }
        while(v[p2-1]>x)
        {
        p1=p2;
        p2++;
        }
       if((s[p2]-s[p1])>x)
        {
            p1++;
        }
    }
    }
}
if(x==0)
{
    aux--;
}
cout <<aux<<"\n";
}