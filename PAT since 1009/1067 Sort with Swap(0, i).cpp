//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, num;
//int v[100010];
//
//int main() {
//	int count = 0;
//	scanf_s("%d", &n);
//	for (unsigned i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		v[num] = i;
//	}
//	for (unsigned i = 1; i < n; i++)
//	{
//		if (v[i] != i) {
//			while (v[0] != 0) {
//				swap(v[0], v[v[0]]);
//				count++;
//			}
//			if (v[i] != i) {
//				swap(v[0], v[i]);
//				count++;
//			}
//		}
//	}
//
//	cout << count;
//	return 0;
//}