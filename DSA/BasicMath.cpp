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
        rnum = rnum * 10 + rem;
        num/=10;
    }
    return (rnum);
}
bool CheckPalindrom(int num){
    if(num == RevercedNum(num))return true;
    else return false;
}
bool CheckArmstrong(int n){
    int sum = 0;
    int num = n;
    while (n>0){
        int rem = n%10;
        n /= 10;
        sum += rem*rem*rem;
    }
    if(num==sum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout << "Number of Digits are: " << DigitCount(12345) << endl;
    cout << "Reverce of Number is: " << RevercedNum(12345) << endl;
    cout << "Is 121 a Palindrome: ";
    CheckPalindrom(121)?cout<<"Yes\n":cout<<"No\n";
    cout << "Is 153 a Armstrong: ";
    CheckArmstrong(153)?cout<<"Yes\n":cout<<"No\n";
    return 0;
}