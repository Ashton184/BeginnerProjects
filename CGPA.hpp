#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
/*
int main()
{
    float x, y;
    int a;
    float SumGP = 0, SumCC = 0;
    cout << "-------------Hello, Welcome to CGPA Calculator!----------" << endl <<"Please submit the following:   "<< endl;
    cout << "Number of courses taken:";
    cin >> a;
        for (int i = 1; i < a+1; i++){
            cout << "Grade of Course " << i <<" :";
            cin >> x;
            cout <<"Credit Hours of Course " << i <<" :";
            cin >> y;
            const float z = x * y;
            SumGP += z;
            SumCC += y;
        }
    cout << "CGPA: " << fixed << setprecision(2)<<SumGP/SumCC;
    return 0;
} */
float GPA(const string& grade){
    if (grade == "A") return 4.0;
    if (grade == "A-") return 3.7;
    if (grade == "B+") return 3.3;
    if (grade == "B") return 3.0;
    if (grade == "B-") return 2.7;
    if (grade == "C+") return 2.3;
    if (grade == "C") return 2.0;
    if (grade == "C-") return 1.7;
    if (grade == "D+") return 1.3;
    if (grade == "D") return 1.0;
    if (grade == "D-") return 0.7;
    if (grade == "F") return 0.0;
    return -1.0;
    }
void Inputs(int numCourses, float Grade[], float CreHours[]){
    string grade;
    for (int i = 0; i < numCourses; i++){
        cout <<"Grade of Course "<<i+1<<" :"; cin>>grade;
        float a = GPA(grade);
        while(a < 0.0){
            cout<<"Invalid grade. Please try again.";
            cin>>grade;
            a = GPA(grade);
        };
        Grade[i] = a;

        cout <<"Credit Hours of Course "<<i+1<<" :"; cin>>CreHours[i];
        while (CreHours[i]<=0){
            cout<<"Invalid number. Please try again.";
            cin>>CreHours[i];
        }
    }
}

float CalculateCGPA(int numCourses, float Grade[], float CreHours[]){
    float SumGP = 0; float SumCH = 0;
    for (int i = 0; i < numCourses; i++){
        SumGP += (Grade[i]*CreHours[i]);
        SumCH += CreHours[i];
    }
    return SumGP/SumCH;
}
int main(){
    int numCourses;
    cout << "------------Welcome to CGPA Calculator-----------" << endl;
    cout << "Please submit the following" << endl;
    cout << "Number of courses taken: "; cin >> numCourses; cin.clear(); fflush(stdin);
    while(numCourses <= 0 )
    {
        cout <<"Invalid value. Please try again."<<endl;
        cout << "Number of courses taken: "; cin >> numCourses; cin.clear(); fflush(stdin);
    }


    float Grade[numCourses], CreHours[numCourses];
    Inputs(numCourses, Grade, CreHours);

    float cgpa = CalculateCGPA(numCourses, Grade, CreHours);
    cout <<" Your CGPA is " <<fixed << setprecision(2)<< cgpa<<endl;
    return 0;
}
