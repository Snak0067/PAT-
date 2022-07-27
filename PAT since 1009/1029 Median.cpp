//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<long int>v;
//vector<long int>v1;
//vector<long int>v2;
//
//int main() {
//	int n, m, num, index1 = 0, index2 = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		v1.push_back(num);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> num;
//		v2.push_back(num);
//	}
//	while (index1 < n && index2 < m) {
//		if (v1[index1] < v2[index2]) {
//			v.push_back(v1[index1]);
//			index1++;
//		}
//		else {
//			v.push_back(v2[index2]);
//			index2++;
//		}
//	}
//	if (index1 < n) {
//		for (int i = index1; i < n; i++) {
//			v.push_back(v1[i]);
//		}
//	}
//	if (index2 < m) {
//		for (int i = index2; i < m; i++) {
//			v.push_back(v2[i]);
//		}
//	}
//	if (v.size() % 2 == 0) {
//		cout << v[v.size() / 2 - 1];
//	}
//	else {
//		cout << v[v.size() / 2];
//	}
//	return 0;
//}