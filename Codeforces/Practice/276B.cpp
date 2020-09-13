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
	
	string s;
	cin>>s;
	map<char,ll> m;

	loop(i,0,s.length())
	{
		m[s[i]]++;
	}
	ll k=0;
	map<char , ll >::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
		if((itr->second)%2)k++;

	if(k==0)cout<<"First";
	else if(k==1)cout<<"First";
	else if(k%2)cout<<"First";
	else cout<<"Second";
}