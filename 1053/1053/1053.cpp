// 1053.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n; float e;int D;
	cin >> n >> e >> D;
	int maybe_k = 0, k = 0;
	for (int i = 0; i < n; i++) {
		int maybe_k_flag = 0;
		int r; cin >> r;
		int yongdian=0;
		for (int j = 0; j < r; j++) {
			float yongdian_d; cin >> yongdian_d;
			if (yongdian_d < e) {
				yongdian++;
			}
		}
		if (yongdian > r / 2) {
			maybe_k++;
			maybe_k_flag = 1;
		}
		if (maybe_k_flag==1&r>D) {
			k++;
			maybe_k--;
		}
	}

	float r_m_k = maybe_k * 1.0 / n;
	float r_k = k * 1.0 / n;

	printf("%0.1f%% %0.1f%%", r_m_k*100, r_k*100);
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
