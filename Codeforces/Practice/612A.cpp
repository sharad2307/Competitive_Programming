#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("C:/Users/91731/Documents/input.txt","r",stdin);
  freopen("C:/Users/91731/Documents/output.txt","w",stdout);
  freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif

  ll i,j,n,p,q,k;
  string s;
  
  cin >> n >> p >> q >> s;
  for (i=0;i<=n/p;i++)
    for (j=0;j<=n/q;j++)
        if (i*p+j*q==n)
        {
            cout << i+j << endl;
            for (k=0;k<i*p;k+=p)
                cout << s.substr(k,p) << endl;
            for (k=i*p;k<n;k+=q)
                cout << s.substr(k,q) << endl;
            return 0;
        }
        cout << -1 << endl;


    }