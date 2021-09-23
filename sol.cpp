#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int a[7];

void solve() {
	for(int i=0; i<7; ++i)
		cin >> a[i];
	int cnt=0;
	for(int i=0; i<7; ++i)
		cnt+=a[i]==1;
	cout << (cnt>7-cnt?"YES":"NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
