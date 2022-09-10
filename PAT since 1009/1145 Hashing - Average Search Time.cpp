//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool ifPrime(int num) {
//	if (num <= 1)return false;
//	for (int i = 2; i <= sqrt(num) + 1; i++)
//	{
//		if (num % 2 == 0)return false;
//	}
//	return true;
//}
//int redefine(int num) {
//	while (!ifPrime(num)) {
//		num++;
//	}
//	return num;
//}
//
//int main() {
//	int msize, n, m, a;
//	scanf_s("%d%d%d", &msize, &n, &m);
//	msize = redefine(msize);
//	vector<int>table(msize, -1);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &a);
//		int pos = 0;
//		for (int j = 0; j < msize; j++)
//		{
//			pos = (a + j * j) % msize;
//			if (table[pos] == -1) {
//				break;
//			}
//		}
//		if (table[pos] == -1) {
//			table[pos] = a;
//		}
//		else {
//			printf("%d cannot be inserted.\n", a);
//		}
//	}
//	int ans = 0, pos = 0;
//	for (int i = 0; i < m; i++)
//	{
//		scanf_s("%d", &a);
//		for (int j = 0; j <= msize; j++)
//		{
//			pos = (a + j * j) % msize;
//			ans++;
//			if (table[pos] == a || table[pos] == -1) {
//				break;
//			}
//		}
//	}
//	double avg = ans * 1.0 / m;
//	printf("%.1f\n", avg);
//
//	return 0;
//}