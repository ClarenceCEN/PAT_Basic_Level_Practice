// 1054.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;



int main()
{
	int n; cin >> n;
	int j;
	vector<double>v;
	while (n--) {
		string s; cin >> s;
		int countf = 0, countd = 0;
		for (j = 0; j < s.length(); j++) {
			if (isdigit(s[j]) || s[j] == '.' || s[j] == '-') {
				if (s[j] == '.')countd++;
				if (s[j] == '-')countf++;
				if (countd >= 2 || countf >= 2) {
					cout << "ERROR: " << s << " is not a legal number" << endl;
					break;
				}
				continue;
			}
			else {
				cout << "ERROR: " << s << " is not a legal number" << endl;
				break;
			}
		}
		if (j == s.length()) {
			if (stof(s) > 1000 || stof(s) < -1000) {
				cout << "ERROR: " << s << " is not a legal number" << endl;
				continue;
			}
			if (s.find('.') != string::npos && s.length() - s.find('.') > 3) {
					cout << "ERROR: " << s << " is not a legal number" << endl;
					continue;
			}
			v.push_back(stof(s));
		}
	}
	double sum=0;
	if (v.size() == 0) cout << "The average of 0 numbers is Undefined" << endl;
	else if (v.size() == 1) printf("The average of 1 number is %.2f", v[0]);
	else {
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		printf("The average of %d numbers is %.2f", v.size(),sum/v.size());
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
