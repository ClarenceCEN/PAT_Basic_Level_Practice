// 1005.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
using namespace std;

int find(vector<int> a, int n) {
	int a_size = a.size();
	for (int i=0; i < a_size; i++) {
		if (a[i] == n) {
			return i;
		}
	}
	return -1;

}

void mySwap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int n; cin >> n;
	vector <int> a;
	vector <int> b;
	vector<int>c;
	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		a.push_back(m);
		do {
			if (m % 2 == 0) {
				m /= 2;
			}
			else {
				m = (3 * m + 1) / 2;
			}
			if (m == 1) {
				break;
			}
			if (find(b, m) == -1) {
				b.push_back(m);
			}
		} while (true);
	}
	for (int i = 0; i < n; i++) {
		if (find(b, a[i]) == -1) {
			c.push_back(a[i]);
		}
	}
	//cout << c.size() << endl;
	
	int s = c.size()-1;
	while (s > 0) {
		int lastExchangeIndex = 0;
		for (int j = 0; j < s; j++) {
			if (c[j] < c[j + 1]) {
				mySwap(c[j], c[j + 1]);
				lastExchangeIndex = j;
			}
		}
		s = lastExchangeIndex;
	}

	for (int i = 0; i < c.size(); i++) {
		if (i != c.size() - 1) {
			cout << c[i] << " ";
		}
		else {
			cout << c[i] << endl;
		}
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
