#include<stdio.h>
int sumofdigits(int num) {
if(num < 10) {
    return num;
} else {
    return num % 10 + sumofdigits(num/10);
}
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    int result = sumofdigits(n);
    printf("sum of digits:%d\n",result);
    return 0;
}


