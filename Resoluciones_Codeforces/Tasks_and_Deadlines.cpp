#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 
 
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,a,d,aux=0,auxr=0;
    vector <pair<int,int>> v;
    cin >>n;
    fore(i,0,n)
    {
        cin >>a>>d;
        v.push_back(make_pair(a,d));
    }
    sort(v.begin(),v.end());
    for(auto pair:v)
    {
        aux=aux+pair.first;
        auxr=auxr+(pair.second-aux);
    }
    cout<<auxr<<"\n";
}