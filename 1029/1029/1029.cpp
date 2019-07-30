// 1029.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>jianpan(37, 0); //0-25:A-Z 26-35:0-9 36:_
	string input; cin >> input;
	string output; cin >> output;
	vector<string> broken;
	for (int i = 0; i < input.size(); i++) {
		char temp = input[i];
		if (output.find(temp) == string::npos) {
			if (temp<='z' && temp>='a') {
				temp = temp + 'A' - 'a';
			}
			if (isdigit(temp)) {
				int ind = temp - '0' + 26;
				if (jianpan[ind] == 0) {
					cout << temp;
					jianpan[ind] = 1;
				}

			}
			else if (isalpha(temp)) {
				int ind = temp - 'A';
				if (jianpan[ind] == 0) {
					cout << temp;
					jianpan[ind] = 1;
				}

			}
			else {
				if (jianpan[36] == 0) {
					cout << temp;
					jianpan[36] = 1;
				}

			}

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
