// 1006.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
using namespace std;

int count_digit(int n) {
	int e = n;
	//	int m = n;
	int d = 0;
	do {
		//		m = m % 10;
		e = e / 10;
		d += 1;
	} while (e > 0);
	return d;
}

int main()
{
	int n;
	cin >> n;
	string result = "";
	string num = "123456789";
	string c_s;
	int e = n;
	int digit = count_digit(n);
	for (int i = digit; i > 0; i--) {
		int p = pow(10, i - 1);
		int c = e / p;
		e -= c * p;
		if (i == 3) {
			string t(c, 'B');
			c_s = t;
		}
		else if (i == 2) {
			string t(c, 'S');
			c_s = t;
		}
		else if (i == 1) {
			string t = num.substr(0, c);
			c_s = t;
		}
		result = result + c_s;
	}
	cout << result << endl;
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
