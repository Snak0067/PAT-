//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>v;
//vector<int>bst;
//int n, index = 0;
//void inorder(int x) {
//	if (x > n)return;
//	inorder(x * 2);
//	bst[x - 1] = v[index++];
//	inorder(x * 2 + 1);
//}
//
//int main() {
//	scanf_s("%d", &n);
//	v.resize(n);
//	bst.resize(n);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%d", &v[i]);
//	}
//	sort(v.begin(), v.end(), less<>());
//	inorder(1);
//	printf("%d", bst[0]);
//	for (int i = 1; i < n; i++) {
//		printf(" %d", bst[i]);
//	}
//	return 0;
//}