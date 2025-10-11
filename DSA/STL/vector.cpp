#include <bits/stdc++.h>
using namespace std;
int main(){
    //vector declaration
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    cout<<v[1];
    //pairs in vector
    vector <pair<int,string>> v1;
    v1.push_back({1,"Vedant"});
    v1.emplace_back(11,"Balaji");
    cout<<v1[1].first<<":"<<v1[1].second;
    //copying v2
    vector <int> v2(5,10);
    vector <int> v3(v2);

    //iterators
    vector<int>::iterator it = v.begin();
    cout<<*it;
    it+=2;
    cout<<*it;
    vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it2 = v.end();
    vector<int>::reverse_iterator it3 = v.rend();
    vector<int>::reverse_iterator it4 = v.rbegin();

    //printing vector in loop
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }//auto = vector<int>::iterator
    for(auto it : v){
        cout<<it<<endl;
    }
    //erase 2nd index
    v.erase(v.begin()+1);
    //erase 2nd to 4th elements
    v.erase(v.begin()+1,v.begin()+4);

    //Insert function
    vector<int> v (5,10);
    v.insert(v.begin()+1,20);
    v.insert(v.begin()+1,2,20);
    //Insert vector
    vector<int> v3 (5,30);
    v.insert(v.begin(),v1.begin(),v1.end());

    //Size function
    cout<<v.size();
    
    //{10,20}
    v.pop_back();//{10}
    
    //v1={10,20}
    //v2={30,40}
    vector<int> v4 (5,10);
    v3.swap(v4);

    //clear vector
    v.clear();

    //empty gives boolean value accoring to vector condition
    cout<<v.empty();
    return 0;
}