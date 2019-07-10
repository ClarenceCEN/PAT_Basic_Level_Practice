// 1017.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

	string num;
	int d;
	string ans, mod;
	cin >> num >> d;

	int dig = num.size();
	int c_mod;
	int c_ans;
	
	if (dig == 1) {
		if ((num[0] - '0') < d) {
			cout << "0 " << (num[0] - '0') << endl;
			
		}
		else {
			c_mod = (num[0] - '0') % d;
			c_ans = (num[0] - '0') / d;
			cout << c_ans << ' ' << c_mod << endl;
		}
		return 0;
	}

	int first_dig = num[0] - '0';
	if (first_dig < d) {
		c_mod = first_dig;
	}
	else {
		c_mod = first_dig % d;
		c_ans = first_dig / d;
		cout << c_ans;
	}


	for (int i = 1; i < dig-1; i++) {
		int num_dig = (num[i] - '0') + c_mod*10;

			c_ans = num_dig / d;
			c_mod = num_dig % d;
			cout << c_ans;
		

	}

	int last_dig = num[dig - 1]-'0';

	last_dig += c_mod*10;
	c_ans = last_dig / d;
	cout << c_ans;
	c_mod = last_dig % d;
	cout << ' ' << c_mod << endl;

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
