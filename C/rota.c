#include <stdio.h> 
void leftRotatebyOne(int arr[], int n); 
void leftRotate(int arr[], int d, int n) 
{ 
	int i; 
	for (i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
} 
void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[n], i; 
	for (i = n; i>0; i--) 
		arr[i] = arr[i -1]; 
	arr[i] = temp; 
} 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
} 
int main() 
{ 
	int arr[100],n;
        scanf("%d",&n); 
	leftRotate(arr,n, n); 
	printArray(arr, n); 
	return 0; 
} 

