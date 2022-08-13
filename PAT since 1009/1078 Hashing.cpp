#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool isprime(int num) {
	if (num == 1)return false;
	if (num == 2)return true;
	bool prime = true;
	for (unsigned i = 2; i <= sqrt(num) + 1; i++)
	{
		if (num % i == 0) {
			prime = false;
			break;
		}
	}
	if (prime)return true;
	return false;
}
bool visit[1005] = { false };

int main() {
	int MSize, N, num;
	scanf("%d %d", &MSize, &N);
	while (!isprime(MSize))MSize++;
	for (unsigned i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (i != 0) printf(" ");
		bool find = false;
		for (unsigned u = 0; u < MSize && !find; u++)
		{
			int index = (num + u * u) % MSize;
			if (!visit[index]) {
				visit[index] = true;
				printf("%d", index);
				find = true;
				break;
			}
		}
		if (!find)printf("-");
	}
	return 0;
}