#include<bits/stdc++.h>
using namespace std;

/*순열 - 재귀*/
int a[9], total, n = 9, r = 7;

void solve()
{
	total = 0;
	for (int i = 0; i < 7; i++)
		total += a[i];
	if (total == 100)
	{
		sort(a, a + 7);
		for (int i = 0; i < 7; i++) cout << a[i] << '\n';
		exit(0);
	}
}

/*depth 이후를 swap*/
//해당 코드가 불필요한 연산을 최소화한 코드라고 보여짐
//i = depth를 통해 이전에 실시한 swap을 생략할 수 있고
//depth == r을 통해 9개짜리 순열을 생성하지 않고 7개짜리 순열을 생성할 때마다 solve 함수 호출하여 조건에 맞는지 확인
void makePermutation(int n, int r, int depth)
{
	//depth == 9로 하여 요소 9개짜리 순열 생성 후 검사 가능
	//but, 그러려면 for문 조건도 i = 0; i < depth; i++로 변경해야함
	if (depth == r)
	{
		solve();
		return ;
	}
	//for (int i = 0; i <= depth; i++)
	//앞서 기저사례를 depth == r로 설정했기 때문에,
	//위처럼 조건식 설정 시, 배열 전체를 대상으로 순열을 생성할 수 없게됨(depth는 최대 7까지)
	for (int i = depth; i < n; i++)
	{
		swap(a[i], a[depth]);
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]);
	}
}

/*
//0부터 depth를 포함하는 값까지 swap
void makePermutation(int n, int r, int depth)
{
	if (depth == 9)
	{
		solve();
		return ;
	}
	for (int i = 0; i <= depth; i++)
	{
		swap(a[i], a[depth]);
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]);
	}
}
*/

int main()
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
	makePermutation(n, r, 0);
	return 0;
}

/*조합 - 재귀*/
// int a[9], total;
// vector<int> v;
// pair<int,int> ret;

// void solve(int start)
// {
// 	if (start == 9) return ;
// 	for (int i = 0; i < start; i++)
// 	{
// 		if (total - (a[i] + a[start]) == 100)
// 		{
// 				ret = {a[i], a[start]};
// 				return ;
// 		}
// 	}
// 	solve(start + 1);
// }

// int main()
// {
// 	for (int i = 0; i < 9; i++)
// 	{
// 		cin >> a[i];
// 		total += a[i];
// 	}
// 	solve(0);
// 	for (auto it : a)
// 		if (it != ret.first && it != ret.second) v.push_back(it);
// 	sort(v.begin(), v.end());
// 	for (auto it : v) cout << it << '\n';
// }

/*조합 - for문*/
// int a[9];
// int total;
// vector<int> v;
// pair<int,int> ret;

// void solve()
// {
// 	for (int i = 0; i < 9; i++)
// 	{
// 		for (int j = 0; j < i; j++)
// 		{
// 			if (total - (a[i] + a[j]) == 100)
// 			{
// 				ret = {a[i], a[j]};
// 				return ;
// 			}
// 		}
// 	}
// }

// int main()
// {
// 	for (int i = 0; i < 9; i++)
// 	{
// 		cin >> a[i];
// 		total += a[i];
// 	}
// 	solve();
// 	for (auto it : a)
// 		if (it != ret.first && it != ret.second) v.push_back(it);
// 	sort(v.begin(), v.end());
// 	for (auto it : v) cout << it << '\n';
// }

/*순열*/
// int main()
// {
// 	//값 입력
// 	for (int i = 0; i < 9; i++)
// 		cin >> a[i];
	
// 	//순열 계산
// 	sort(a, a + 9);
// 	do{
// 		int sum = 0;
// 		for (int i = 0; i < 7; i++) sum += a[i];
// 		if (sum == 100) break;
// 	}while (next_permutation(a, a + 9));
// 	for (int i = 0; i < 7; i++)	cout << a[i] << '\n';
// }