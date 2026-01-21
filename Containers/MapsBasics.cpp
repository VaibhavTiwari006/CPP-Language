#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string,int> marks;
    marks.insert({"Amit",82});
    marks.insert({"Shubam",77});
    marks.insert({"Akshat", 87});
    marks["Rahul"] = 55;
    marks["Arpit"] = 54;

    cout << "\nStudents marks list" <<endl;
    for(const auto &x : marks){ //cost means value will not change , & means copy will not be made hence it is fast
        cout << x.first << " " << x.second << "\n";
    }
}