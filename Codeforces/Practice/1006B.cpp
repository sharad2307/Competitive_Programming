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

    ll Hash[2100]={0};
    ll i,j,k,n;
    cin>>n>>k;
    ll a[n+1],b[n+1],c[n+1];
    for(i=1;i<=n;i++)
    {
      cin>>a[i];
      b[i]=a[i];
    }

    sort(a+1,a+1+n);
    ll ans=0;
    for(i=n-k+1;i<=n;i++)
    {
      ans+=a[i];
      Hash[a[i]]+=1;
    }
    cout<<ans<<endl;

    ll temp=0,count=0;
    for(i=1;i<=n;i++)
    {
      if(Hash[b[i]])
      {
        Hash[b[i]]--;
        count+=1;
        if(count==k)
        {
          cout<<n-temp<<" ";
          break;
        }
        cout<<i-temp<<" ";
        temp=i;
      }
    }
    
	
}