#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)

int isprime(int x){
	for(int i=2; i*i<=x; i++)
	{
		if(x%i == 0) return 0;
	}
	return 1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	ll n;
	cin >> n;
	if(n <= 2) cout<<1<<endl;
	else cout<<2<<endl;
	for(int i=2; i<=n+1; i++)
	{
		cout<<2-isprime(i)<<" ";

	}
}