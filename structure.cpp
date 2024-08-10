    #include <iostream>
    #include <vector>



    using namespace std;



    struct student 
    {
        string name;
        int score;
        char grade;

        // Constructor
        student() {
            name = "anon";
            score = 50;
            grade = 'F'; }
    };




    void addStudent(vector<student> &s)
    {
        student new_student;

        cout << "Enter student name... "; cin >> new_student.name;
        cout << "Enter student score... "; cin >> new_student.score;
        cout << "Enter grade name... "; cin >> new_student.grade;

        s.push_back(new_student);
    }



    void showStudent(const vector<student> &s)
    {
        int index;

        while (true)
        {
            cout << "Choose student to display" << endl; cin >> index;

            if (index < 0 || index >= s.size())
            {
                cout << "Invalid index!" << endl;
                return;
            }
            
            else
            {
                break;
            }
        }
        cout << "Student " << index << "'s information:" << endl;
        cout << "      Name: " << s[index].name << endl;
        cout << "      Score: " << s[index].score << endl;
        cout << "      Grade: " << s[index].grade << endl;
    }



    int getTotalStudent(const vector<student> &s)
    {
        return s.size();
    }



    void displayMenu()
    {
        cout << endl;
        cout << "Students Management:" << endl;
        cout << "[0] End program" << endl;
        cout << "[1] Total students" << endl;
        cout << "[2] Add students" << endl;
        cout << "[3] Show students" << endl;
        cout << endl;
        cout << "Select task... ";
    }



    int main() 
    {
        int task;
        vector<student> students;

        while (true) 
        {
            displayMenu();
            cin >> task;

            switch (task) 
            {
                case 0:
                    cout << "End program, Good bye" << endl;
                    return 0;

                case 1:
                    cout << endl;
                    cout << "Total students : " << getTotalStudent(students) << endl;
                    break;

                case 2:
                    addStudent(students);
                    break;

                case 3:
                    showStudent(students);
                    break;

                default:
                    cout << "Invalid task!" << endl;
                    break;
            }

        }

        return 0; 
    }