#include <bits/stdc++.h>
using namespace std;
int n = 5, k = 2;
void print(vector<int> b)
{
	for (int i : b)
		cout << i << " ";
	cout << '\n';
}
void combi(int start, vector<int> b)
{
	if (b.size() == k)
	{
		print(b);
		return;
	}
	for (int i = start; i < n; i++)
	{
		b.push_back(i);
		combi(i + 1, b);
		b.pop_back();
	}
	return;
}
int main()
{
	vector<int> b;
	combi(0, b);
	return 0;
}