#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n;

void Input() {
	cin >> n;
}

void Solve() {
	double ans = 0;
	for (int i=1; i<=n; i++) ans += 1.0 / i;
	
	cout << fixed << setprecision(12) << ans << endl;
}

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	Input(); Solve(); return 0;
}