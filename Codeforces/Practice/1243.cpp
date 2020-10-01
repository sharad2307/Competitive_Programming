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

	testcases
	{
		ll n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		ll t[2]={};
		ll k=0;
		loop(i,0,n)
		{
			if(s1[i] != s2[i])
			{
				t[k]=i;
				k++;
				if(k>1) break;
			}
		}
		swap(s1[t[0]],s2[t[1]]);
		if(s1==s2)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	
}