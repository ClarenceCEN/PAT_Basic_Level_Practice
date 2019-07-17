// 1047.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
using namespace std;


int main()
{
	int n; cin >> n;
	vector<int> scores(1001, 0);
	for (int i = 0; i < n; i++) {
		string id; cin >> id;
		int member_id_index = id.find('-');
		string team_id_s = id.substr(0, member_id_index);
		int team_id = atoi(team_id_s.c_str());

		int score; cin >> score;
		scores[team_id] += score;

	}

	auto max_score_p = max_element(scores.begin(), scores.end());
	int max_score = *max_score_p;

	auto max_team = find(scores.begin(), scores.end(), max_score);
	int max_team_index = distance(scores.begin(), max_team);

	printf("%d %d", max_team_index, scores[max_team_index]);

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
