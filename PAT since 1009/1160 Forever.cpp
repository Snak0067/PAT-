//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//
//struct node {
//	int n, a;
//};
//bool cmp(node n1, node n2) {
//	if (n1.n != n2.n)return n1.n < n2.n;
//	return n1.a < n2.a;
//}
//bool prime(int n) {
//	if (n <= 1)return false;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)return false;
//	}
//	return true;
//}
//int gcd(int a, int b) {
//	if (a % b == 0)return b;
//	if (b % a == 0)return a;
//	int num = 1, f = 2;
//	while (a != 1 && b != 1 && f < min(a, b)) {
//		if (a % f == 0 && b % f == 0) {
//			a /= f;
//			b /= f;
//			num *= f;
//		}
//		else {
//			f++;
//		}
//	}
//	return num;
//}
//int main() {
//	int n, k, m, tempm;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> k >> m;
//		if (k * 9 < m) {
//			cout << "Case " << i << "\nNo Solution\n";
//			continue;
//		}
//		vector<node>v;
//		int temp = pow(10, k - 2);
//		for (int i = temp / 10; i < temp; i++)
//		{
//			string a = to_string(i), b = to_string(i + 1);
//			int c = 18, d = 0;
//			for (char ch : a)c += ch - '0';
//			for (char ch : b)d += ch - '0';
//			if (c != m)continue;
//			int gcdd = gcd(c, d);
//			if (gcdd > 2 && prime(gcdd)) {
//				v.push_back(node({ d,i }));
//			}
//		}
//		sort(v.begin(), v.end(), cmp);
//		printf("Case %d\n", i);
//		if (v.empty()) cout << "No Solution\n";
//		for (node nod : v)printf("%d %d99\n", nod.n, nod.a);
//	}
//	return 0;
//}