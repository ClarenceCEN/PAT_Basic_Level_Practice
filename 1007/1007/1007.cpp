// 1007.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

bool is_sushu(int n) {

	for (int i =2; i <= floor(sqrt(n)); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	int d;
	int c_sushu_n = 1;
	int sushudui = 0;
	cin >> n;
	vector <int> sushu{ 2};
	for (int i = 3; i <= n; i++) {
		bool sushuma = is_sushu(i);
		if (sushuma) {
			sushu.push_back(i);
			c_sushu_n += 1;
			d = sushu[c_sushu_n - 1] - sushu[c_sushu_n - 2];
			if (d == 2) {
				sushudui += 1;
			}
		}
	}
	cout << sushudui << endl;
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
