#include<iostream>
using namespace std;

int countdigits(int n) {

    int count = 0;
    while(n){
        count++;
        
        n/=10;
    }
    return count;
}

bool armstrong(int num, int digit){

    int n = num, ans = 0, rem;
    while(n){
        rem = n%10;
        n /= 10;
        ans = ans + pow(num, digit) ;
    }
    if (ans==num)
    return 1;
    else 
    return 0;
}

int main() {

    int num;
    cin>>num;

    // count numbers
    int digit = countdigits(num);
    
    // armstrong number 
    cout<< armstrong(num,digit);
}