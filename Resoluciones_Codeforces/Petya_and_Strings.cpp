#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b;
    int r=0;
    cin >>a>>b;
    map<char, int> c;
c['A'] = 1;
c['B'] = 2;
c['C'] = 3;
c['D'] = 4;
c['E'] = 5;
c['F'] = 6;
c['G'] = 7;
c['H'] = 8;
c['I'] = 9;
c['J'] = 10;
c['K'] = 11;
c['L'] = 12;
c['M'] = 13;
c['N'] = 14;
c['O'] = 15;
c['P'] = 16;
c['Q'] = 17;
c['R'] = 18;
c['S'] = 19;
c['T'] = 20;
c['U'] = 21;
c['V'] = 22;
c['W'] = 23;
c['X'] = 24;
c['Y'] = 25;
c['Z'] = 26;
c['a'] = 1;
c['b'] = 2;
c['c'] = 3;
c['d'] = 4;
c['e'] = 5;
c['f'] = 6;
c['g'] = 7;
c['h'] = 8;
c['i'] = 9;
c['j'] = 10;
c['k'] = 11;
c['l'] = 12;
c['m'] = 13;
c['n'] = 14;
c['o'] = 15;
c['p'] = 16;
c['q'] = 17;
c['r'] = 18;
c['s'] = 19;
c['t'] = 20;
c['u'] = 21;
c['v'] = 22;
c['w'] = 23;
c['x'] = 24;
c['y'] = 25;
c['z'] = 26;


    for(unsigned int i=0;i<(a.size());i++)
    {
        if(c[a[i]]>c[b[i]])
        {
            r++;
            i=i+a.size();
        }
        if(c[a[i]]<c[b[i]])
        {
            r--;
            i=i+a.size();
        }
    } 
      if(r<0)
        {
            cout <<-1<<"\n";
        }
        if(r==0)
        {
            cout <<0<<"\n";
        }
        if(r>0)
        {
            cout <<1<<"\n";
        }
}