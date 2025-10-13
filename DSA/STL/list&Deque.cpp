#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.emplace_front(1);
    //rest fuctions same as vector
    //begin, end, rbegin, insert, clear, empty, size , swap
    
    deque<int> dq;
    dq.push_back(2);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(1);
    
    dq.pop_back();
    dq.pop_front();
    
    dq.back();
    dq.front();
    //rest fuctions same as vector
    //begin, end, rbegin, insert, clear, empty, size , swap
    
    return 0;
}