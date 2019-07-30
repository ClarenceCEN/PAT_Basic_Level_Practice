// 1088.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <math.h>
#include<vector>
using namespace std;

void compare(int a, float b) {
	if (a > b) cout << " Gai";
	if (a == b)cout << " Ping";
	if (a < b)cout << " Cong";
}

int main()
{
	int m, x, y; cin >> m >> x >> y;
	//int jia, yi;
	vector<int>jia;
	vector<int>yi;
	int jia_r = 0,yi_r=0;
	for (int a = 1; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			int fenzi = abs(9 * a - 9 * b);
			int fenmu = 10 * b + a;
			if (y * fenzi == x * fenmu) {
				int temp_jia = 10 * a + b;
				int temp_yi = 10 * b + a;
				jia.push_back(temp_jia);
				yi.push_back(temp_yi);
				if (temp_jia >= jia_r) jia_r = temp_jia;
			}
		}
	}

	if (jia.size() == 0) {
		cout << "No Solution" << endl;
		return 0;
	}
	int k = 0;
	for (k; k < jia.size(); k++) {
		if (jia[k] == jia_r)break;
	}
	yi_r = yi[k];

	cout << jia_r;
	float bing_r = yi_r / (y * 1.0);

	compare(m, jia_r);
	compare(m, yi_r);
	compare(m, bing_r);

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
