#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
typedef unsigned long long ull;
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define testcases ll t;cin>>t;while(t--)
#define dec(x) greater<x>()

/*** Define Values ***/
#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 100005
const char nl = '\n';

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))

/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())
inline bool cmp(pll a, pll b) { if (a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }

#define en cout << '\n';
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define case cout << "Case " << t++ << ": "

/*** Functions
ll BigMod(ll base, ll pow, ll modvalue){ if (pow == 0) return 1;  ll ans = BigMod(base, pow / 2, modvalue);ll total = ((ans % modvalue) * (ans % modvalue)) % modvalue;  if(pow % 2 == 0) return total; else{ return (total * (base % modvalue) ) % modvalue; } }
ll InverseMod(ll base, ll pow) { if(pow == 0) return 1; ll ans = InverseMod(base, pow / 2); ans = (ans * ans) % mod; if(pow & 1){ return (ans * base) % mod; } else{ return ans; } }
bool checkprime(ll num) { if(num < 2) return false; for(ll i = 2; i * i <= num; i++){ if(num % i == 0) return false; } return true; }
ll EularPHI(ll num) { double ans = num; for(ll i = 2; i * i <= num; i++){ if(num % i == 0){ while (num % i == 0) { num /= i; } ans *= (1.0 - (1.0 / (double)i)); } } if(num > 1) ans *= (1.0 - (1.0 / (double)num)); return (ll)ans; }
ll sumofdigit(long ll n){ll sum=0;while(n){sum=sum+n%10;n=n/10;}return sum;}
ll countDigit(ll n) { if (n == 0) return 0; return 1 + countDigit(n / 10); }
ll countDigit(ll n) { return floor(log10(n) + 1); } //only positive
 ***/

template <class T> inline T gcd(T a, T b) {if (b == 0)return a; return gcd(b, a % b);}
template <class T> inline T lcm(T a, T b) {return a * b / gcd<T>(a, b);}
template <class T> inline T power(T b, T p) {ll ans = 1; while (p--) ans *= b; return ans;}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt", "r", stdin);
	freopen("C:/Users/91731/Documents/output.txt", "w", stdout);
	freopen("C:/Users/91731/Documents/error.txt", "w", stderr);
#endif

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n;
	cin>>n;
	ll a[n];
	loop(i,0,n)cin>>a[i];
	vll v;	ll ans=0;


	// if(a[0]==a[1])v.pb(a[0]),ans++;;
	loop(i,1,n)
	{
		if(a[i]<=a[i-1])v.pb(a[i-1]),ans++;;
	}
	v.pb(a[n-1]);
	cout<<ans+1<<nl;
	for(auto i:v)
		cout<<i<<" ";
	
}