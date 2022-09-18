//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int k, n, m, a, b, lasted, call[1005][1005], p[1001], mark[1001];
//vector<int>su;
//int find(int a) {
//	if (p[a] != a)return p[a] = find(p[a]);
//	return a;
//}
////Ð¡ÐòºÅÎªÍ·
//void add(int a, int b) {
//	int f1 = p[a], f2 = p[b];
//	if (f1 < f2)p[f2] = f1;
//	else p[f1] = f2;
//}
//int main() {
//	for (int i = 1; i <= 1000; i++) p[i] = i;
//	scanf("%d%d%d", &k, &n, &m);
//	for (int i = 0; i < m; i++) {
//		scanf("%d%d%d", &a, &b, &lasted);
//		call[a][b] += lasted;
//	}
//	for (int i = 1; i <= n; i++) {
//		int short_call = 0, num_call_back = 0;
//		for (int j = 1; j <= n; j++) {
//			if (call[i][j] && call[i][j] <= 5) {
//				short_call++;
//				if (call[j][i])num_call_back++;
//			}
//		}
//		if (short_call > k && num_call_back * 5 <= short_call)	su.push_back(i);
//	}
//	if (su.size() == 0) {
//		printf("None\n"); return 0;
//	}
//	for (int i = 0; i < su.size(); i++) {
//		for (int j = i + 1; j < su.size(); j++) {
//			if (call[su[i]][su[j]]  && call[su[j]][su[i]])add(su[i], su[j]);
//		}
//	}
//	for (int i = 0; i < su.size(); i++) {
//		if (mark[su[i]] == 1)continue;
//		printf("%d", su[i]);
//		for (int j = i + 1; j < su.size(); j++) {
//			if (find(su[i]) != find(su[j]))continue;
//			printf(" %d", su[j]);
//			mark[su[j]] = 1;
//		}
//		printf("\n");
//	}
//	return 0;
//}