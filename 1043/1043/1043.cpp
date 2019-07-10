// 1043.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int len = n.size();
	vector <int> patest(6,0);
	string PATest = "PATest";
	// P = 0, A = 1, T = 2, e = 3, s = 4, t = 5

	for (int i = 0; i < len; i++) {
		char c_char = n[i];
		switch (c_char)
		{
		case 'P':patest[0]++; break;
		case 'A':patest[1]++; break;
		case 'T':patest[2]++; break;
		case 'e':patest[3]++; break;
		case 's':patest[4]++; break;
		case 't':patest[5]++; break;
		default:
			break;
		}
	}

	auto max_p = max_element(patest.begin(), patest.end());
	int max_n = *max_p;

	for (int i = 0; i < max_n; i++) {
		for (int j = 0; j < 6; j++) {
			if (patest[j]) {
				cout << PATest[j];
				patest[j]--;
			}
		}
	}

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
