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

  ll n,i,coin=0;
  cin>>n;
  ll a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(i=1;i<=n;i++)
  {
    while(a[i]<=a[i-1])
    {
      a[i]++;
      coin++;
    }
  }
  cout<<coin<<endl;
  return 0;


}