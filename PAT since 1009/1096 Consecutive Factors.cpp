//#include<iostream>
//#include<string>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int number, start = 0, len = 0;
//	scanf_s("%d", &number);
//	int maxn = sqrt(number) + 1;
//	for (int i = 2; i <= maxn; i++)
//	{
//		int u, temp = 1;
//		for (u = i; u < maxn; u++)
//		{
//			temp *= u;
//			if (number % temp != 0) break;
//		}
//		if (u - i > len) {
//			len = u - i;
//			start = i;
//		}
//	}
//	if (start == 0) {
//		cout << 1 << endl << number;
//		return 0;
//	}
//	else {
//		cout << len << endl;
//		int i;
//		for (i = start; i - start < len - 1; i++)
//		{
//			printf("%d*", i);
//		}
//		printf("%d", i);
//	}
//	return 0;
//}