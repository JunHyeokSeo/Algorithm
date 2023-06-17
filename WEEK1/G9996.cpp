#include<bits/stdc++.h>
using namespace std;

/*
입력
첫째 줄에 파일의 개수 N이 주어진다. (1 ≤ N ≤ 100)
둘째 줄에는 패턴이 주어진다. 패턴은 알파벳 소문자와 별표(아스키값 42) 한 개로 이루어져 있다. 문자열의 길이는 100을 넘지 않으며, 별표는 문자열의 시작과 끝에 있지 않다.
다음 N개 줄에는 파일 이름이 주어진다. 파일 이름은 알파벳 소문자로만 이루어져 있고, 길이는 100을 넘지 않는다.

출력
총 N개의 줄에 걸쳐서, 입력으로 주어진 i번째 파일 이름이 패턴과 일치하면 "DA", 일치하지 않으면 "NE"를 출력한다.
*/

int n, pos;
string patt, name, pre, suf;
vector<string> ret;

int main()
{
	cin >> n;
	cin >> patt;
	pos = patt.find("*");
	pre = patt.substr(0, pos);
	suf = patt.substr(pos + 1);
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		if (pre.size() + suf.size() > name.size())
		{
			cout << "NE\n";
			continue;
		}
		if (pre == name.substr(0, pre.size()) && suf == name.substr(name.size() - suf.size()))
			cout << "DA\n";
		else
			cout << "NE\n";
	}
	return 0;
}