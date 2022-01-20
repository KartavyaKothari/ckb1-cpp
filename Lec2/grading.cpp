#include <bits/stdc++.h>
using namespace std;

string grading(int marks){
    string grades[] = {"AA","AB","BB","BC","CD","DD"};
    
    return marks>40?grades[9-((marks+1)/10)]:"Fail";
}

string grading(int n) {
    if (n >= 91) return "AA";
    if (n >= 81) return "AB";
    if (n >= 71) return "BB";
    if (n >= 61) return "BC";
    if (n >= 51) return "CD";
    if (n >= 41) return "DD";
    
    return "Fail";
}

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    
    cout << "Your grade is: ";

    grading(marks);
}