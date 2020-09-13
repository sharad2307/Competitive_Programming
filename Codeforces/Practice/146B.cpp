#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mas(int p){
	int s = 0, t = 1;
	while (p){
		if (p % 10 == 4 || p % 10 == 7)
			s += (p % 10) * t, t *= 10;
		p /= 10;
	}
	return s;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
    #endif
    
	ll a, b;
	cin >> a >> b;
	while(mas(a+1) != b) a++;
	cout << a + 1;
	return 0;

}