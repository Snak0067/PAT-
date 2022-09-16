//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct node
//{
//	string id, date;
//};
//unordered_map<string, node>alumi, guest;
//vector<node> come, guestv;
//bool cmp(node n1, node n2) {
//	return n1.date < n2.date;
//}
//int main() {
//	int n, m;
//	cin >> n;
//	string name;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> name;
//		alumi[name] = node({ name,name.substr(6,8) });
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> name;
//		guest[name] = node({ name,name.substr(6,8) });
//		guestv.push_back(node({ name,name.substr(6,8) }));
//	}
//	auto it = alumi.begin();
//	while (it != alumi.end()) {
//		if (guest.find(it->first) != guest.end()) {
//			come.push_back(it->second);
//		}
//		it++;
//	}
//	if (come.size() > 0) {
//		sort(come.begin(), come.end(), cmp);
//		printf("%d\n%s", come.size(), come[0].id.c_str());
//	}
//	else {
//		sort(guestv.begin(), guestv.end(), cmp);
//		printf("%d\n%s", 0, guestv[0].id.c_str());
//	}
//	return 0;
//}