#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

int main()
{
	while (scanf("%lld", &n) != EOF)
	{
		ll m = 1, cnt = 1;
		while (m % n != 0)
		{
			m = (m * 10) + 1;
			m %= n;
			cnt++;
		}
		cout << cnt << '\n';
	}
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll n, cnt;

// ll is_one(ll m)
// {
// 	cnt = 0;
// 	while (m > 0)
// 	{
// 		if (m % 10 != 1) return 0;
// 		m /= 10;
// 		cnt++;
// 	}
// 	return cnt;
// }

// int main()
// {
//	 ios_base::sync_with_stdio(false);
//	 cin.tie(NULL);
//	 cout.tie(NULL);

// 	ll i = 1;

// 	cin >> n;
// 	while ((n * i) % 10 != 1)
// 		i++;
// 	while (!is_one(n * i))
// 		i += 10;
// 	cout << cnt << '\n';
// }