//#include<iostream>
//#include<string.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//char name[40005][5];
//vector<int> course[2505];
//int n, m, l, k;
//
//bool cmp(int a, int b) {
//	return strcmp(name[a], name[b]) < 0;
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%s %d", name[i], &l);
//		for (int j = 0; j < l; j++) {
//			scanf("%d", &k);
//			course[k].push_back(i);
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		printf("%d %d\n", i, course[i].size());
//		sort(course[i].begin(), course[i].end(), cmp);
//		for (int j = 0; j < course[i].size(); j++) {
//			printf("%s\n", name[course[i][j]]);
//		}
//	}
//	return 0;
//}