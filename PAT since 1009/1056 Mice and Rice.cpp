//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct mice {
//	int id, weight, rank;
//	bool jinji = false;
//};
//bool cmp(mice m1, mice m2) {
//	return m1.id < m2.id;
//}
//int NP, NG, index;
//vector<mice>v;
//vector<mice>q[1000];
//vector<mice>r;
//int main() {
//	scanf_s("%d%d", &NP, &NG);
//	v.resize(NP);
//	for (int i = 0; i < NP; i++) {
//		scanf_s("%d", &v[i].weight);
//		v[i].id = i;
//	}
//	for (int i = 0; i < NP; i++) {
//		scanf_s("%d", &index);
//		q[0].push_back(v[index]);
//	}
//	int round = 0;
//	while (q[round].size() > 1) {
//		int groupNum = ((q[round].size() % NG == 0) ? q[round].size() / NG : q[round].size() / NG + 1);
//		int indexMax = 0, groupMax = 0;
//		for (int i = 0; i < q[round].size(); i++) {
//			if (q[round][i].weight > groupMax) {
//				groupMax = q[round][i].weight;
//				indexMax = i;
//			}
//			if (i % NG == NG - 1) {
//				q[round + 1].push_back(q[round][indexMax]);
//				q[round][indexMax].jinji = true;
//				groupMax = 0;
//			}
//		}
//		if (q[round].size() % NG != 0) {
//			q[round + 1].push_back(q[round][indexMax]);
//			q[round][indexMax].jinji = true;
//		}
//		for (int i = 0; i < q[round].size(); i++) {
//			if (q[round][i].jinji == false) {
//				q[round][i].rank = groupNum + 1;
//				r.push_back(q[round][i]);
//			}
//		}
//		round++;
//	}
//	q[round][0].rank = 1;
//	r.push_back(q[round][0]);
//	sort(r.begin(), r.end(), cmp);
//	printf("%d", r[0].rank);
//	for (int i = 1; i < r.size(); i++) {
//		printf(" %d", r[i].rank);
//	}
//	return 0;
//}