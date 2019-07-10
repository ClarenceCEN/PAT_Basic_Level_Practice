// 1035.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>

using namespace std;

void merge(vector<int>& num, int lo, int mi, int hi) {

	int a = 0;
	int b = (hi - lo) / 2;
	vector<int>aux;

	for (int i = lo; i < hi; i++) aux.push_back(num[i]);


	for (int i = lo; i < hi; i++) {
		if (a >= mi) num[i] = aux[b++];
		else if (b >= hi) num[i] = aux[a++];
		else if (aux[b] < aux[a]) num[i] = aux[b++];
		else num[i] = aux[a++];
	}


}

bool MergeSort(vector<int>& num, int lo, int hi, vector<int>original) {

	if (hi - lo < 2) return false;
	int mi = (hi + lo) / 2;
	MergeSort(num, lo, mi, original);
	MergeSort(num, mi, hi, original);
	if (MergeSort(num, lo, mi, original) || MergeSort(num, mi, hi, original))return true;
	merge(num, lo, mi, hi);
	if (original == num) {
		return true;
	}
}

int main()
{
	int n; cin >> n;
	vector<int>a;
	vector<int>ori;
	int c;
	for (int i = 0; i < n; i++) {
		cin >> c;
		a.push_back(c);

	}

	for (int i = 0; i < n; i++) {
		cin >> c;
		ori.push_back(c);
	}

	if (MergeSort(a, 0, a.size(), ori)) {

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
