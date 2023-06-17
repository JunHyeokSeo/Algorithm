#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c;

ll go(ll a, ll b)
{
	if (b == 1) return a % c;
	ll ret = go(a, b / 2);

	/*
	ret = (ret * ret) % c;	는 되고
	ret = ret * ret; return ret % c;	는 안되는 이유.

	"ret * ret"에서 오버플로우가 발생하는 상황이라면 위, 아래 코드에는 차이가 없다.
	다만, ret * ret 연산까지는 가능하나, a를 곱할 때 오버플로우가 발생하는 경우라면,
	위 코드는 정상동작할 것이고 아래 코드는 오버플로우가 발생할 것이다.
	즉, ret * ret 연산 값을 c로 mod 연산하여 값을 줄이지 않으면 a를 곱할 때 오버플로우가 발생하는 경우
	위와 같은 코드 차이로 인해 동작 결과가 서로 다를 수 있다.
	*/

	ret = (ret * ret) % c;
	if (b % 2) ret = (ret * a) % c;
	return ret;
}

int main()
{
	cin >> a >> b >> c;
	cout << go(a, b) << '\n';
	return 0;
}