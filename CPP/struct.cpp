#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int y, x;

	Point(int y, int x) : y(y), x(x) {}
	Point()
	{
		y = -1;
		x = -1;
	}

	bool operator<(Point &a)
	{
		a.x = 1;
		return true;
	}
};

int main()
{
	Point p1(3, 4);
	Point p2(2, 5);
	if (p1 < p2)
	cout << p2.x << '\n';
}