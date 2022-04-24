#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>

#include "person.h"
#include "teacher.h"
#include "student.h"

using namespace std;

int main()
{
    int n, m, i, temp; 
    string tempteac, tempstud, teac, stud, main ,side;

    vector<teacher> teacvec;
    vector<student> studvec;

    teacher tempteac(teac, main, side);
    teacher tempstud(stud, main, side);

    // Not important
    cout << endl;
    cout << "Welcome to the School Club Assigner!" << endl;
    cout << endl;
    cout << "Here firstly you are going to type the amount of clubs and students. Later on the names of the teachers and the students with their interests." << endl;
    cout << endl;
    cout << "The format being:" << endl;
    cout << "Name MainInterest SideInterest" << endl;
    cout << "Hopefully the instructions are clear enough. Now the application will start."<< endl;
    cout << endl;
    // Not important


    cout << "Enter the amount of club (s)" << endl;
    cin >> n;

    cout << "Enter the amount of student (s)" << endl;
    cin >> m; 


    cout << "Enter the name of teacher (s), their main interest, and their side interest" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> teac >> main >> side;
        teacvec.push_back (tempteac);
    }

    cout << "Enter the name of student (s), their main interest, and their side interest" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> stud >> main >> side;
        studvec.push_back (tempstud);
    }
}