//#include<iostream>
//#include<stack>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int>v;
//stack<int>s;
//
//
//int main() {
//	int n, m, k;
//	scanf_s("%d %d %d", &m, &n, &k);
//	for (int i = 0; i < k; i++) {
//		vector<int>v(n + 1);
//		stack<int>s;
//		int current = 1;
//		for (int i = 1; i <= n; i++) {
//			scanf_s("%d", &v[i]);
//		}
//		for (int i = 1; i <= n; i++) {
//			s.push(i);
//			if (s.size() == m + 1)break;
//			while (s.size() != 0 && s.top() == v[current]) {
//				s.pop();
//				current++;
//			}
//		}
//		current == n + 1 ? printf("YES\n") : printf("NO\n");
//	}
//
//	return 0;
//}