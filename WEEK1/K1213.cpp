#include <bits/stdc++.h>
using namespace std;

string s, ret;
char mid;
int cnt[26], flag;


int main()
{
	cin >> s;
	for (auto i : s) cnt[i - 'A']++;
	for (int i = 25; i >= 0; i--){
		if (cnt[i] & 1){
			flag++;
			mid = i + 'A';
		} 
		if (flag == 2) break;
		for (int j = cnt[i] % 2; j < cnt[i]; j += 2){
			ret = char(i + 'A') + ret;
			ret = ret + char(i + 'A');
		}
	}
	if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout << ret;
}