//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, kind = 0;
//vector<int>v;
//void dfs(int i, int type, vector<int>temp) {
//	if (i >= n)return;
//	temp.push_back(v[i]);
//	if (i * 2 + 1 >= n) {
//		for (int i = 0; i < temp.size(); i++) {
//			if (i != 0) {
//				printf(" ");
//				if (type == 1 && temp[i - 1] < temp[i])kind = -1;
//				else if (type == 2 && temp[i - 1] > temp[i])kind = -1;
//			}
//			printf("%d", temp[i]);
//		}
//		printf("\n");
//		return;
//	}
//	dfs(i * 2 + 2, type, temp);
//	dfs(i * 2 + 1, type, temp);
//}
//
//int main() {
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &v[i]);
//	vector<int>temp;
//	kind = (v[0] < v[1] ? 2 : 1);
//	dfs(0, kind, temp);
//	if (kind == -1)printf("Not Heap\n");
//	else if (kind == 2)printf("Min Heap\n");
//	else if (kind == 1)printf("Max Heap\n");
//	return 0;
//}