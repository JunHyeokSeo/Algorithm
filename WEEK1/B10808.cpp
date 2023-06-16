#include<bits/stdc++.h>
using namespace std;

string str;
int arr[26];

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> str;
	// for (int i = 0; i < str.size(); i++)
	// 	arr[str[i] - 'a']++;
	for (char c : str)
		arr[c - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
}