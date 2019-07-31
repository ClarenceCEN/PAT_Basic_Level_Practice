// 1079.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string rev_and_add(string i) {
	//stringstream temp(i);
	//int temp_a; temp >> temp_a;

	string i_r = "";
	for (int a = 0; a < i.size(); a++) {
		i_r = i[a] + i_r;
	}

	int flag = 0;
	string r = "";
	for (int a = 0; a < i.size(); a++) {

		stringstream temp1; temp1 << i[a];
		int temp_a; temp1 >> temp_a;
		stringstream temp2; temp2 << i_r[a];
		int temp_b; temp2 >> temp_b;

		int temp_c = temp_a + temp_b + flag;
		if (temp_c >= 10) {
			flag = 1;
			temp_c = temp_c % 10;
		}
		else {
			flag = 0;
		}

		stringstream temp3; temp3 << temp_c;
		string temp_d; temp3 >> temp_d;
		r = temp_d + r;

	}
	if (flag == 1)r = "1" + r;
	cout << i << " + " << i_r << " = " << r << endl;

	return r;
}


bool is_pal(string i) {
	int a = i.size();
	for (int m=0; m < a; m++) {
		if (i[m] != i[a - 1 - m])return false;
	}
	return true;
}


int main()
{
	string i; cin >> i;
	if (is_pal(i)) {
		cout << i << " is a palindromic number." << endl;
		return 0;
	}
	string i_next = rev_and_add(i);

	if (is_pal(i_next)) {
		cout << i_next << " is a palindromic number." << endl;
		return 0;
	}


	for (int a = 0; a < 9; a++) {
		i_next = rev_and_add(i_next);
		if (is_pal(i_next)) {
			cout << i_next << " is a palindromic number." << endl;
			return 0;
		}
	}

	cout << "Not found in 10 iterations." << endl;
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
