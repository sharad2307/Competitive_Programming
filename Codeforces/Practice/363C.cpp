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

	ll c=0; 
	string s,s1;
	cin >> s;
	loop(i,0,s.length())
	{
		if(c>=2 && s1[c-2]==s1[c-1] && s1[c-1] == s[i])
		{
			continue;
		}
		if(c>=3 && s1[c-3]==s1[c-2] && s1[c-1]==s[i])
		{
			continue;
		}
		s1+=s[i];
		c++;
	}
	cout<<s1;
	
	
}