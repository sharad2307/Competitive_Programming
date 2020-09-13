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

		string bus[]=
		{
			"+------------------------+",
			"|#.#.#.#.#.#.#.#.#.#.#.|D|)",
			"|#.#.#.#.#.#.#.#.#.#.#.|.|",
			"|#.......................|",
			"|#.#.#.#.#.#.#.#.#.#.#.|.|)",
			"+------------------------+"
		};
		ll n,i=1,j=1; cin>>n;
		while (n)
		{
			n--;
			bus[i][j]='O';
			i++;
			if(i==3&&j!=1)i++;
			if(i==5)i=1,j+=2;
		}
		for(ll i=0;i<6;i++)cout<<bus[i]<<endl;
			return 0;
	}

	



