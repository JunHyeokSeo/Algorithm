#include <bits/stdc++.h>
using namespace std;

vector<string> v[5];
string tmp, c;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		tmp = "";
		for (int j = 0; j < 5; j++)
		{
			cin >> c;
			tmp += c;
		}
		v[i].push_back(tmp);
	}
	for (auto it : v)
		cout << it[0] << '\n';
}