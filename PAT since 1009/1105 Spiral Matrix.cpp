//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>v;
//
//int main() {
//	int k, m, n, num;
//	scanf_s("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf_s("%d", &num);
//		v.push_back(num);
//	}
//	n = (int)sqrt(k);
//	while (k % n != 0 && n >= 2) {
//		n--;
//	}
//	m = k / n;
//	sort(v.begin(), v.end(), greater<int>());
//	vector<vector<int>>matrix(m, vector<int>(n, -1));
//	int i = 0, j = 0, index = 0;
//	matrix[i][j] = v[index++];
//	while (index < k) {
//		while (j + 1 < n && matrix[i][j + 1] == -1) {
//			matrix[i][++j] = v[index++];
//		}
//		while (i + 1 < m && matrix[i + 1][j] == -1) {
//			matrix[++i][j] = v[index++];
//		}
//		while (j - 1 >= 0 && matrix[i][j - 1] == -1) {
//			matrix[i][--j] = v[index++];
//		}
//		while (i - 1 >= 0 && matrix[i - 1][j] == -1) {
//			matrix[--i][j] = v[index++];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n - 1; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("%d\n", matrix[i][j]);
//	}
//	return 0;
//}