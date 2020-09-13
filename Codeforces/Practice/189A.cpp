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
	
	ll n,a,b,c,ans=0,i,j,k=0;
	cin>>n>>a>>b>>c;

	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
		{
			k=n-i*a-j*b;
			if(k>=0 && k%c==0 && ans<i+j+k/c)
				ans=i+j+k/c;
		}
		
		cout<<ans<<endl;
		// cout<<"hii";
	}