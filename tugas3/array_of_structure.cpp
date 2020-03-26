#include <iostream>
using namespace std;
 struct Student
       {
              int Roll;
              char Name[25];
              int Marks[3];              //Statement 1 : array of marks
              int Total;
              float Avg;
       };

       int main()
       {
              int i;
              Student S;

              cout << "\n\nEnter Student Roll : ";
              cin >> S.Roll;

              cout << "\n\nEnter Student Name : ";
              cin >> S.Name;

              S.Total = 0;

              for(i=0;i<3;i++)
              {
                     cout << "\n\nEnter Marks " << i+1 << " : ";
                     cin >> S.Marks[i];

                     S.Total = S.Total + S.Marks[i];
              }

              S.Avg = S.Total / 3;

              cout << "\nRoll : " << S.Roll;
              cout << "\nName : " << S.Name;
              cout << "\nTotal : " << S.Total;
              cout << "\nAverage : " << S.Avg;
              
              return 0
       }

