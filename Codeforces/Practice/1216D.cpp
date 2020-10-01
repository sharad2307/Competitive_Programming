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

	ll n;
	cin>>n;
	ll a[n],b[n],z;
	loop(i,0,n)cin>>a[i];
	ll x=*max_element(a,a + n);
	ll sum=0;
	

	loop(i,0,n)
	{
		b[i]=x-a[i];
		sum+=x-a[i];
	}
	ll result=b[0];

	loop(i,1,n)
	result=__gcd(result,b[i]);

	cout<<sum/result<<" "<<result;
	// cout<<sum;
}