#include <bits/stdc++.h>
using namespace std;

int arr[104], cost[4], ret, a, b;

//count arr 활용
int main()
{
	cin >> cost[1] >> cost[2] >> cost[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		for (int i = a; i < b; i++)
			arr[i]++;
	}
	for (int i = 1; i <= 100; i++)
		ret += cost[arr[i]] * arr[i];
	cout << ret;
}

// for문
// #include<bits/stdc++.h>
// using namespace std;

// int cost[4], total_cost;
// pair<int,int> tmp;
// vector<pair<int,int>> v;

// int main()
// {
// 	cin >> cost[1] >> cost[2] >> cost[3];
// 	for (int i = 0; i < 3; i++)
// 	{
// 		cin >> tmp.first >> tmp.second;
// 		v.push_back(tmp);
// 	}
// 	for (int i = 1; i <= 100; i++)
// 	{
// 		int cnt = 0;
// 		for (int j = 0; j < 3; j++)
// 			if (v[j].first <= i && v[j].second > i) cnt++;
// 		total_cost += cost[cnt] * cnt;
// 	}
// 	cout << total_cost;	
// }