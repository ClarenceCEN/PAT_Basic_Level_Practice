// 1002.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
#include<string>
using namespace std;

string read_pinying(int n) {
	string pinyin;
	switch (n) {
	case 1:pinyin = "yi"; break;
	case 2:pinyin = "er"; break;
	case 3:pinyin = "san"; break;
	case 4:pinyin = "si"; break;
	case 5:pinyin = "wu"; break;
	case 6:pinyin = "liu"; break;
	case 7:pinyin = "qi"; break;
	case 8:pinyin = "ba"; break;
	case 9:pinyin = "jiu"; break;
	case 0:pinyin = "ling"; break;
	}
	return pinyin;
}

int count_digit(double n) {
		int digit = 0;
		do {
			n /= 10;
			digit += 1;
		} while (n>1);
		return digit;
}

int main()
{
	string  n;
	int  sum_value = 0;
	cin >> n;
	int string_length = n.size();
	//cout << string_length << endl;
	for (int i = 0; i < string_length; i++) {
		char current_num_char = n[i];
		int current_num = static_cast<int> (current_num_char) - 48;
		//cout << current_num << endl;
		sum_value += current_num;
	}
	//cout << sum_value << endl;
	//int n_digit = count_digit(n);


	int a = sum_value;

	int sum_digit = count_digit(sum_value);

	for (int i=sum_digit; i >0; i--) {
		int d = pow(10, i - 1);
		int c;
		c = a / d;
		a = a % d;
		cout << read_pinying(c);
		if (i != 1) {
			cout << " ";
		}
		else {
			break;
		}
		
	}

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
