//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int v[100000];
//
//int main() {
//	int n, max = 0, cnt = 0;
//	scanf_s("%d", &n);
//	vector<int>a(n), b(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//		b[i] = a[i];
//	}
//	sort(a.begin(), a.end());
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == b[i] && b[i] > max) {
//			v[cnt++] = b[i];
//		}
//		if (b[i] > max)max = b[i];
//	}
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++) {
//		if (i != 0) printf(" ");
//		printf("%d", v[i]);
//	}
//	printf("\n");
//
//	return 0;
//}