//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
//map<int, int>priority;
//vector<int>post;
//vector<int>in;
///*依据后序和中序输出前序*/
//void pre(int root, int start, int end, int index) {
//	if (start > end)return;
//	int i = start;
//	while (i < end && in[i] != post[root])i++;
//	priority[index] = post[root];
//	pre(root - 1 - (end - i), start, i - 1, index * 2 + 1);
//	pre(root - 1, i + 1, end, index * 2 + 2);
//}
////根据后序和中序 找出前序，在每次查找的过程中找到根节点，并对其依据查找前后的次序赋优先值
////依据优先值排序，map遍历输出
//
//int main() {
//	int n;
//	cin >> n;
//	post.resize(n);
//	in.resize(n);
//	for (int i = 0; i < n; i++)scanf_s("%d", &post[i]);
//	for (int i = 0; i < n; i++)scanf_s("%d", &in[i]);
//	pre(n - 1, 0, n - 1, 0);
//	map<int, int>::iterator iter = priority.begin();
//	cout << iter->second; iter++;
//	while (iter != priority.end()) {
//		cout << " " << iter->second;
//		iter++;
//	}
//	return 0;
//}