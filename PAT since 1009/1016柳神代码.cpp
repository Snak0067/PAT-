//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct node {
//	string name;
//	int status, month, date, hour, minute, time;
//};
//bool cmp(node a, node b) {
//	return a.name != b.name ? a.name < b.name : a.time < b.time;
//}
//double billFromZero(node n, int* rate) {
//	double total = rate[n.hour] * n.minute + rate[24] * 60 * n.date;
//	for (int i = 0; i < n.hour; i++)
//		total += rate[i] * 60;
//	return total / 100.0;
//}
//int main() {
//	int rate[25] = { 0 }, n;
//	for (int i = 0; i < 24; i++) {//输入一天中每一个小时区间的一分钟的话费的价格，
//		scanf("%d", &rate[i]);
//		rate[24] += rate[i];//rate[24]作为所有时间段加起来的一分钟的话费的价格
//	}
//	scanf("%d", &n);
//	vector<node>data(n);
//	for (int i = 0; i < n; i++) {
//		cin >> data[i].name;
//		scanf("%d:%d:%d:%d", &data[i].month, &data[i].date, &data[i].hour, &data[i].minute);
//		string temp;
//		cin >> temp;
//		data[i].status = (temp == "on-line") ? 1 : 0;
//		data[i].time = data[i].date * 24 * 60 + data[i].hour * 60 + data[i].minute;//这个月的零点到这个时间所经过的分钟数
//	}
//	sort(data.begin(), data.end(), cmp);
//	map<string, vector<node>>customer;
//	for (int i = 1; i < n; i++) {
//		if (data[i].name == data[i - 1].name && data[i].status == 0 && data[i - 1].status == 1) {
//			customer[data[i - 1].name].push_back(data[i - 1]);
//			customer[data[i].name].push_back(data[i]);
//		}
//	}
//	for (auto it : customer) {
//		vector<node> bill = it.second;
//		cout << it.first;
//		printf(" %02d\n", bill[0].month);
//		double cost = 0.0;
//		for (int i = 1; i < bill.size(); i += 2) {
//			double t = billFromZero(bill[i], rate) - billFromZero(bill[i - 1], rate);
//			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", bill[i - 1].date, bill[i - 1].hour, bill[i - 1].minute, bill[i].date, bill[i].hour, bill[i].minute, bill[i].time - bill[i - 1].time, t);
//			cost += t;
//		}
//		printf("Total amount: $%.2f\n", cost);
//	}
//	return 0;
//}