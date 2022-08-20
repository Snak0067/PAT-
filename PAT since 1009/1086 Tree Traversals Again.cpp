//#include<iostream>
//#include<string>
//#include<stack>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int> pre, inOrder, value, post;
//
//void postOrder(int root, int start, int end) {
//	if (start > end)return;
//	int i = start;
//	while (i < end && pre[root] != inOrder[i])i++;
//	postOrder(root + 1, start, i - 1);
//	postOrder(root + i - start + 1, i + 1, end);
//	post.push_back(value[pre[root]]);
//}
//int main() {
//	int n, num, xuhao = 0;
//	stack<int>sta;
//	string operation;
//	scanf("%d", &n);
//	for (int i = 0; i < n * 2; i++)
//	{
//		cin >> operation;
//		switch (operation[1]) {
//		case 'u':
//			scanf("%d", &num);
//			value.push_back(num);
//			pre.push_back(xuhao);
//			sta.push(xuhao++);
//			break;
//		case 'o':
//			inOrder.push_back(sta.top());
//			sta.pop();
//			break;
//		}
//	}
//	postOrder(0, 0, n - 1);
//	printf("%d", post[0]);
//	for (int i = 1; i < post.size(); i++)
//	{
//		printf(" %d", post[i]);
//	}
//	return 0;
//}