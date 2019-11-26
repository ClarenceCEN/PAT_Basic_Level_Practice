// 1078.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int main()
{
	char i; cin >> i;
	if (i == 'C') {
		cin.clear();
		cin.ignore();
		string s;
		getline(cin, s);
		int s_len = s.size();
		string c = "";
		int count = 0;
		for (int j = 0; j < s_len; j++) {
			if (j == 0)count++;
			else if(s[j]==s[j-1]) {
				count++;
			}
			else if (s[j] != s[j - 1]) {
				if (count > 1) {
					cout << count << s[j - 1];
				}
				else {
					cout << s[j - 1];
				}
				count = 1;
			}

		}
		if (count > 1) {
			cout << count << s[s_len - 1] << endl;
		}
		else {
			cout << s[s_len - 1] << endl;
		}
	}
	else if (i == 'D') {
		cin.clear();
		cin.ignore();
		string s;
		getline(cin, s);
		int s_len = s.size();
		int flag = 0;
		int d = 0;
		for (int j = 0; j < s_len; j++) {
			if (j == 0 && isalpha(s[j])) {
				cout << s[j];
			}
			else if (isdigit(s[j])) {
				d++;
			}
			else if (isalpha(s[j])||s[j]==' ') {
				if (isalpha(s[j - 1]) || s[j-1] == ' ') {
					cout << s[j];
				}
				else {
					stringstream temp; temp << s.substr(j-d,d);
					int temp_l; temp >> temp_l;
					string aa(temp_l, s[j]);
					cout << aa;
					d = 0;
				}
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
