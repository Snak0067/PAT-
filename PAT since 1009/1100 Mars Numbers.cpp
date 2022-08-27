//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string digit[12] = { "jan","feb","mar" , "apr", "may","jun" , "jly","aug" ,"sep" ,"oct" , "nov", "dec" };
//string highDigit[12] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//map<string, int>digitMap;
//map<string, int>highMap;
//
//int main() {
//	int n, number, high, low;
//	string input;
//	cin >> n;
//	digitMap["tret"] = 0;
//	digitMap["jan"] = 1;
//	digitMap["feb"] = 2;
//	digitMap["mar"] = 3;
//	digitMap["apr"] = 4;
//	digitMap["may"] = 5;
//	digitMap["jun"] = 6;
//	digitMap["jly"] = 7;
//	digitMap["aug"] = 8;
//	digitMap["sep"] = 9;
//	digitMap["oct"] = 10;
//	digitMap["nov"] = 11;
//	digitMap["dec"] = 12;
//	highMap["tam"] = 1;
//	highMap["hel"] = 2;
//	highMap["maa"] = 3;
//	highMap["huh"] = 4;
//	highMap["tou"] = 5;
//	highMap["kes"] = 6;
//	highMap["hei"] = 7;
//	highMap["elo"] = 8;
//	highMap["syy"] = 9;
//	highMap["lok"] = 10;
//	highMap["mer"] = 11;
//	highMap["jou"] = 12;
//	getline(cin, input);
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, input);
//		if (input[0] >= '0' && input[0] <= '9') {
//			number = stoi(input);
//			high = number / 13;
//			low = number % 13;
//			if (high == 0 && low == 0) {
//				printf("tret\n");
//			}
//			else if (high == 0 && low != 0) {
//				printf("%s\n", digit[low - 1].c_str());
//			}
//			else if (high != 0 && low == 0) {
//				printf("%s\n", highDigit[high - 1].c_str());
//			}
//			else {
//				printf("%s %s\n", highDigit[high - 1].c_str(), digit[low - 1].c_str());
//			}
//		}
//		else {
//			int space = input.find(' ');
//			if (space == string::npos) {
//				if (digitMap.find(input) != digitMap.end()) {
//					printf("%d\n", digitMap[input]);
//				}
//				else {
//					printf("%d\n", highMap[input] * 13);
//				}
//
//			}
//			else {
//				string hi = input.substr(0, space);
//				string lo = input.substr(space + 1);
//				number = highMap[hi] * 13 + digitMap[lo];
//				printf("%d\n", number);
//			}
//		}
//	}
//
//	return 0;
//}