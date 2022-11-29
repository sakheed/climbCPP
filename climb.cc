#include <iostream>
using namespace std;

int climb(int n, int arr[]){
	if (n<0){
		return 0;
	}

	else if (arr[n] !=0){
		return arr[n];
		}
	else if (n==0){
		return 1;
	}

	else{

	arr[n] = climb(n-1, arr) + climb(n-3, arr) + climb(n-5, arr);
	return arr[n];
	}
	}

int main(void){
	int n;
	cout << "Enter the desired number of steps: " << "\n";
	cin >> n;
	int arr[n+1] = {0};
	cout << "Number of ways to climb " << n << " steps: " << climb(n,arr) << "\n";
	return 0;
}
