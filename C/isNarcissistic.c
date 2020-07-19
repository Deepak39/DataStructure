
/*
Question:
check whether entered number is Narcissistic or not.
*/

#include<stdio.h>

//calculates power
int power(int number, int pow){
    int res=1;
    while(pow--) res*=number;
    return res;
}

//check whether number is Narcissistic or not
int isNarcissistic(int num){
    int n, pow=0;
    n=num;// backing up original number
    while(num > 0){
        num/=10;
        pow++;
    }
    num = n;
    int narsum = 0;

    while(num>0){
        int rem = num%10;
        narsum += power(rem, pow);
        num /= 10; 
    }
    return (n==narsum) ? 1:0;
}

int main(){

    int num;
    scanf("%d", &num);
    printf(isNarcissistic(num) ? "True":"False");
    printf("\n");// remove if newline character not needed.

    return 0;
}
