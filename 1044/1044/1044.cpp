// 1044.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n; cin >> n;
	cin.clear();
	cin.ignore();
	vector<string> geweis{ "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	vector<string> jinweis{"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	while (n--) {
		string i; getline(cin, i);
		if (i[0] >= '0' && i[0] <= '9') {
			int a; a = atoi(i.c_str());
			int c = a / 13;
			int y = a % 13;
			if (c == 0) {
				string gewei = geweis[y];
				cout << gewei << endl;
			}
			else {
				if (y != 0) {
					string gewei = geweis[y];
					string shiwei = jinweis[c];
					cout << shiwei << ' ' << gewei << endl;
				}
				else {
					string shiwei = jinweis[c];
					cout << shiwei << endl;
				}

			}


		}
		else {
			int s_size = i.size();
			int sum = 0;
			string fire1 = "";
			for(int j=0;j<s_size;j=j+4) {
				fire1 = fire1+i[j] + i[j+1] + i[j+2];
				for (int z = 0; z < 13; z++) {
					if (fire1 == jinweis[z])sum += z * 13;
					if (fire1 == geweis[z]) sum += z;
				}
				fire1 = "";
			}
			cout << sum << endl;
			
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
