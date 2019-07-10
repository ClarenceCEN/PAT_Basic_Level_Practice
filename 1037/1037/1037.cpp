// 1037.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector <string> id_num;
	cin >> n;
	int flag = 1;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		string id;
		cin >> id;
		id_num.push_back(id);
		for (int j = 0; j < 17; j++) {
			char num = id[j];
			int num_int = int(num) - 48;
			int weigh;
			switch (j)
			{
			case 0:weigh = 7; break;
			case 1:weigh = 9; break;
			case 2:weigh = 10; break;
			case 3:weigh = 5; break;
			case 4:weigh = 8; break;
			case 5:weigh = 4; break;
			case 6:weigh = 2; break;
			case 7:weigh = 1; break;
			case 8:weigh = 6; break;
			case 9:weigh = 3; break;
			case 10:weigh = 7; break;
			case 11:weigh = 9; break;
			case 12:weigh = 10; break;
			case 13:weigh = 5; break;
			case 14:weigh = 8; break;
			case 15:weigh = 4; break;
			case 16:weigh = 2; break;
			default:
				break;
			}
			sum += weigh * num_int;

		}
		int mod = sum % 11;
		char check;
		switch (mod)
		{
		case 0:check = '1'; break;
		case 1:check = '0'; break;
		case 2:check = 'X'; break;
		case 3:check = '9'; break;
		case 4:check = '8'; break;
		case 5:check = '7'; break;
		case 6:check = '6'; break;
		case 7:check = '5'; break;
		case 8:check = '4'; break;
		case 9:check = '3'; break;
		case 10:check = '2'; break;

		default:
			break;
		}
		if (id[17] - check != 0) {
			flag = 0;
			cout << id << endl;
		}
	}
	if (flag) {
		cout << "All passed" << endl;
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
