//
// Created by geilo on 26.06.2023.
//
#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<string> list){
    for(string& str : list){
        cout << str << ", ";
    }

    cout << endl;
}
int main2_6(){
    vector<string> checklist;
    checklist = {"Eier", "Schmalz", "Zucker", "Salz", "Milch", "Mehl"};

    printVector(checklist);

    checklist.push_back("Schokolade");
    printVector(checklist);

    checklist.back() = "Safran";
    printVector(checklist);

    erase(checklist, "Schmalz");
    printVector(checklist);

    sort(checklist.begin(), checklist.end());
    printVector(checklist);

}