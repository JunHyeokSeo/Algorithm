// #include<bits/stdc++.h>
// using namespace std;

// int n, m, arr[10000004], cnt, tmp;

// int main()
// {
// 	cin >> n >> m;
// 	for (int i = 0; i < n; i++){
// 		cin >> tmp;
// 		arr[tmp]++;
// 	}
// 	for (int i = 0; i <= 10000000; i++){
// 		if (arr[i]){
// 			int val = m - i;
// 			if (val > 0)
// 				if (arr[val] == 1)
// 					cnt++;
// 		}
// 	}
// 	cout << cnt / 2 << '\n';
// }

#include<bits/stdc++.h>
using namespace std;
int n, m, a[15001], cnt;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	//n의 최대값 10만이므로 20만이 넘어가는 m 값은 고려하지 않아도 됨
	//timeout 방지
	if (m > 200000) cout << 0;
	else{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
				if (a[i] + a[j] == m) cnt++;
		cout << cnt;
	}
}