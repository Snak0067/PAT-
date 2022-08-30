#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

struct node
{
	string id, fid = "-1", mid = "-1";
	int index, childNum = 0, houseNum = 0, area = 0;
	node() {}
	node(string ii, int xx) { id = ii, index = xx; }
	vector<string>childs;
};
struct output
{
	string minName;
	int num;
	double avgHouseNum, avgArea;
};
vector<output>families;
bool visit[2005];
unordered_map<int, string>indexMap;
unordered_map<string, int>idMap;
unordered_map<string, node>people;
string minName;
int familyNum = 0, estateNum, houseArea;
void dfs(node nod) {
	visit[idMap[nod.id]] = true;
	if (nod.id < minName)minName = nod.id;
	familyNum += 1;
	estateNum += nod.houseNum;
	houseArea += nod.area;
	if (nod.fid != "-1" && visit[idMap[nod.fid]] == false)dfs(people[nod.fid]);
	if (nod.mid != "-1" && visit[idMap[nod.mid]] == false)dfs(people[nod.mid]);
	for (int i = 0; i < nod.childs.size(); i++)
	{
		if (visit[idMap[nod.childs[i]]] == false)dfs(people[nod.childs[i]]);
	}
}
int connect[2005][2005];
int main() {
	int n, childNum, index = 0;
	string cid, id, fid, mid;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> id >> fid >> mid;
		node tempNode, mNode, fNode, childNode;
		//对当前节点进行处理
		if (idMap.find(id) == idMap.end()) {
			idMap[id] = index;
			indexMap[index] = id;
			tempNode = node(id, index);
			index++;
		}
		else {
			tempNode = people[id];
		}
		tempNode.fid = fid;
		tempNode.mid = mid;
		scanf_s("%d", &childNum);
		for (int u = 0; u < childNum; u++)
		{
			cin >> cid;
			if (idMap.find(cid) == idMap.end()) {
				idMap[cid] = index;
				indexMap[index] = cid;
				childNode = node(cid, index);
				people[cid] = childNode;
				index++;
			}
			tempNode.childs.push_back(cid);
		}
		scanf_s("%d %d", &tempNode.houseNum, &tempNode.area);
		people[id] = tempNode;
		//对其母节点进行处理
		if (mid != "-1") {
			if (idMap.find(mid) == idMap.end()) {
				idMap[mid] = index;
				indexMap[index] = mid;
				mNode = node(mid, index);
				index++;
			}
			else {
				mNode = people[mid];
			}
			mNode.childs.push_back(id);
			people[mid] = mNode;
		}

		//对其父节点进行处理
		if (fid != "-1") {
			if (idMap.find(fid) == idMap.end()) {
				idMap[fid] = index;
				indexMap[index] = fid;
				fNode = node(fid, index);
				index++;
			}
			else {
				fNode = people[fid];
			}
			fNode.childs.push_back(id);
			people[fid] = fNode;
		}

	}
	for (int i = 0; i < index; i++)
	{
		if (visit[i] == false) {
			minName = indexMap[i];
			dfs(people[minName]);
			output outp;
			outp.minName = minName;
			outp.num = familyNum;
			outp.avgHouseNum = estateNum * 1.0 / familyNum;
			outp.avgArea = houseArea * 1.0 / familyNum;
			families.push_back(outp);
			minName = "";
			familyNum = 0, estateNum = 0, houseArea = 0;
		}

	}
	return 0;
}