#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type; 
    cin >> q;
     
    map<string,int> student;
    string name;
    
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            student[name] += mark;
        }
        else if (type == 2)
            student.erase(name);
        else
            cout << student[name] << "\n";
    }
    return 0;
}



