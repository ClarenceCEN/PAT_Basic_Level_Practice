// 1024.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

int main()
{
	string num; cin >> num;
	int num_l = num.size();
	string head = "";
	string xiaoshu = "";
	string tail = "";
	int flag = 1;
	int flag2 = 1;
	if (num[0] == '-') {
		flag = -1;
	}
	int i = 1;
	for (; i < num_l; i++) {
		if (num[i] != 'E'&&num[i]!='.') {
			head = head + num[i];
		}
		else {
			break;
		}
	}
	for (; i < num_l; i++) {
		if (num[i] == '.')continue;
		else if (num[i] != 'E') {
			xiaoshu = xiaoshu + num[i];
		}
		else {
			break;
		}
	}
	if (num[++i] == '-') {
		flag2 = -1;
	}
	for (++i; i < num_l; i++) {
		tail = tail + num[i];
	}
	float head1;
	stringstream temp1(head);
	temp1 >> head1;
	int chengmi;
	stringstream temp2(tail);
	temp2 >> chengmi;
	
	string r = "";

	int xiaoshu_l = xiaoshu.size();
	int bulingshu=0, jialingshu=0;
	if (flag2 == -1) {
		bulingshu = chengmi - 1;
		string ling (bulingshu,'0');
		r = r + "0." + ling + head + xiaoshu;
	}
	else {
		jialingshu = chengmi - xiaoshu_l;
		if (jialingshu >= 0) {
			string ling(jialingshu, '0');
			r = r + head + xiaoshu + ling;
		}
		else {
			r = r + head + xiaoshu.substr(0, chengmi) + '.' + xiaoshu.substr(chengmi);
		}

	}

	if (flag == -1) {
		r = '-' + r;
	}



	cout << r << endl;
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
