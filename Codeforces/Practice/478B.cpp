#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	ll n, m;
    cin >> n >> m;
    cout << ((n/m)*(n/m - 1)/2)*m + ((n/m) * (n%m))
        << " " << (n-m+1)*(n-m)/2;
			
	
}