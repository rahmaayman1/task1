

#include <iostream>
using namespace std;
int main()
{    
    string std1, std2, id1, id2;
    int grade1, grade2;
    cout << "enter the name of student 1:";
    cin >> std1;cout ;
    cout << "his id:";
    cin >> id1;
    cout << "his math grade: ";
    cin >> grade1;
    cout << "enter the name of student 2:";
    cin >> std2;
    cout << "his id:";
    cin >> id2;
    cout << "his math grade: ";
    cin >> grade2;
    cout << "students grades in math\n";
    cout << std1 << "( with id " << id1 << ") got grade: " << grade1<<endl;
    cout << std2 << "( with id " << id2 << ") got grade: " << grade2<<endl;
    cout << "the averege grade= " << (grade1 + grade2) / 2;

}

