//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n, num = 0;
//	string input;
//	double result = 0.0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		bool realNum = true;
//		int dot = input.find_first_of('.');
//		if (input[0] != '-' && !(input[0] >= '0' && input[0] <= '9')) {
//			realNum = false;
//		}
//		else if (input.find_first_of('.') != input.find_last_of('.')) {
//			realNum = false;
//		}
//		else if (dot != string::npos && input.substr(dot + 1).length() > 2) {
//			realNum = false;
//		}
//		else {
//			double temp = stof(input);
//			if (temp < -1000 || temp>1000) {
//				realNum = false;
//			}
//			else {
//				num++;
//				result += stof(input);
//			}
//		}
//		if (!realNum) {
//			printf("ERROR: %s is not a legal number\n", input.c_str());
//		}
//	}
//	if (num ==1) {
//		printf("The average of %d number is %.2f", num, result * 1.0 / num);
//	}
//	else if (num > 1) {
//		printf("The average of %d numbers is %.2f", num, result * 1.0 / num);
//	}
//	else {
//		printf("The average of 0 numbers is Undefined");
//	}
//
//	return 0;
//}