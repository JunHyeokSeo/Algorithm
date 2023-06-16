#include <bits/stdc++.h>
using namespace std;
map<string, string> mp2;
map<int, int> mp1;

int main()
{
	cout << mp1[1] << '\n';
	cout << mp2["jun"] << '\n';

	for (auto i : mp1)
		cout << i.first << " " << i.second;
	cout << '\n';
	for (auto i : mp2)
		cout << i.first << " " << i.second;
	return 0;
}