/***************
solution: sort & binary search
**************/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int m, n;
long long ans;
vector<int> x, y;
/*****************
compare function: 1 < 10^9 < 10^9 -1 < .... < 6 < 5 < 4 = 2 < 3
******************/
bool cmp(int x, int y) {
	if(x == 1)
		return y != 1;
	else if(x > 4) 
		return y != 1 && y < x;
	else if(x == 4 || x == 2)
		return y == 3;
	else return false;
}
int main()
{
	cin >> m >> n;
	for(int i = 0; i < m; i++) {
		int _x;
		cin >> _x;
		x.push_back(_x);
	}
	for(int i = 0; i < n; i++) {
		int _y;
		cin >> _y;
		y.push_back(_y);
	}
	sort(x.begin(), x.end(), cmp);
	ans = 0;
	for(int i = 0; i < n; i++)
		ans += x.end() - upper_bound(x.begin(), x.end(), y[i], cmp);
	cout << ans << endl;
	return 0;
}
