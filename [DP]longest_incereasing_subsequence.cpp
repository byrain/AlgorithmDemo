#include <iostream>
using namespace std;

int lis(int* a, int n){
	int* d = new int[n];
	int len = 1;
	for(int i = 0; i < n; i++){
		d[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j]<a[i] && d[j] + 1 >= d[i])
				d[i] = d[j] + 1;
		}
		if (d[i] >= len)
			len = d[i];
	}
	return len;
}

int main(int argc,char *argv[])
{
	int a[] = {5,3,4,8,6,7,7};
	int len = lis(a, 7);
	cout << len;
	return 0;
}

