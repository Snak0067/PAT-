//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class node {
//public:
//	int value;
//	node* leftNode, * rightNode;
//	node(int v) {
//		value = v;
//		leftNode = NULL;
//		rightNode = NULL;
//	}
//};
//
//node* root;
//vector<int> v;
//vector<int>postV;
//
//int findlowNumber(int startIndex, int endIndex, int standard) {
//	while (startIndex < endIndex && v[startIndex] >= standard) { startIndex++; }
//	if (startIndex == endIndex)return -1;
//	return startIndex;
//}
//int findBigNumber(int startIndex, int endIndex, int standard) {
//	while (startIndex < endIndex && v[startIndex] < standard) { startIndex++; }
//	if (startIndex == endIndex)return -1;
//	return startIndex;
//}
//
//void divideAndConquer(int left, int right, node* head, bool direction) {
//	if (head == NULL || left == right)return;
//	int nextRight;
//	node* leftnode = NULL, * rightNode = NULL;
//	if (direction) {//¾µÏñËÑË÷¶þ²æÊ÷ ×ó´óÓÖÐ¡
//		if (left < right) {
//			if (v[left] >= head->value) {
//				leftnode = new node(v[left]);
//				nextRight = findlowNumber(left, right, head->value);
//				if (nextRight != -1) {
//					rightNode = new node(v[nextRight]);
//				}
//
//			}
//			else {
//				rightNode = new node(v[left]);
//			}
//		}
//	}
//	else {
//		if (left < right) {
//			if (v[left] < head->value) {
//				leftnode = new node(v[left]);
//				nextRight = findBigNumber(left, right, head->value);
//				if (nextRight != -1) {
//					rightNode = new node(v[nextRight]);
//				}
//			}
//			else {
//				rightNode = new node(v[left]);
//			}
//		}
//	}
//	head->leftNode = leftnode;
//	head->rightNode = rightNode;
//	divideAndConquer(left + 1, nextRight, leftnode, direction);
//	divideAndConquer(nextRight + 1, right, rightNode, direction);
//}
//void postTraverse(node* head) {
//	if (head == NULL)return;
//	else {
//		postTraverse(head->leftNode);
//		postTraverse(head->rightNode);
//		postV.push_back(head->value);
//	}
//}
//
//
//int main() {
//	int k, number;
//	cin >> k;
//	for (int i = 0; i < k; i++) {
//		cin >> number;
//		v.push_back(number);
//	}
//	if (v.size() == 0) { cout << "NO"; return 0; }
//	else if (v.size() == 1) { cout << "YES" << endl << v[0]; return 0; }
//	bool direction;
//	v[1] >= v[0] ? direction = true : direction = false;
//	if (direction) {//¾µÏñËÑË÷¶þ²æÊ÷
//		int firstLowIndex = findlowNumber(1, v.size(), v[0]);
//		if (firstLowIndex != -1 && (findBigNumber(firstLowIndex + 1, v.size(), v[0]) != -1)) {
//			cout << "NO"; return 0;
//		}
//	}
//	else {
//		int firstBigNumber = findBigNumber(1, v.size(), v[0]);
//		if (firstBigNumber != -1 && (findlowNumber(firstBigNumber + 1, v.size(), v[0]) != -1)) {
//			cout << "NO"; return 0;
//		}
//	}
//	root = new node(v[0]);
//	divideAndConquer(1, v.size(), root, direction);
//	postTraverse(root);
//	cout << "YES" << endl;
//	for (int i = 0; i < postV.size() - 1; i++) {
//		cout << postV[i] << " ";
//	}
//	cout << postV.back();
//	return 0;
//}
//
////#include<iostream>
////#include<string>
////#include<map>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////
////bool isMirror;
////vector<int>pre, post;
////
////void getpost(int head, int tail) {
////	if (head > tail)return;
////	int left = head + 1, right = tail;
////	if (isMirror) {
////		while (left <= tail && pre[left] >= pre[head])left++;
////		while (right > head && pre[right] < pre[head])right--;
////	}
////	else {
////		while (left <= tail && pre[left] < pre[head])left++;
////		while (right > head && pre[right] >= pre[head])right--;
////	}
////	if (left - right != 1)return;
////	getpost(head + 1, right);
////	getpost(left, tail);
////	post.push_back(pre[head]);
////}
////
////int main() {
////	int n;
////	scanf_s("%d", &n);
////	pre.resize(n);
////	for (int i = 0; i < n; i++)
////		scanf_s("%d", &pre[i]);
////	isMirror = false;
////	getpost(0, n - 1);
////	if (post.size() != n) {
////		isMirror = true;
////		post.clear();
////		getpost(0, n - 1);
////	}
////	if (post.size() == n) {
////		printf("YES\n%d", post[0]);
////		for (int i = 1; i < n; i++)
////			printf(" %d", post[i]);
////	}
////	else {
////		printf("NO");
////	}
////return 0;
////}