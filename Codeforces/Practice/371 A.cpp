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

  ll n,k,j,i,one,two,sum=0;
  cin>>n>>k;
  ll a[n];
  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=0;i<k;i++)
  {
    one=0;
    two=0;
    for(j=i;j<n;j=j+k)
    {
      if(a[j]==1)
        one++;
      else
        two++;
    }
    if(one<two)
      sum=sum+one;
    else
      sum=sum+two;
  }

  cout<<sum;
  return 0;

}