#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x, y, a;
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
}
