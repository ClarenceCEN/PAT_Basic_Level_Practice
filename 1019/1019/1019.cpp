// 1019.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
using namespace std;

int string_to_int(string n) {
	int n_digits = n.size();
	int m = 0;
	for (int i = 0; i < n_digits; i++) {
		int c_n = static_cast<int>(n[n_digits-i-1]) - 48;
		m += pow(10, i) * c_n;
	}
	return m;
}

int string_to_int_max(string n) {
	int n_digits = n.size();
	int m = 0;

}

int main()
{
	//int n; cin >> n;
	string a; cin >> a;
	cout << string_to_int(a);
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
