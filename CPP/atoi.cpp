#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s = "1";
	string s2 = "amumu";
	string s3 = "000";
	cout << atoi(s.c_str()) << '\n';
	cout << atoi(s2.c_str()) << '\n';
	cout << atoi(s3.c_str()) << '\n';
	if (atoi(s2.c_str()) == atoi(s3.c_str()))
		cout << "같음\n";
	return 0;
}