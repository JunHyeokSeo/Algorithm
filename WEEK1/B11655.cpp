#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z') str[i] = (str[i] + 13) - 26;
			else str[i] += 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + 13 > 'Z') str[i] = (str[i] + 13) - 26;
			else str[i] += 13;
		}
	}
	cout << str;
	return 0;
}