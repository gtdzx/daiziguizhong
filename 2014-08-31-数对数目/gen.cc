/*****************
usage: gen m n minx maxx miny maxy
generates m integers of [minx, maxx] and n integers of [miny, maxy].
***********************/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<cassert>
using namespace std;
int n, m, minx, miny, maxx, maxy;
int main(int argc, char* argv[])
{
	if(argc != 7) {
		cerr << "usage: gen m n minx maxx miny maxy" << endl;
		cerr << "generates m integers of [minx, maxx] and n integers of [miny, maxy]." << endl;
		return -1;
	}
	sscanf(argv[1], "%d", &m);
	sscanf(argv[2], "%d", &n);
	sscanf(argv[3], "%d", &minx);
	sscanf(argv[4], "%d", &maxx);
	sscanf(argv[5], "%d", &miny);
	sscanf(argv[6], "%d", &maxy);
	assert(1 <= m && m <= 100000);
	assert(1 <= n && n <= 100000);
	assert(1 <= minx && minx <= maxx && maxx <= 1000000000);
	assert(1 <= miny && miny <= maxy && maxy <= 1000000000);
	
	srand(time(NULL));
	cout << m << ' ' << n << endl;
	for(int i = 0; i < m; i++) {
		int x = rand() % (maxx - minx + 1) + minx;
		cout << x << ' ';
	}
	cout << endl;
	for(int i = 0; i < n; i++) {
		int y = rand() % (maxy - miny + 1) + miny;
		cout << y << ' ' ;
	}
	cout << endl;
	return 0;
}

	
