#include <iostream>

using namespace std;

bool Find(int* matrix, int rows, int cols, int number){
	bool found = false;
	if (matrix != NULL && rows > 0 && cols > 0){
		int row = 0;
		int col = cols - 1;
		while(row < rows && col >= 0){
			if(matrix[row * cols + col] == number){
				found = true;
				break;
			}else if(matrix[row * cols + col] > number){
				--col;
			}else{
				++row;
			}
		}
	}

	return found;
}

int main(){
	int rows=2;
	int cols=2;
	int ma[4]={1,2,3,4};
	int number = 4;
	cout << Find(ma,rows,cols,number) << endl;


	return 0;
}