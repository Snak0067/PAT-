//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int a[205], b[10005], c[10005];
//int N, M, L, num, index = 0, maxn = 1;
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		cin >> num;
//		a[num] = i + 1;
//	}
//	cin >> L;
//	for (int i = 0; i < L; i++) {
//		cin >> num;
//		if (a[num] > 0)b[index++] = a[num];
//	}
//	c[0] = 1;
//	for (int i = 1; i < index; i++) {
//		c[i] = 1;
//		for (int j = 0; j < i; j++) {
//			if (b[j] <= b[i]) {
//				c[i] = max(c[i], c[j] + 1);
//			}
//		}
//		maxn = max(maxn, c[i]);
//	}
//	cout << maxn;
//	return 0;
//}