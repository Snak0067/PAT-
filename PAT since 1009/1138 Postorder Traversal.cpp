//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>in, pre, index;
//int firstpost(int prei, int prej, int ini, int inj) {
//	if (prei > prej || ini > inj)return -1;
//	if (prei == prej && ini == inj) {
//		return pre[prej];
//	}
//	int root = pre[prei];
//	int inindex = ini;
//	while (inindex <= inj && in[inindex] != root)inindex++;
//	int leftNum = firstpost(prei + 1, prei + inindex - ini, ini, inindex - 1);
//	if (leftNum != -1)return leftNum;
//	int rightNum = firstpost(prei + 1 + inindex - ini, prej, inindex + 1, inj);
//	if (rightNum != -1)return rightNum;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	in.resize(n);
//	pre.resize(n);
//	index.resize(n + 1);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &pre[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &in[i]);
//		index[in[i]] = i;
//	}
//	printf("%d", firstpost(0, n - 1, 0, n - 1));
//	return 0;
//}