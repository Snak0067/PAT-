//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct people {
//	string name;
//	int age, money;
//};
//vector<people>v;
//bool cmp(people p1, people p2) {
//	if (p1.money != p2.money)return p1.money > p2.money;
//	if (p1.age != p2.age)return p1.age < p2.age;
//	return p1.name < p2.name;
//}
//int main() {
//	int N, K;
//	scanf_s("%d%d", &N, &K);
//	v.resize(N);
//	for (int i = 0; i < N; i++) {
//		cin >> v[i].name;
//		scanf_s("%d %d", &v[i].age, &v[i].money);
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (int j = 0; j < K; j++) {
//		int index = 0, max_ouput, minA, maxA;
//		bool match = false;
//		scanf_s("%d %d %d", &max_ouput, &minA, &maxA);
//		printf("Case #%d:\n", (j + 1));
//		for (int i = 0; i < N && index < max_ouput; i++) {
//			if (v[i].age <= maxA && v[i].age >= minA) {
//				match = true;
//				printf("%s %d %d\n", v[i].name.c_str(), v[i].age, v[i].money);
//				index++;
//			}
//		}
//		if (!match)printf("None\n");
//	}
//
//	return 0;
//}