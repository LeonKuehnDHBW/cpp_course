//
// Created by geilo on 26.06.2023.
//
#include <iostream>
#include  <list>
#include <algorithm>
using namespace std;

void printList(list<int> list){
    for(int& i : list){
        cout << i << ", ";
    }
    cout << endl;
}
int main (){
    list<int> list = {0,1,1,14,5,2,3};
    printList(list);

    list.erase(list.cbegin());
    printList(list);

    list.push_back(8);
    printList(list);

    //list.
    //printList(list);

    list.sort();
    printList(list);

    list.sort(greater<int>());
    printList(list);

    //list.s
    //printList(list);



}