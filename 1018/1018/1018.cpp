// 1018.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

string jsb(char jia, char yi) {
	if (jia == yi) {
		return "ping";
	}
	else if (jia == 'B') {
		switch (yi)
		{
		case 'J':return "yi";
		case 'C':return "jia";
		}
	}
	else if (jia == 'J') {
		switch (yi)
		{
		case 'C':return "yi";
		case 'B':return "jia";
		}
	}
	else if (jia == 'C') {
		switch (yi)
		{
		case 'B':return "yi";
		case 'J':return "jia";
		}
	}
}

int main()
{
	int n; cin >> n;
	vector<int> jia_n(3,0);
	vector<int> yi_n(3,0);  // j=0,c=1,b=2
	int jia_win = 0;
	int yi_win = 0;

	for (int i = 0; i < n; i++) {
		char j; cin >> j;
		char y; cin >> y;
		string winner = jsb(j, y);
		if (winner == "jia") {
			jia_win++;
			switch (j)
			{
			case 'J':jia_n[0]++; break;
			case 'C':jia_n[1]++; break;
			case 'B':jia_n[2]++; break;
			}
		}
		else if (winner == "yi") {
			yi_win++;
			switch (y)
			{
			case 'J':yi_n[0]++; break;
			case 'C':yi_n[1]++; break;
			case 'B':yi_n[2]++; break;
			}
		}
	}

	int ping = n - jia_win - yi_win;
	printf("%d %d %d\n", jia_win, ping, yi_win);
	printf("%d %d %d\n", yi_win, ping, jia_win);

	int max_jia = 0; int max_yi = 0; string JCB = "JCB";
	char jia_win_most, yi_win_most;
	for (int i = 0; i < 3; i++) {
		if (jia_n[i] >= max_jia) {
			jia_win_most = JCB[i];
			max_jia = jia_n[i];
		}
		if (yi_n[i] >= max_yi) {
			yi_win_most = JCB[i];
			max_yi = yi_n[i];
		}
	}
	printf("%c %c\n", jia_win_most, yi_win_most);
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
