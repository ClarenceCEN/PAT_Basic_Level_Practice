// 1003.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;

bool test_correct(int a, int b, int c) {
	if (b == 1&&a==c) {
		return true;
	}
	else if (a >= 0 && c >=0&&b>=0) {
		return test_correct(a, b - 1, c - a);
	}
	else {
		//cout << "答案错误" << endl;
		return false;
	}
}


int main()
{
	int n;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++) {

		while (cin >> s) {
			bool is_correct = false;
			int flag = 0;
			int a = 0, b = 0, c = 0;
			int s_length = s.size();
			for (int j = 0; j < s_length; j++) {
				if (s[j] == 'P' && flag == 0) {
					flag = 1;
					//cout << "Hi!" << endl;
					a = j;
					continue;
				}
				if (s[j] == 'A' || s[j] == 'T') {
					if (flag == 1 && s[j] == 'A') {
						b += 1;
						continue;
					}
					else if (flag == 1 && s[j] == 'T') {
						//c = s_length - j - 1;
						flag = 2;
						if (j == s_length - 1) {
							is_correct = test_correct(a, b, c);
							break;
						}
						else {
							continue;
						}
						
					}
					else if (flag == 2 && s[j] == 'A') {
						c += 1;
						if (j == s_length - 1) {
							is_correct = test_correct(a, b, c);
							break;
						}

					}
					else if (flag == 0 && s[j] == 'A') {
						continue;
					}
					else {
						is_correct = false;
						break;
					}
				}
				else {
					is_correct = false;
					break;
				}


			}
			//cout << a << " " << b << " " << c << endl;

			if (is_correct) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
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
