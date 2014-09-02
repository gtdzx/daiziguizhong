/********************
bruteforce O(nm) checker
*********************/
#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;
const int maxn = 100000;
int x[maxn], y[maxn], m, n;
long long ans;
int main()
{
	cin >> m >> n;
	assert(1 <= m && m <= 100000);
	assert(1 <= n && n <= 100000);
	for(int i = 0; i < m; i++) {
		cin >> x[i];
		assert(1 <= x[i] && x[i] <= 1000000000);
	}
	for(int i = 0; i < n; i++) {
		cin >> y[i];
		assert(1 <= y[i] && y[i] <= 1000000000);
	}
	ans = 0;
	for(int i = 0; i < m; i++)
	for(int j = 0; j < n; j++) {
		if(x[i] == 2 && y[j] == 4 || x[i] == 4 && y[j] == 2)	//avoid float error
			continue;
		if(y[j] * log(x[i]) > x[i] * log(y[j]))
			ans++;
	}
	cout << ans << endl;
	return 0;
}
