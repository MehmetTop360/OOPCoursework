#include <iostream>
#include 
using namespace std;

int main()
{
    int n, m, teac, stud, main, side, i, temp;

    cout << endl;
    cout << "Welcome to the School Club Assigner!" << endl;
    cout << endl;
    cout << "Here firstly you are going to type the amount of clubs and students. Later on the names of the teachers and the students with their interests." << endl;
    cout << endl;
    cout << "The format being:" << endl;
    cout << "Name MainInterest SideInterest" << endl;
    cout << "Hopefully the instructions are clear enough. Now the application will start."<< endl;
    cout << endl;

    cout << "Enter the amount of club (s)" << endl;
    cin >> n;

    cout << "Enter the amount of student (s)" << endl;
    cin >> m; 

    cout << "Enter the name of teacher (s), their main interest, and their side interest" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> teac >> main >> side;
    }

    cout << "Enter the name of student (s), their main interest, and their side interest" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> stud >> main >> side;
    }
}