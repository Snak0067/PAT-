//#include<iostream>
//#include<string>
//#include<unordered_map>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//unordered_map<char, int>mmap;
//unordered_map<char, int>black;
//vector<char>v;
//int main() {
//	int n, num = 1;
//	string s, ans;
//	scanf_s("%d", &n);
//	cin >> s;
//	bool match = false;
//	char temp;
//	for (int i = 0; i < s.length(); i++)
//	{
//		//��������ֱ�ӹ�
//		if (!match && black.find(s[i]) != black.end()) {
//			match = false;
//		}
//		//Ŀǰ�Ƿ����ƥ�价��
//		else if (!match) {//û�н��룬��ǰcharΪƥ�����
//			match = true;
//			temp = s[i];
//		}
//		else if (s[i] == temp) {//����ƥ��
//			num++;
//			if (num == n) {//��ǰƥ���������repeat��Ҫ��
//				if (mmap.find(temp) == mmap.end()) {
//					mmap[temp] = 1;
//					v.push_back(temp);
//				}
//				match = false;
//				num = 1;
//			}
//		}
//		else if (s[i] != temp) {
//			num = 1;
//			black[temp] = 1;
//			if (mmap.find(temp) != mmap.end())//�Ƴ�mmap�������char
//			{
//				mmap.erase(mmap.find(temp));
//			}
//			if (black.find(s[i]) == black.end()) {//�жϵ�ǰ��char�Ƿ������������
//				temp = s[i];
//			}
//			else {
//				match = false;//���temp��s[i]���ں������У���ƥ��Ϊ��һ��
//			}
//
//		}
//	}
//	if (num != 1 || match == true) {
//		black[temp] = 1;
//		if (mmap.find(temp) != mmap.end())//�Ƴ�mmap�������char
//		{
//			mmap.erase(mmap.find(temp));
//		}
//	}
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (black.find(s[i]) != black.end()) {
//			ans.push_back(s[i]);
//		}
//		else {
//			ans.push_back(s[i]);
//			i += n - 1;
//		}
//	}
//	for (char ch : v) {
//		if (mmap.find(ch) != mmap.end()) {
//			printf("%c", ch);
//		}
//	}
//	printf("\n%s", ans.c_str());
//	return 0;
//}