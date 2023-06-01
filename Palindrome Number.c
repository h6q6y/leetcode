#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
    if(x < 0) {
        return false;
    } else {
        long int a, b = 0;
        a = x;
        while(a != 0) {
            b = b * 10 + a % 10;
            a = a / 10;
        }
        if(x == b) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int a = 6667;
    int temp = isPalindrome(a);
    printf("%d\n", temp);
}