#include <iostream>
using namespace std;

int get_max_sum(int* a, int n){
	int sum = -9999999;
	int sum_temp = -9999999;
	for(int i = 0;i < n;i++){
		if(a[i] < (sum_temp + a[i]))
			sum_temp = sum_temp + a[i];
		else
			sum_temp = a[i];
		if (sum < sum_temp)
			sum = sum_temp;
	}
	return sum;
}

int main(int argc, char* argv[]){
	int a[] =  {-2, -11, -4, -13, -5, -2, -100, -99, -100};
	int n = sizeof(a)/sizeof(int);
	int sum = get_max_sum(a, n);
	cout << sum;
	return 0;
}