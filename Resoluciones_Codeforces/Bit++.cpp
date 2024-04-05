#include <bits/stdc++.h>
#include <string>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,i,y=0;
    string a;
    cin >>n;
    for(i=0;i<n;i++)
    {
        cin >>a;
        if(( a == "++X")|| ( a == "X++" ) )
        {
           y = y+1;
        }   
        if(( a == "--X")|| ( a == "X--" ) )
        {
           y = y-1;
        }
    }
    cout <<y<< "\n";
}