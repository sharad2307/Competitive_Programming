#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, x;
	string noleap = "303232332323";
	string leap = "313232332323";
	string s = noleap+noleap+noleap+leap+noleap+noleap;
	string t;

	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> x;
		t += x-28+'0';
	}
	if(s.find(t)!=string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
}