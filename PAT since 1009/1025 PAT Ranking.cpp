//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct ranklist {
//	string id;
//	int num, type, localRank, totalRank;
//	bool operator >(const ranklist& r)const {
//		if (num != r.num)return num > r.num;
//		return id < r.id;
//	}
//};
//
//vector<vector<ranklist> >list;
//vector<ranklist>totalList;
//int main() {
//	int n, m;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> m;
//		vector<ranklist> v;
//		for (int j = 0; j < m; j++) {
//			ranklist r;
//			cin >> r.id >> r.num;
//			r.type = i + 1;
//			v.push_back(r);
//		}
//		sort(v.begin(), v.end(), greater<ranklist>());
//		list.push_back(v);
//	}
//	for (int i = 0; i < list.size(); i++) {
//		vector<ranklist> localList = list[i];
//		localList[0].localRank = 1;
//		totalList.push_back(localList[0]);
//		for (int j = 1; j < localList.size(); j++) {
//			if (localList[j].num == localList[j - 1].num)localList[j].localRank = localList[j - 1].localRank;
//			else {
//				localList[j].localRank = j + 1;
//			}
//			totalList.push_back(localList[j]);
//		}
//	}
//	sort(totalList.begin(), totalList.end(), greater<ranklist>());
//	totalList[0].totalRank = 1;
//	for (int i = 1; i < totalList.size(); i++) {
//		if (totalList[i].num == totalList[i - 1].num)totalList[i].totalRank = totalList[i - 1].totalRank;
//		else {
//			totalList[i].totalRank = i + 1;
//		}
//	}
//	cout << totalList.size() << endl;
//	for (int i = 0; i < totalList.size(); i++) {
//		cout << totalList[i].id << " " << totalList[i].totalRank << " " << totalList[i].type << " " << totalList[i].localRank << endl;
//	}
//	return 0;
//}