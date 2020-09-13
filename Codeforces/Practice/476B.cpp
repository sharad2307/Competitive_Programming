#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a,b;
int sum=0,len;
double solve(int k=0, int cur=0){
	if(cur==sum && k==len)return 1;
	if(k>len)return 0;
	if(b[k]=='+')return solve(k+1, cur+1);
	if(b[k]=='-')return solve(k+1, cur-1);
	return (0.5*solve(k+1, cur+1)) + (0.5*solve(k+1,cur-1));
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif

	cin>>a>>b;
	len = a.length();
	for(int i=0; i<len; i++){
		if(a[i]=='+')sum++;
		else sum--;
	}
	cout<<fixed<<setprecision(15)<<solve();
	return 0;
}


