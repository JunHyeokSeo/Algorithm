#include<bits/stdc++.h>
using namespace std;

/*
입력
첫째 줄에 선수의 수 N (1 ≤ N ≤ 150)이 주어진다. 다음 N개 줄에는 각 선수의 성이 주어진다. (성은 알파벳 소문자로만 이루어져 있고, 최대 30글자이다)

출력
상근이가 선수 다섯 명을 선발할 수 없는 경우에는 "PREDAJA" (따옴표 없이)를 출력한다. PREDAJA는 크로아티아어로 항복을 의미한다. 선발할 수 있는 경우에는 가능한 성의 첫 글자를 사전순으로 공백없이 모두 출력한다.
*/
int num, arr[26];
string name, ret;

int main()
{
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> name;
		arr[name[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
		if (arr[i] >= 5) ret += (i + 'a');
	if (ret.size()) cout << ret;
	else cout << "PREDAJA";
	return 0;
}