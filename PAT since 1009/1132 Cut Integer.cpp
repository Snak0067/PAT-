#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	string strz;
	long long int z, a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> strz;
		int len = strz.length();
		z = stoll(strz);
		a = stoll(strz.substr(0, len / 2));
		b = stoll(strz.substr(len / 2));
		double c = z * 1.0 / a / b;
		printf("%s\n", (int)c == c ? "Yes" : "No");
	}

	return 0;
}