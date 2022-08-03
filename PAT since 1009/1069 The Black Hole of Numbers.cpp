#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string number;

int main() {
	string number;
	cin >> number;
	do{
		while (number.size() < 4) {
			number = "0" + number;
		}
		string low = number;
		string high = number;
		sort(low.begin(), low.end(), less<>());
		sort(high.begin(), high.end(), greater<>());
		int m = stoi(high.c_str()) - stoi(low.c_str());
		number = to_string(m);
		while (number.size() < 4) {
			number = "0" + number;
		}
		printf("%s - %s = %s\n", high.c_str(), low.c_str(), number.c_str());
	} while (number != "6174" && number != "0000");

	return 0;
}