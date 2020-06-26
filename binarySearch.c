/*
Question: 
Given an array of numbers of size n and integer x. Search whether x is present in array or not. If yes, return true 
else return false. You need to perform binary search on the given array.
*/

#include<stdio.h>
#include<malloc.h>

int binarySearch(int arr[], int l, int h, int x){
	int flag = 0;
    while (l <= h) { 
        int mid = (l+h) / 2;
        if (arr[mid] == x) return 1; 	// element found
        else if (arr[mid] < x) l=mid+1; // if x is greater than middle val ignore the lower half of array
        else h=mid-1; 			// if x is lower than the middle val ignore the upper half of array
    } 
    return flag; 
} 

int main(){
	int *a, n, x;
	scanf("%d", &n);
	a = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	scanf("%d",&x);
	printf( binarySearch(a, 0, n-1, x) ? "Yes" : "No");
	return 0;
}
