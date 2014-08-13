#include <iostream>
using namespace std;
#define N 5

int get_max_sum(int d[N][N]){
	int sum = 0;
	for (int i = N-1; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
			{
				d[i-1][j] += d[i][j] > d[i][j+1]?d[i][j]:d[i][j+1];	
			}
	}
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			{
				cout << d[i][j] << " ";
			}	
		cout << endl;
	}
	return d[0][0];
}

int main(int argc, char* argv[]){
	int data[N][N] = {
            {9,0,0,0,0},  
            {12,15,0,0,0},  
            {10,6,8,0,0},  
            {2,18,9,5,0},  
            {19,7,10,4,16}
        };
    int sum = get_max_sum(data); 
    cout << "max sum is " << sum << endl;
	return 0;
}