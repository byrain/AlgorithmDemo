#include <iostream>
using namespace std;

#define NUM 5 
#define CAPACITY 15

int get_max_value(int* v, int* w){
	int max_value = 0;
	int d[NUM+1][CAPACITY+1];
	for (int i = 0; i < NUM + 1; ++i)
	{
		for (int j = 0; j < CAPACITY + 1; ++j)
			{
				d[i][j] = 0;
			}	
	}


	for (int i = 1; i < NUM + 1; ++i)
	{
		for (int j = 1; j < CAPACITY + 1; ++j)
		{
			if (j >= w[i-1])
			{
				// cout << " j w " << j << " " << w[i-1] << " " << i << endl;
				// d[i][j] = ((d[i-1][j] > (d[i-1][j-w[i-1]] + v[i-1])) ? d[i-1][j]:d[i-1][j-w[i-1]] + v[i-1]);
				if (d[i-1][j] > (d[i-1][j-w[i-1]] + v[i-1]))
					d[i][j] = d[i-1][j];
				else
				{
					// cout << v[i-1] << endl;
					d[i][j] = d[i-1][j-w[i-1]] + v[i-1];
				}
				// if(i == 5 && j == 8){
				// 	cout << "j w " << j << " " << w[i-1] << endl;
				// 	cout << d[i][j] << endl;
				// }
			}
		}
	}
	for (int i = 0; i < NUM + 1; ++i)
	{
		for (int j = 0; j < CAPACITY + 1; ++j)
			{
				cout << d[i][j] << " ";
			}	
		cout << endl;
	}

	int nu = 0;
	for (int i = NUM; i != 1; --i)
	{
		if (d[i][CAPACITY] - d[i-1][CAPACITY] > 0){
			nu = d[i][CAPACITY] - d[i-1][CAPACITY];
			cout << nu << endl;
		}
	}
	max_value = d[NUM-1][CAPACITY-1];
	return max_value;	
}

int main(int argc, char* argv[]){
	int v[NUM] = {18,8,50, 10, 3};
	int w[NUM] = {15, 4, 3, 5, 4};
	int max_value = get_max_value(v, w);
	return 0;
}