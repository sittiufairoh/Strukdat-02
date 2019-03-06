/*
Nama Program	: Pretest-02
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Deskriptif		: program ini dibuat untuk membuat move zero to front in array
Tahun			: 2019
*/

#include <iostream>
using namespace std;

void movezerotofront (int arr[], int n){
	int count = 0;
	for(int i=0; i<n; i++)
	{
		if (arr[i] !=0){
			arr[count++] = arr[i];
		}
	}
	while (count<n){
		arr[count++] = 0;
	}
	
}

void input (int(&arr)[100], int& n){
	cout << " input angka : " <<endl;
}

void output (int arr[],int n){
	for (int i = 0; i < n; i++){
		cout << arr[i]<< " ";
	}
}

int main (){
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	int n = sizeof (arr)/sizeof (arr[0]);
	movezerotofront (arr,n);
	input (arr,n);
	output (arr,n);
}

