/*
Mode of array
*/

#include<stdio.h>

int findMode(int a[], int n){
    int maxValue = 0, maxCount = 0, i, j;
    for (i = 0; i < n; ++i) {
        int count = 0;
        for (j = 0; j < n; ++j) {
            if (a[j] == a[i])
            ++count;
        }
      
        if (count > maxCount) {
            maxCount = count;
            maxValue = a[i];
        }
    }
   return maxValue;
}

int main(){
    int i, n, *a;
    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    printf("%d", findMode(a, n));
    return 0;
}
