#include<bits/stdc++.h>
using namespace std;
int DigitCount(int num){
    int count = 0;
    while (num>0)
    {
        count++;
        num/=10;
    }
    return count;
}
int RevercedNum(int num){
    int rnum = 0;
    int rem = 0;
    while(num>0){
        rem = num%10;
        rnum += rem;
        rnum *= 10;
        num/=10;
    }
    return (rnum/10);
}
int main(){
    cout << "Number of Digits are: " << DigitCount(12345) << endl;
    cout << "Reverce of Number is: " << RevercedNum(12345) << endl;
    return 0;
}