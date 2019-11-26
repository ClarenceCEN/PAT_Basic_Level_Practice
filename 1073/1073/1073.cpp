// 1073.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	vector<int>manfens(m, 0), geshus(m, 0), zhengques(m, 0);
	vector<vector<int>> wrong(m, vector<int>(5, 0));
	vector <double> fenshu(n, 0);
	vector <string> xuanxiangs(m, "");
	int max_wrong = 0;
	for(int a=0;a<m;a++) {
		int manfen, geshu, zhengque;
		cin >> manfen >> geshu >> zhengque;
		manfens[a]=manfen;
		geshus[a]=geshu;
		zhengques[a]=zhengque;
		while (zhengque--)
		{
			string ans; cin >> ans;
			xuanxiangs[a] = xuanxiangs[a] + ans;
		}

	}
	int z;
	char co;
	for (int g = 0; g < n;g++) {
		for (int b = 0; b < m; b++) {
			cin.clear();
			string c_ans ="";
			scanf(" ");
			scanf("(%d", &z);
			for (int a = 0; a < z; a++) {
				scanf(" %c", &co),c_ans += co;
			}
			scanf(")");

			if (c_ans == xuanxiangs[b]) {
				fenshu[g] += manfens[b]*1.0;
			}
			else {
				string c_zhengque = xuanxiangs[b];
				double flag = 1.0;
				for (int c = 0; c < c_ans.size(); c++) {
					if (c_zhengque.find(c_ans[c]) == string::npos) {
						wrong[b][c_ans[c] - 'a'] ++;
						flag = 0;
						if (max_wrong <= wrong[b][c_ans[c] - 'a']) {
							max_wrong = wrong[b][c_ans[c] - 'a'];
						}
					}
				}
				fenshu[g] += manfens[b] / 2.0 * flag;

				for (int c = 0; c < c_zhengque.size(); c++) {
					if (c_ans.find(c_zhengque[c]) == string::npos) {
						wrong[b][c_zhengque[c] - 'a']++;
						if (max_wrong <= wrong[b][c_zhengque[c] - 'a']) {
							max_wrong = wrong[b][c_zhengque[c] - 'a'];
						}
					}
				}
			}
			
		}
		printf("%.1lf\n", fenshu[g]);
	}

	if (max_wrong == 0) {
		cout << "Too simple" << endl;
		return 0;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 5; j++) {
			if (wrong[i][j] == max_wrong) {
				printf("%d %d-%c\n", max_wrong, 1+i, 'a' + j);
			}
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
