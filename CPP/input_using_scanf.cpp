#include<bits/stdc++.h>
using namespace std;
char a[10][10];
int main()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}