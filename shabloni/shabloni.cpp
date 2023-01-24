#include <iostream>
#include "Matix.h"
using namespace std;

//min and max
template <class T>
T max1(T a, T b){
	if (a > b) 
		return a;
	else
		return b;
}
template <class T>
T min1(T a, T b) {
	if (a < b)
		return a;
	else
		return b;
}

//sort massiva
template<class S>
S sort(S arr[10]) {
	cout << "Zapolnite massiv 10 chisel" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Otsortirovanni: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " "; 
	}
	return 0;
}
//Poisk
template<class P>
P poisk(P q, P arr2[10]) {
	for (int i = 0; i < 10; i++) {
		if (arr2[i] == q);
			cout << i;
	}
	
}
//Zamena
template<class Z>
Z zamena(Z num, Z chislo, Z arr[10]) {
	for (int i = 0; i < 10, i++) {
		if (i == num) {
			arr[i] = chislo;
		}
	}
	for (int i = 0; i < 10, i++) {
		cout << arr[i] << " ";
	}
	return;
}
int main() {
	//1.1
	/*int a1, b1;
	cin >> a1 >> b1;
	cout << "MAX: " << max1(a1, b1) << endl;
	cout << "MIN: " << min1(a1, b1) << endl;*/
	//1.2
	/*int arr[10]{1,3,6,5,8,4,6,9,0,2};
	sort(arr);*/
	//1.3
	/*int arr2[10]{ 1,3,6,5,8,4,6,9,0,2 };
	int q;
	cin >> q;
	cout << poisk(q, arr2);*/
	//1.4
	/*int arr3[10]{ 1,3,6,5,8,4,6,9,0,2 };
	int n, ch;
	cin >> n;
	cin >> ch;
	cout << zamena(n, ch, arr3);*/

	MATRIX<int> M(2, 3);
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			M.SetMij(i, j, i + j);
		}
	}
	M.Print("M");

}