#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;


vector<int>v;

int main() {
	int n;
	scanf_s("%d", &n);
	v.resize(n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &v[i]);
	}
	sort(v.begin(), v.end());
	int  E = n;
	for (int i = 0; i < n; i++)
	{
		if (E < v[i]) {
			printf("%d", E);
			return 0;
		}
		E--;
	}
	printf("%d", 0);
	return 0;
}