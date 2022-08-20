#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	long long p, n, num;
	vector<int>v;
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end(), less<int>());
	int distance = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + distance; j < n; j++)
		{
			if (v[j] <= v[i] * p && v[i] * p > 0) {
				int temp = j - i + 1;
				if (temp > distance)distance = temp;
			}
			else {
				break;
			}
		}
	}
	printf("%d", distance);
	return 0;
}