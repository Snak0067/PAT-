//#include<iostream>
//#include<map>
//#include<vector>
//#include<set>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//set<int>s[50];
//int input[10000];
//
//int main() {
//	int n, k, m, num;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &m);
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &num);
//			s[i].insert(num);
//		}
//	}
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++) {
//		scanf("%d%d", &input[i * 2], &input[i * 2 + 1]);
//	}
//	for (int i = 0; i < k; i++) {
//		int indexa = input[i * 2] - 1;
//		int indexb = input[i * 2 + 1] - 1;
//		set<int> s1 = s[indexa], s2 = s[indexb];
//		//if (s1.size() > s2.size()) {
//		//	set<int>temp = s1;
//		//	s1 = s2;
//		//	s2 = temp;
//		//}
//		set<int>::iterator it = s1.begin();
//		int count = 0, total = s2.size();
//		while (it != s1.end()) {
//			if (s2.find(*it) != s2.end()) {
//				count++;
//			}
//			else {
//				total++;
//			}
//			it++;
//		}
//		printf("%.1f", count * 100.0 / total);
//		cout << "%" << endl;
//	}
//	return 0;
//}