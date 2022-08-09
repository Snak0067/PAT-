//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct mooncake
//{
//	double amount, prices, singlePrice;
//};
//bool cmp(mooncake m1, mooncake m2) {
//	return m1.singlePrice > m2.singlePrice;
//}
//vector<mooncake>v;
//int main() {
//	int n;
//	double tons;
//	scanf_s("%d%lf", &n, &tons);
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lf", &v[i].amount);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lf", &v[i].prices);
//		v[i].singlePrice = v[i].prices / v[i].amount;
//	}
//	sort(v.begin(), v.end(), cmp);
//	double total = 0.0;
//	int index = 0;
//	while (tons > 0 && index < v.size()) {
//		if (tons > v[index].amount) {
//			total += v[index].prices;
//			tons -= v[index].amount;
//			index++;
//		}
//		else {
//			total += v[index].singlePrice * tons;
//			tons = 0;
//		}
//
//	}
//	printf("%.2f", total);
//	return 0;
//}