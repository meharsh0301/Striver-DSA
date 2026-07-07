#include <bits/stdc++.h>
using namespace std;

template<typename T1, typename T2>
void printPair(pair<T1, T2> p){
    cout << p.first << " " << p.second << endl;
}

int main(){
    pair<int, int> p1 = {10, 20};
    pair<string, int> p2 = {"Harsh Rai", 21};
    pair<char, int> p3 = {'A', 12};
    /* cout<<"Examples of Pairs container:"<<endl;
    printPair(p1);
    printPair(p2);
    printPair(p3); */
    /*vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(80);
    v1.push_back(160);
    v1.push_back(320);
    for(auto x : v1){
        cout << x << " ";
    }
    cout<<endl;
    
    cout << "Last element to delete: " << v1.back() << endl;
    v1.pop_back();
    for(auto x : v1){
        cout << x << " ";
    }
    cout<<endl;

    cout << "Element to pop from middle : " << *(v1.begin() + 2) << endl;
    v1.erase(v1.begin() + 2);
    for(auto x : v1){
        cout << x << " ";
    }
    cout<<endl;

    cout<<"The number of elements in vector is :"<<v1.size()<< endl;
    cout<<"The memory of vector is:"<<v1.capacity()<< endl;
    if(v1.empty()){
        cout<<"Vector is empty"<<endl;
    }
    else cout<<"Vector is not empty"<<endl;*/

    deque <int> dq;
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(50);
    dq.push_back(80);
    for(auto x : dq)
    {
        cout << x << " ";
    }dq.pop_front();
    return 0;
}