#include<bits/stdc++.h>
using namespace std;

int n, cnt;
string str;

int main()
{
	//입력
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		stack<char> stk;
		for (char a : str){
			if (stk.size() && stk.top() == a) stk.pop();
			else stk.push(a);
		}
		// for (int j = 0; j < str.size(); j++){
		// 	if (stk.empty()){
		// 		stk.push(str[j]);
		// 		continue;
		// 	}
		// 	if (stk.top() == str[j])
		// 		stk.pop();
		// 	else stk.push(str[j]);
		// }
		if (stk.size() == 0) cnt++;
	}
	//출력
	cout << cnt;
}