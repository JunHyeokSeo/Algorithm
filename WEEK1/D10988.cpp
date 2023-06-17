#include<bits/stdc++.h>
using namespace std;

/*
입력
첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.
출력
첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.
*/

//reverse
string str, tmp;

int main()
{
	cin >> str;
	tmp = str;
	reverse(tmp.begin(), tmp.end());
	if (tmp == str) cout << 1 << '\n';
	else cout << 0 << '\n';
	return 0;
}

//for
// string str;
// int len;
// int main()
// {
// 	cin >> str;
// 	len = str.size();
// 	for (int i = 0; i < len / 2; i++)
// 	{	if (str[i] != str[len - (i  + 1)])
// 		{
// 			cout << 0;
// 			exit (0);
// 		}
// 	}
// 	cout << 1;
// }