// 1004.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


void mySwap(int& a, int& b) {
	int temp = a;
	a = b; b = temp;
}

bool bubble(vector<int>& nums, int lo, int hi) {
	bool sorted = true;
	while (++lo < hi) {
		if (nums[lo-1]> nums[lo]) {
			sorted = false;
			mySwap(nums[lo - 1], nums[lo]);
		}
	}
	return sorted;
}

void BubbleSort(vector<int>& nums, int lo, int hi) {
	while (!bubble(nums,lo, hi--));
}



int main()
{
	int n; cin >> n;
	vector <string> Name;
	vector <string> ID;
	vector <int> Score;

	for (int i = 0; i < n; i++) {
		string name;
		string id;
		int score;
		cin >> name >> id >> score;
		Name.push_back(name);
		ID.push_back(id);
		Score.push_back(score);
	}

	vector<int>origin_Score = Score;
	BubbleSort(Score, 0, Score.size());
	int max_score = Score[Score.size() - 1];
	int min_score = Score[0];
	int max_i = 0;
	int min_i = 0;

	for (int i = 0; i < n; i++) {
		if (origin_Score[i] == max_score) {
			max_i = i;
			continue;
		}
		if (origin_Score[i] == min_score) {
			min_i = i;
			continue;
		}

	}
	string max_name = Name[max_i];
	string min_name = Name[min_i];
	string max_id = ID[max_i];
	string min_id = ID[min_i];

	cout << max_name << " " << max_id << endl;
	cout << min_name << " " << min_id << endl;
	return 0;
}	

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
