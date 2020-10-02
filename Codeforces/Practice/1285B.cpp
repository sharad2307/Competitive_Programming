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

	ll t;
	cin>>t;

	while(t--)
	{
		
		ll n,ans=0,i;
		cin>>n;
		ll a[n],f=0,e=0;
		for(i=0;i<n;i++)
			cin>>a[i];

		for(i=0;i<n;i++)
		{
			f+=a[i];
			e+=a[n-i-1];
			if(f<=0 || e<=0)
				ans=1;
		}
		if(ans==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	
}
