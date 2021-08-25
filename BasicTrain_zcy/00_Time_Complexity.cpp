/***************************************************************
一个有序数组A， 另一个无序数组B， 请打印B中的所有不在A中的数

 A数组长度为N， B数组长度为M。
****************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arrA[] = { 1, 3, 8, 10, 20, 60, 80, 1000};
int arrB[] = { 1000, 2, 3, 7, 50 };


int main(int argc, char* argv[]) {
	sort(arrB, arrB + 5);
	int lenA = sizeof(arrA) / sizeof(arrA[0]);
	int lenB = sizeof(arrB) / sizeof(arrB[0]);

	int i = 0, j = 0;
	while (i < lenA && j < lenB) {
		// cout << "i : " << i << ", " << arrA[i] << endl;
		// cout << "j : " << j << ", " << arrB[j] << endl;
		if (arrA[i] < arrB[j]) {
			++i;
		}
		else if (arrA[i] == arrB[j]) {
			++i;
			++j;
		}
		else {
			cout << "in B not in A is " << arrB[j] << endl;
			++j;
		}
	}

	while (j < lenB) {
		cout << "in B not in A is " << arrB[j] << endl;
		++j;
	}


    return 0;
}
