#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll l,r;
	cin>>l>>r;
	if(r<2*l)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll t = 1;
	cin>>t;
	while (t--)
	{
		
		solve();
	}
}
