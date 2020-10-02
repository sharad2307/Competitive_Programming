#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	

	testcases
	{
		ll a,b;
		cin>>a>>b;
		ll num=abs(a-b),ans=0;
		while(ans*(ans+1)/2<num || (ans*(ans+1)/2-num)%2)
			ans++;
		cout<<ans<<endl;
	}		
	
}