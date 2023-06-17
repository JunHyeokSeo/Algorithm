#include<bits/stdc++.h>
using namespace std;

map<string,int> mp;
string a[100004], tmp;
int n, m, rv;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> tmp;
		a[i] = tmp;
		mp[tmp] = i;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		rv = atoi(tmp.c_str());
		if (rv == 0) cout << mp[tmp] << '\n';
		else cout << a[rv] << '\n';
	}
	return 0;
}