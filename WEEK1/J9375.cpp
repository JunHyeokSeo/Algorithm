#include <bits/stdc++.h>
using namespace std;

int t, n;
string clo, fd;

int main()
{
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		map<string, int> mp;
		long long ret = 1;
		for (int j = 0; j < n; j++)
		{
			cin >> clo >> fd;
			mp[fd]++;
		}
		for (auto i : mp)
			ret *= (long long)(i.second + 1);
		ret--;
		cout << ret << '\n';
	}
}