#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;


int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,n,a,aux=0;
    vector <int> v;
    cin >>t;
    fore(i,0,t)
    {
       
        cin >>n;
        fore(i,0,n)
        {
            cin >>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        v.push_back(v[n-1]);
        
            fore(i,1,n+1)
            {
                if((abs(v[i-1]-v[i]))<=1)
                {
                    aux=0;
                }
                else
                {
                    cout<<"NO\n";
                    i=n+2;
                    aux=1;
                }
            }
        
        if(aux==0)
        {
            cout<<"YES\n";
        }
        v.clear();
        aux=0;
    }
    
}