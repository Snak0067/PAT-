//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string a, b, c, d;
//vector<char>bigA;
//vector<char>bigB;
//vector<char>digitA;
//vector<char>digitB;
//
//int main() {
//	cin >> a >> b >> c >> d;
//	int index1 = 0, index2 = 0;
//	bool matchWeek = false, matchweek = false;
//	while (!(a[index1] == b[index1] && a[index1] <= 'G' && a[index1] >= 'A')) {
//		index1++;
//	}
//	switch (a[index1])
//	{
//	case 'A':
//		cout << "MON "; break;
//	case 'B':
//		cout << "TUE "; break;
//	case 'C':
//		cout << "WED "; break;
//	case 'D':
//		cout << "THU "; break;
//	case 'E':
//		cout << "FRI "; break;
//	case 'F':
//		cout << "SAT "; break;
//	case 'G':
//		cout << "SUN "; break;
//	default:
//		break;
//	}
//	index1++;
//	while (index1 < a.length()) {
//		if (a[index1] == b[index1] && (a[index1] <= 'N' && a[index1] >= 'A' || a[index1] <= '9' && a[index1] >= '0')) {
//			break;
//		}
//		index1++;
//	}
//	if (a[index1] <= 'N' && a[index1] >= 'A') {
//		int h = a[index1] - 'A' + 10;
//		printf_s("%d:", h);
//	}
//	else if (a[index1] <= '9' && a[index1] >= '0') {
//		printf_s("0%c:", a[index1]);
//	}
//	int ina = 0;
//	while (ina < c.size()) {
//		if (c[ina] == d[ina]) {
//			if (c[ina] >= 'a' && c[ina] <= 'z')break;
//			if (c[ina] >= 'A' && c[ina] <= 'Z')break;
//		}
//		ina++;
//	}
//	string mi = (ina < 9) ? "0" + to_string(ina) : to_string(ina);
//	printf_s("%s", mi.c_str());
//
//	return 0;
//}