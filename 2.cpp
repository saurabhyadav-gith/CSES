#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define nline "\n"
#define gcd(a,b) (__gcd(a,b))
#define lcm(a,b) ((a*b)/gcd(a,b))
vector<ll> soe(ll n) {ll *arr = new ll[n + 1]; vector<ll>ans; for (ll i = 0; i <= n; i++) {arr[i] = 1;} arr[0] = 0; arr[1] = 0; for (ll i = 2; i <= sqrt(n); i++) {if (arr[i] == 1) {for (ll j = 2; i * j <= n; j++) {arr[i * j] = 0;}}} for (ll i = 0; i <= n; i++) {if (arr[i] == 1)ans.push_back(i);} return ans;}

const ll mod = 1e9 + 7;
/* ncr = n-1cr-1+ n-1cr  */

/******************************************************************/
vector<string>ans;
void giveans(int s, int d, int h, int n, int &c) {
	c++;
	if (n == 1) {
		string ak = to_string(s) + " " + to_string(d);
		ans.push_back(ak);
		return;
	}
	giveans(s, h, d, n - 1, c);
	string ak = to_string(s) + " " + to_string(d);
	ans.push_back(ak);
	giveans(h, d, s, n - 1, c);
	return;
}


void solve() {
	ans.clear();
	int n;
	cin >> n;

	int s = 1, h = 2, d = 3, c = 0;

	giveans(s, d, h, n, c);

	cout << c << nline;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << nline;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
	// int test;
	// cin >> test;
	// while(test--){
	solve();
	// }
}