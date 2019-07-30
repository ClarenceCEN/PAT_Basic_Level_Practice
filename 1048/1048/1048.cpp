// 1048.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string a, b; cin >> a >> b;
	int s_a = a.size(); int s_b = b.size();
	if (s_a > s_b) {
		int cha = s_a - s_b;
		string bu(cha, '0');
		b = bu + b;
		s_b += cha;
	}
	else if (s_b > s_a) {
		int cha = s_b - s_a;
		string bu(cha, '0');
		a = bu + a;
		s_a = s_a + cha;
	}
	string result = "";
	int flag = 1;
	string R = "0123456789JQK";
	while (s_a > 0 && s_b > 0) {
		char c_a = a[--s_a];
		char c_b = b[--s_b];
		int i_a = c_a - '0';
		int i_b = c_b - '0';
		int ind;
		string c_r;
		if (flag == 1) {
			ind = (i_a + i_b) % 13;
			c_r = R[ind];
		}
		else {
			ind = (c_b - c_a >= 0) ? (c_b - c_a) : (c_b - c_a + 10);
			c_r = R[ind];
		}
		flag *= -1;
		result = c_r + result;

	}
	if (s_b > 0) {
		result = b.substr(0, s_b) + result;
	}

	cout << result << endl;
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
