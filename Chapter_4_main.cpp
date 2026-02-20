#include "..\..\Dependencies_C++\Include\std_lib_facilities.h"
using namespace std;


/*PAGE 128 exercise 2*/

int main()
{
    vector<double> numbers;
    cout<<"Enter numbers (press Ctrl+Z to end input): ";
    for(double number; cin>>number;)
    {
        numbers.push_back(number);
    }

    if(numbers.size() == 0)
    {
        cout<<"No numbers entered."<<endl;
        return 0;
    }

    for()
}

/*DRILL PAGE 126

int main()
{
    double num1, num2, small_num, large_num;
    while(cin>>num1>>num2)
    {
        cout<<"The numbers are: "<<num1<<" and "<<num2<<endl;
        if(num1<num2)
        {
            small_num=num1;
            large_num=num2;
        }
        else
        {
            if (num1==num2)
            {
                cout<<"The numbers are equal."<<endl;
            }
            if(num1>num2)
            {
                small_num=num2;
                large_num=num1;
            }
            
        }
        if(num1!=num2)
        {
            cout<<"The smaller number is: "<<small_num<<endl;
            cout<<"The larger number is: "<<large_num<<endl;
        }
    }
}
    */



 /*       TEXT EXAMPLE PAGE 123
int main()
{
    vector<string> words;
    for(string temp; cin>>temp;)
    words.push_back(temp);
    cout<<"Number of words: "<<words.size()<<endl;

    sort(words);
    for(int i=0; i<words.size(); ++i)
    {
        if(i==0 || words[i-1]!=words[i])
        cout<<words[i]<<endl;
    }
}

*/

/*RANGE OF LOOP: goes through sequence of each element in a vector

int main()
{


    vector<double> temps;
    for(double temp; cin>>temp;)
    {
        temps.push_back(temp);
    }

     for (double x:temps)
    {
        cout<<x<<endl;
    }

    //compute mean temperature

    double sum = 0;
    for (int x:temps) sum += x;
    cout<<"Avg. temperature: "<<sum/temps.size()<<endl;

    //compute median temperature
    sort(temps);
    cout<<"Median temperature: "<<temps[temps.size()/2]<<endl;




    vector<int> v = {5, 7, 9, 4, 6, 8};
    for (int x:v)
    {
        cout<<x<<endl;
    }

    vector<double> v;
     for (double x:v)
    {
        cout<<x<<endl;
    }

    v.push_back(2.7);
    for (double x:v)
    {
        cout<<x<<endl;
    }

    v.push_back(3.14);
    for (double x:v)
    {
        cout<<x<<endl;
    }

    v.push_back(1.618);
    for (double x:v)
    {
        cout<<x<<endl;
    }
    return 0;
   
}
*/

/*PAGE 116 TRY THIS
Program: To square a number by using addition operator

Step 1: Take a number as input from the user.
Step 2: 

int main()
{
    int number, added_number=0;
    cout<<"Enter the number: ";
    cin>>number;

    cout<<"The number you entered is: "<<number<<endl;

    for(int i=0; i<number; i++)
    {
        //cout<<"The i value is: "<<i<<endl;
        added_number+=number;
       // cout<<"The added number is: "<<added_number<<endl;
    }
    int squared_number=added_number;

    cout<<"The square of the number is: "<<squared_number<<endl;

    return 0;

}*/


