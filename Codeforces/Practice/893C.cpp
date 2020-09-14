#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()
ll n,m,cost[100000],curr_min;
ll ans=0;
bool visited[100000];
vector<ll> adj[100000];

void dfs(int node)
{
	if(!visited[node])
	{
		visited[node]=true;
		curr_min=min(curr_min,cost[node]);
		for(ll i: adj[node])
			dfs(i);
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	cin>>n>>m;
	loop(i,0,n)cin>>cost[i];

	loop(i,0,m)
	{
		ll a,b;
		cin>>a>>b;
		a--,b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	loop(i,0,n)
	{
		if(!visited[i])
		{
			curr_min=cost[i];
			dfs(i);
			ans+=curr_min;
		}
	}

	cout<<ans<<endl;
	
}