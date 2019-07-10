// 1014.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string>message(4);
	cin >> message[0] >> message[1] >> message[2] >> message[3];
	int m0 = message[0].size();
	int m1 = message[0].size();
	int m2 = message[0].size();
	int m3 = message[0].size();
	int flag_weekday = 0;
	int end_i = 0;

	for (int i = 0; i < m0 && i < m1; i++) {
		char c1 = message[0][i];
		char c2 = message[1][i];
		int weekday = 0;
		string day;
		if (c1 == c2 && c1 >= 'A' && c1 <= 'G') {

			weekday = c1 - 'A' + 1;
			switch (weekday)
			{
			case 1:day = "MON"; break;
			case 2:day = "TUE"; break;
			case 3:day = "WED"; break;
			case 4:day = "THU"; break;
			case 5:day = "FRI"; break;
			case 6:day = "SAT"; break;
			case 7:day = "SUN"; break;
			default:
				break;
			}

		}
		//else if (c1 == c2 && c1 >= 'a' && c1 <= 'z') {
		//	weekday = c1 - 'a' + 1;
		//}

		if (weekday) {
			cout << day << ' ';
			flag_weekday = 1;
			end_i = i;
			break;
		}
	}
	for(int i=end_i+1; i < m0 && i < m1; i++){
		if (flag_weekday) {
			char c3 = message[0][i];
			char c4 = message[1][i];
			if (c3 == c4) {
				int hour;
				if (c3 >= '0' && c3 <= '9') {
					hour = c3 - '0';
					printf("%02d:", hour);
					break;
				}
				else if (c3 >= 'A' && c3 <= 'N') {
					hour = c3 - 'A' + 10;
					printf("%02d:", hour);
					break;
				}

			}
		}

	}

	for (int i = 0; i < m2 && i < m3; i++) {
		char d1 = message[2][i];
		char d2 = message[3][i];
		if (d1 == d2 && ((d1 >= 'a' && d1 <= 'z') || (d1 >= 'A' && d1 <= 'Z'))) {
			printf("%02d", i);
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
