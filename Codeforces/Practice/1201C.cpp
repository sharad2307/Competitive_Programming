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
	
	ll n, k, a[200004], m, i;
	cin>>n>>k;
	m = n/2;
	loop(i,0,n)cin>>a[i];
	sort(a,a+n); 
	for (i=a[m]; k>0; i++) 
	{
		while (i == a[m+1]) m++;
		k-=m-n/2+1;
	}
	if (k==0) cout<<i<<endl;
	else cout<<i-1<<endl;
}