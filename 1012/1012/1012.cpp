// 1012.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	vector<int> nums[5];
	float geshu = 0.0;
	int a1=0, a2=0, a3=0,a5=0;
	float a4=0;
	int flag = 1;

	cin >> m;

	for(int i=0;i<m;i++)
	{
		cin >> n;
		nums[n % 5].push_back(n);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < nums[i].size(); j++) {
			if (i == 0 && nums[i][j] % 2 == 0) {
				a1 += nums[i][j];
			}
			else if (i == 1) {
				a2 += flag * nums[i][j];
				flag *= -1;
			}
			else if (i == 2) {
				a3 += 1;
			}
			else if (i == 3) {
				a4 += nums[i][j];
			}
			else if (i == 4 && nums[i][j]>a5) {
				a5 = nums[i][j];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i != 0) printf(" ");
		if (nums[i].size() == 0||(i==0&&a1==0)) {
			printf("N");
			continue;
		}
		if (i == 0)printf("%d", a1);
		if (i == 1)printf("%d", a2);
		if (i == 2)printf("%d", a3);
		if (i == 3)printf("%.1f", a4/nums[i].size());
		if (i == 4)printf("%d", a5);
	}

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
