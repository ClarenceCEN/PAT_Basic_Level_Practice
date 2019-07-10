// 1021.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	int counts[10] = { 0 };
	/*int counts_1 = 0;
	int counts_2 = 0;
	int counts_3 = 0;
	int counts_4 = 0;
	int counts_5 = 0;
	int counts_6 = 0;
	int counts_7 = 0;
	int counts_8 = 0;
	int counts_9 = 0;
	int counts_0 = 0;*/
	string n; cin >> n;
	int n_digits = n.size();
	for (int i = 0; i < n_digits; i++) {
		int c_n = static_cast<int>(n[i]) - 48;
		switch (c_n)
		{
		case 1:counts[1]++; break;
		case 2:counts[2]++; break;
		case 3:counts[3]++; break;
		case 4:counts[4]++; break;
		case 5:counts[5]++; break;
		case 6:counts[6]++; break;
		case 7:counts[7]++; break;
		case 8:counts[8]++; break;
		case 9:counts[9]++; break;
		case 0:counts[0]++; break;
		default:
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (counts[i] != 0) {
			cout << i << ":" << counts[i] << endl;
		}
	}
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
