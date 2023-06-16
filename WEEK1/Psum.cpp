#include<bits/stdc++.h>
using namespace std;

int a[100001], psum[100001], n, m, b, e;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		psum[i] = psum[i - 1] + a[i];
	}
	for (int k = 0; k < m; k++)
	{
		cin >> b >> e;
		cout << psum[e] - psum[b - 1] << '\n';
	}
}

// CASE 2 - for문 사용
// int arr[100001];
// int n, m;
// int s, e;

// int main()
// {
// 	cin >> n >> m;
// 	for (int i = 1; i <= n; i++)
// 		cin >> arr[i];
// 	for (int i = 0; i < m; i++)
// 	{
// 		cin >> s >> e;
// 		int sum = 0;
// 		for (int j = s; j <= e; j++) sum += arr[j];
// 		cout << sum << '\n';
// 	}
// }