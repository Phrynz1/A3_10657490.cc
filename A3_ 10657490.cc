// UNIVERSITY OF GHANA GRADING SYSTEM.
#include <iostream>
using namespace std;
int main()
{
    int examsscore;


    cout<< "please enter your exams score";
    cin>>examsscore;
    if((examsscore>=80) && (examsscore<100))
    {
        cout << "your grade is:"<<"A";
    }
    // Excellent
      else if( (examsscore >=70) && (examsscore <80) )
      {
          cout<<"your grade is:"<<"B";
      }
      // Very Good
       else if( (examsscore >=60) && (examsscore <70) )
       {
           cout<<"your grade is:"<<"C";
       }
       // Good
       else if( (examsscore >=50) && (examsscore <60) )
       {
            cout<<"your grade is:"<<"D";
       }
       // Credit
       else if( (examsscore >=40) && (examsscore <50) )
       {
          cout<<"your grade is:"<<"E";
       }
       // pass
       else if( (examsscore >=30) && (examsscore <40) )
       {
          cout<<"your grade is:"<<"F";
       }
       // Fail
       return 0;
}
