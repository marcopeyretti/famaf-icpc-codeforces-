#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,c;
    string a,b;
    cin >>t;
    fore(i,0,t)
    {
        cin>>n;
        cin>>a;
        fore(i,0,n-1)
        {
            b.push_back(a[i]);
            b.push_back(a[i+1]);
        }
        
        set<pair<char,char>> s;
       
        c=b.size();
        for(int i=0;i<c/2;i++)
        {
            s.insert(make_pair(b[0],b[1]));
            b.erase(0,2);      
        }
        
       cout<<s.size()<<"\n";
       s.clear();
       a.clear();
       b.clear();
    }
}