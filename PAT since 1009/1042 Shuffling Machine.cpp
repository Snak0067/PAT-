//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//const int K = 25;
//vector<vector<string>> cards;
//vector<int>order(54);
//map<int, string> cardMapping;
//
//void init() {
//	cardMapping[0] = "S";
//	cardMapping[1] = "H";
//	cardMapping[2] = "C";
//	cardMapping[3] = "D";
//	cardMapping[4] = "J";
//	vector<string>card(54);
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 13; j++) {
//			card[i * 13 + j] = cardMapping[i] + to_string(j + 1);
//		}
//	}
//	card[52] = "J1";
//	card[53] = "J2";
//	cards.push_back(card);
//}
//
//int main() {
//	int repeatTimes, times = 0;
//	cin >> repeatTimes;
//	init();
//	for (int i = 0; i < 54; i++) {
//		scanf_s("%d", &order[i]);
//	}
//	for (int i = 0; i < repeatTimes; i++) {
//		vector<string>card(54);
//		for (int i = 0; i < 54; i++) {
//			card[order[i] - 1] = cards[times][i];
//		}
//		cards.push_back(card);
//		times++;
//	}
//	for (int i = 0; i < 53; i++) {
//		cout << cards[times][i] << " ";
//	}
//	cout << cards[times][53];
//	return 0;
//}