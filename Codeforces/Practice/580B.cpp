#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()

ll d,n,m,k,b,i,j,p;
pair <ll,ll> a[100001];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
	
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	 cin>>n>>d;
     for(;i<n;i++)cin>>a[i].first>>a[i].second;
     sort(a,a+n);
     for(i=0;i<n;i++)
     {
         if(a[i].first-a[j].first<d)
         	{
         		k+=a[i].second; 
         		p=max(p,k);
         	}
         else 
         {
         	k-=a[j].second;
         	j++;
         	i--;
         }
 
     }
     cout<<p;
	
}