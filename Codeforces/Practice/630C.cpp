#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll numbers(ll n) 
{ 
    return (ll)(pow(2, n + 1)) - 2; 
} 

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	ll n;
	cin>>n;
    cout << numbers(n); 
    return 0; 
}