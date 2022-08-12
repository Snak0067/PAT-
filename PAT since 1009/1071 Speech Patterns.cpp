//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string text;
//map<string, int>mmp;
//int main() {
//	getline(cin, text);
//	transform(text.begin(), text.end(), text.begin(), ::tolower);
//	bool matchOver = false;
//	int index = 0, max = 0;
//	while (index < text.size())
//	{
//		string temp = "";
//		while ((text[index] >= 'a' && text[index] <= 'z')
//			|| (text[index] >= '0' && text[index] <= '9')) {
//			temp.push_back(text[index++]);
//		}
//		index++;
//		if (temp != "")mmp[temp]++;
//	}
//	map<string, int>::iterator it = mmp.begin();
//
//	while (it != mmp.end()) {
//		if (it->second > max) {
//			max = it->second;
//			text = it->first;
//		}
//		it++;
//	}
//	printf("%s %d", text.c_str(), max);
//
//	return 0;
//}