//별 찍기 - 9
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j < n+i; j++) {
			if (j < (n - 1) - i) cout << ' ';
			else cout << '*';
		}
		cout << '\n';
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n + i; j++) {
			if (j < n - i - 1) cout << ' ';
			else cout << '*';
		}
		cout << '\n';
	}
}
