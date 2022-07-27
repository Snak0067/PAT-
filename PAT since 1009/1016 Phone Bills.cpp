//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<map>
//#include <iomanip>
////15分
//using namespace std;
//const int maxn = 1000, d = 60;
//int numOfBill, toll[25] = { 0 }, month_d = d * 24 * 30, date_d = d * 24, hour_d = d;
//string billLine;
//string formatInt(int n);
//struct Bill {
//	char name[21];
//	int month, date, hour, minute;
//	bool lineState;
//	Bill(string Name, int m, int d, int h, int t, bool state) {
//		strcpy_s(name, Name.c_str());
//		month = m;
//		date = d;
//		hour = h;
//		minute = t;
//		lineState = state;
//	}
//	void timeOutput() {
//		cout << formatInt(date) << ":" << formatInt(hour) << ":" << formatInt(minute) << " ";
//	}
//	void baseOutput() {
//		cout << name << " " << formatInt(month) << endl;
//	}
//};
//
//map<string, vector<Bill>> handleBills();
//bool billCompare(Bill bill1, Bill bill2);
//int distance(Bill b1, Bill b2);
//double countOneTimeCost(Bill b1, Bill b2);
//Bill handleBill(vector<string>bill);
//void calculateBill();
//
//map<string, vector<Bill>> billMap;
//vector<string> bills;
//
//int main() {
//	for (int i = 0; i < 24; i++) {
//		scanf_s("%d", &toll[i]);
//	}
//	scanf_s("%d", &numOfBill);
//	for (int i = 0; i <= numOfBill; i++) {
//		getline(cin, billLine);
//		if (billLine != "")bills.push_back(billLine);
//	}
//	cout << setiosflags(ios::fixed) << setprecision(2);
//	billMap = handleBills();
//	calculateBill();
//
//	return 0;
//}
//
//
//string formatInt(int n) {
//	return n > 9 ? to_string(n) : "0" + to_string(n);
//}
//bool billCompare(Bill bill1, Bill bill2) {
//	return bill1.month * month_d + bill1.date * date_d + bill1.hour * hour_d + bill1.minute < bill2.month* month_d + bill2.date * date_d + bill2.hour * hour_d + bill2.minute;
//}
//int distance(Bill b1, Bill b2) {
//	return (b2.date - b1.date) * date_d + (b2.hour - b1.hour) * hour_d + b2.minute - b1.minute;
//}
//double countOneTimeCost(Bill b1, Bill b2) {
//	double cost = 0.0;
//	if (b1.date == b2.date) {
//		if (b1.hour == b2.hour) {
//			cost = (b2.minute - b1.minute) * toll[b1.hour] * 1.0 / 100;
//		}
//		else {
//			int index = b1.hour + 1;
//			cost += (60 - b1.minute) * toll[b1.hour] * 1.0 / 100;
//			while (index < b2.hour) {
//				cost += 60 * toll[index++] * 1.0 / 100;
//			}
//			cost += b2.minute * toll[b2.hour] * 1.0 / 100;
//		}
//	}
//	else {
//		cost += countOneTimeCost(b1, Bill(b1.name, b1.month, b1.date, 24, 0, 0));
//		for (int i = b1.date + 1; i < b2.date; i++) {
//			for (int i = 0; i < 24; i++) {
//				cost += 60 * toll[i] * 1.0 / 100;
//			}
//		}
//		cost += countOneTimeCost(Bill(b2.name, b2.month, b2.date, 0, 0, 0), b2);
//		return cost;
//	}
//
//
//	return cost;
//}
////处理多行票据，依据人的姓名-人的账单vector来结构化处理
//map<string, vector<Bill>> handleBills() {
//	map<string, vector<Bill>> billMap;
//	vector<string> v_s_bill;
//	int len = bills.size();
//	for (int i = 0; i < len; i++) {
//		string space = " ", bill = bills.front();
//		bills.erase(bills.begin());
//		int pos = 0;
//		while ((pos = bill.find(space)) != string::npos) {
//			v_s_bill.push_back(bill.substr(0, pos));
//			bill.erase(0, pos + space.length());
//		}
//		v_s_bill.push_back(bill);
//		Bill struct_b = handleBill(v_s_bill);
//		map<string, vector<Bill>>::iterator it = billMap.find(struct_b.name);
//		if (it == billMap.end()) {
//			vector<Bill> v_bill;
//			v_bill.push_back(struct_b);
//			billMap[struct_b.name] = v_bill;
//		}
//		else {
//			billMap[struct_b.name].push_back(struct_b);
//		}
//		v_s_bill.clear();
//	}
//	map<string, vector<Bill>>::iterator it = billMap.begin();
//	while (it != billMap.end()) {
//		sort(it->second.begin(), it->second.end(), billCompare);
//		it++;
//	}
//	return billMap;
//}
////处理单行票据，形成Bill结构
//Bill handleBill(vector<string>bill) {
//	string name = bill[0];
//	bool state = bill[2].compare("on-line") == 0 ? true : false;
//	string semicolon = ":", time = bill[1];
//	int pos = 0;
//	vector<string> v_time;
//	while ((pos = time.find(semicolon)) != string::npos) {
//		v_time.push_back(time.substr(0, pos));
//		time.erase(0, pos + semicolon.length());
//	}
//	v_time.push_back(time);
//	int month = stoi(v_time[0]), date = stoi(v_time[1]), hour = stoi(v_time[2]), minute = stoi(v_time[3]);
//	return Bill(name, month, date, hour, minute, state);
//}
////统计、格式化输出电话费账单
//void calculateBill() {
//	for (map<string, vector<Bill>>::iterator it = billMap.begin(); it != billMap.end(); it++) {
//		vector<Bill> currentBill = it->second;
//		int left = 0;
//		while (left < currentBill.size() - 1) {
//			double monthCost = 0.0;
//			while (left < currentBill.size() - 1 && (currentBill[left].lineState != 1 || currentBill[left + 1].lineState != 0))left++;
//			//这个月确实有长途电话的on-off对
//			if (left < currentBill.size() - 1 && (currentBill[left].month == currentBill[left + 1].month)) {
//				currentBill[left].baseOutput();
//				while (left < currentBill.size() - 1 && (currentBill[left].month == currentBill[left + 1].month)) {
//					if (currentBill[left].lineState == 1 || currentBill[left + 1].lineState == 0) {
//						currentBill[left].timeOutput();	
//						currentBill[left + 1].timeOutput();
//						cout << distance(currentBill[left], currentBill[left + 1]) << " ";
//						cout << "$" << countOneTimeCost(currentBill[left], currentBill[left + 1]) << endl;
//						monthCost += countOneTimeCost(currentBill[left], currentBill[left + 1]);
//					}
//					left++;
//				}
//				cout << "Total amount: $" << monthCost << endl;
//			}
//		}
//	}
//}
