// 1033.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string broken; cin >> broken;
	string input; cin >> input;
	int flag_C = broken.find('+');
	int find_or_not = 0;

	if (flag_C >= 0) {
		for (int i = 0; i < input.length(); i++) {
			char c = input[i];
			char c_C;
			if ((c >= 'a') & (c <= 'z')) {
				c_C = c - 'a' + 'A';
			}
			else {
				c_C = c;
			}
			int flag = broken.find(c_C);
				if (((c > 'Z') | (c < 'A')) & (flag == -1)) {
					cout << c;
					find_or_not = 1;
			}

		}
	}
	else {
		for (int i = 0; i < input.length(); i++) {
			char c = input[i];
			char c_C;
			if ((c >= 'a') & (c <= 'z')) {
				c_C = c - 'a' + 'A';
			}
			else {
				c_C = c;
			}
			int flag = broken.find(c_C);
			if (flag == -1) {
				cout << c;
				find_or_not = 1;
			}

		}
	}

	if (find_or_not == 0) {
		cout << endl;
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
