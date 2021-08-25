/***************************************************************
一个有序数组A， 另一个无序数组B， 请打印B中的所有不在A中的数

 A数组长度为N， B数组长度为M。
****************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arrA[] = { 1, 3, 8, 10, 50 };
int arrB[] = { 1000, 2, 3, 7, 50 };


int main() {
	sort(arrB, arrB + 5);

	for (int i = 0; i < 5; ++i) {
		cout << "arrB[" << i << "]=" << arrB[i] << endl;
	}

	for (int i = 0; i < 5; ++i) {
		
	}

    return 0;
}
