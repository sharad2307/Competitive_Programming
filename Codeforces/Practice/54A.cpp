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


    ll a[380];
    ll n,k,c,ans=0,tmp=0,i;
    cin>>n>>k>>c;
    for(i=1;i<=c;i++){
      cin>>a[i];
      while(tmp+k<a[i]){
        ans++;
        tmp+=k;
    }
    ans++;
    tmp=a[i];
}
while(tmp+k<=n){
  ans++;
  tmp+=k;
} 
cout<<ans;
return 0;
}