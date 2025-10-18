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
int main(){
    cout << "Number of Digits are: " << DigitCount(12345) << endl;
    return 0;
}