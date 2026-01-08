#include "..\..\Dependencies\Include\std_lib_facilities.h"
using namespace std;

/*PAGE 86 EXERCISE 6
Step 1: Take in the 3 integers from user
Step 2: Compare num1 and num2, store the smaller number in temp1
Step 3: Compare num2 and num3, store the smaller number in temp2
Step 4: Compare num1 and num3, store the smaller number in temp3
Step 5: Print temp1, temp2, temp3

Test cases: Step 2     Step 3     Step 4                Final Output

Case 1: 1 2 3--> num1<num2, num2<num3, num1<num3 --> num1<num2<num3 --> 1<2<3 ---> DONE
Case 2: 1 3 2--> num1<num2, num3<num2, num1<num3 --> num1<num3<num2 --> 1<2<3 ---> DONE
Case 3: 2 1 3--> num2<num1, num2<num3, num1<num3 --> num2<num1<num3 --> 1<2<3 ---> DONE
Case 4: 2 3 1--> num1<num2, num3<num2, num3<num1 --> num3<num1<num2 --> 1<2<3 ---> PROBLEMATIC
Case 5: 3 1 2--> num2<num1, num2<num3, num3<num1 --> num2<num3<num1 --> 1<2<3 ---> DONE
Case 6: 3 2 1--> num2<num1, num3<num2, num3<num1 --> num3<num2<num1 --> 1<2<3 ---> PROBLEMATIC

*/

int main()
{
    int num1, num2, num3;
    cout<<"Please enter three integer numbers (num1, num2, num3): \n";
    cin>>num1>>num2>>num3;

    int small, medium, large;

    if(num1<=num2)                  // Case 1, 2, 4
    {
        if(num2<=num3)              // Case 1
        {
            if(num1<=num3)          // Case 1
            {
                small = num1;
                medium = num2;  
                large = num3;
                
            }
        }
        else   //num3<num2 Case 2:
        {
            small = num1;
            medium = num3;
            large = num2;            
        }
    }

   else //num2<num1 Case 3, 5, 6
   {
        if (num2<=num3)   //Case 3, 5
        {
            if(num1<=num3) // Case 3
            {
                small = num2;
                medium = num1;
                large = num3;
            }
            else //num3<num1 Case 5
            {
                small = num2;
                medium = num3;
                large = num1;
            }
            
        }
        else //num3<num2 Case 6
        {
            if(num1<=num3)
            {
                small = num2;
                medium = num1;
                large = num3;
            }
        }
   }
    
    
    
    cout<<small<<" < "<<medium<<" < "<<large<<"\n";

   



}

/*PAGE 86 EXERCISE 5 ARITHMETIC OPERATIONS ON val1 and val2 

int main()
{
    cout<<"Please enter two numbers (val1 and val2): \n";
    double val1, val2;
    cin>>val1>>val2;
    cout<<val1<<" + "<<val2<<" = "<<val1+val2<<"\n"
        <<val1<<" - "<<val2<<" = "<<val1 - val2<<"\n"
        <<val1<<" * "<<val2<<" = "<<val1 * val2<<"\n"
        <<val1<<" / "<<val2<<" = "<<val1 / val2<<"\n";
 //       <<val1<<" % "<<val2<<" = "<<val1 % val2<<"\n";
    return 0;
}

*/

/*PAGE 86 EXERCISE 4 ARITHMETIC OPERATIONS ON val1 and val2 

int main()
{
    cout<<"Please enter two integer numbers (val1 and val2): \n";
    int val1, val2;
    cin>>val1>>val2;
    cout<<val1<<" + "<<val2<<" = "<<val1+val2<<"\n"
        <<val1<<" - "<<val2<<" = "<<val1 - val2<<"\n"
        <<val1<<" * "<<val2<<" = "<<val1 * val2<<"\n"
        <<val1<<" / "<<val2<<" = "<<val1 / val2<<"\n"
        <<val1<<" % "<<val2<<" = "<<val1 % val2<<"\n";
    return 0;
}

*/



/*PAGE 85: EXERCISE 3 MILES TO KILOMETERS

int main()
{
    cout<<"Please enter a distance in miles: \n";
    double miles;
    cin>>miles;
    double kilometers = miles * 1.609344;
    cout<<miles<<" miles is "<<kilometers<<" kilometers.\n";
    return 0;
}
    */

/*PAGE 83 DRILL 1

int main()
{
    string to_first_name, to_last_name;
    string from_first_name, from_last_name;

    cout<<"Enter the first and last name of the person you want to write to: \n";
    cin>>to_first_name>>to_last_name;

    cout<<"Enter the first and last name of the person you are writing from: \n";
    cin>>from_first_name>>from_last_name;

    cout<<"Enter the first name of the person you want to ask about: \n";
    string friend_name;
    cin>>friend_name;

    char friend_gender;
    string message;

    cout<<"Enter the gender of the friend (m or f): \n";
    cin>>friend_gender;


    if(friend_gender ='m')
        message = "Please ask him to call me.";
    if(friend_gender = 'f')
        message = "Please ask her to call me.";

        
    int age;
    cout<<"Enter the age of the recipient: \n";
    cin>>age;

    if(age<=0 || age>=110)
        simple_error("you're kidding!");

    string age_message;
    if(age<12)
        age_message = "Next year you will be " + to_string(age+1) + ".";
    if(age==17)
        age_message = "Next year you will be able to vote.";
    if(age>70)
        age_message = "I hope you are enjoying retirement.";

    cout<<"Dear "<<to_first_name<<" "<<to_last_name<<",\n\n"
        <<"How are you? I am fine. I miss you.\n"
        <<"Have you seen "<<friend_name<<" lately?\n"
        <<"If you see "<<friend_name<<" , "<<message<<"\n\n"
        <<"I hear you just had a birthday and you are "<<age+1<<" years old.\n"
        <<age_message<<"\n\n"
        <<"Yours sincerely,\n\n"
        <<"__________________,\n\n"
        <<from_first_name<<" "<<from_last_name<<"\n";
}

*/

/*PAGE 81 UNSAFE CONVERSIONS


int main()
{
    double x {2.7};
    int i {x};      // double to int
    cout<<"i == "<<i<<"\n";
    cout<<x<<"\n";
}
*/

/*PAGE 81 UNSAFE CONVERSIONS

int main()
{
    double d =0; 
    while (cin>>d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout<<"d == "<<d
            <<", i == "<<i
            <<", c == "<<c
            <<", i2 == "<<i2<<"\n";
    }
}*/

/* PAGE 80 UNSAFE CONVERSIONS

int main()
{
    int a = 25;
    char c = a;
    int b=c;
    if(a!=b)
    cout<<"oops!: "<<a<<" != "<<b<<"\n";
    else
    cout<<"Wow! We have a safe conversion \n";
}*/

/*PAGE 80 SAFE CONVERSIONS

int main()
{
    double d1 = -2.3;
    double d2 = d1+2;
    if (d1<0)
        cout<<"d1 is negative\n";

}*/


/*PAGE 79 SAFE CONVERSIONS

int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;
    
    cout<<"c = "<<c<<"\n";
    cout<<"i1 = "<<i1<<"\n";
    cout<<"i2 = "<<i2<<"\n";
    cout<<"c2 = "<<c2<<"\n";
}
*/


/*PAGE 75 FIND TRY THIS

int Main()
{
    STRING s = "Goodbye, cruel world!";
    cOut<<S<<'\n';
}
*/

/*PAGE 73 FIND REPEATED WORDS

int main()
{
    string previous = " ";
    string current;
    int repetitions = 0, number_of_words = 0;
    cout<<"Enter words: \n";
    while(cin>>current)
    {
        ++number_of_words;
        if(previous == current)
            cout<<"word number "<<number_of_words<<" repeated: "<<current<<"\n";
        previous = current; 
    }
     
    return 0;
}

*/



/*PAGE 73 TRY THIS

int main()
{
    int repetitions = 0;
    string previous = " ";
    string current;
    cout<<"Enter words: \n";
    while(cin>>current){
        if(previous == current)
            ++repetitions;
        previous = current; 
    }
    cout<<"Number of repeated words: "<<repetitions<<"\n";
    return 0;
}

*/


/*PAGE 71 DETECT REPEATED WORDS


int main()
{
    string previous = " ";
    string current;
    cout<<"Enter words: \n";
    while(cin>>current){
        if(previous == current)
        cout<<"repeated word: "<<current<<"\n";
        previous = current; 
    }
    return 0;
}

*/

/*PAGE 70 INITIALIZATION AND ASSIGNMENT

int main()
{
    int y = 8;
    cout<<"y: "<<y<<"\n";
    int x = y;
    cout<<"x: "<<x<<"\n";
    
    string t = "howdy!";
    cout<<"t: "<<t<<"\n";
    string s = "G'day!";
    cout<<"s: "<<s<<"\n";   
}

*/


/*PAGE 70 ASIGNMENT USING STRINGS

int main()
{
    string a = "alpha";
    cout<<"a: "<<a<<"\n";
    string b = a;
    cout<<"b: "<<b<<"\n";
    b = a + " gamma";
    cout<<"b: "<<b<<"\n";
    a = a + " delta";
    cout<<"a: "<<a<<"\n";
    return 0;   
}

*/


/*PAGE 69 ASSIGNMENT AND INITIALIZATION

int main()
{
    int a = 3;
    a = 4;
    cout<<"a: "<<a<<"\n";
    int b = a;
    cout<<"b: "<<b<<"\n";
    b = a+5;
    cout<<"b: "<<b<<"\n";
    a = a+7;
    cout<<"a: "<<a<<"\n";
    return 0;   
}*/


/*PAGE 68 - STRING COMPARISON

int main()
{
    cout<<"Please enter two names \n";
    string first, second;
    cin>>first>>second;
    if (first==second) cout<<"that's the same name twice \n";
    if(first<second) cout<<first<<" is alphabetically before "<<second<<"\n";
    if(first>second) cout<<first<<" is alphabetically after "<<second<<"\n";   
    return 0;   
}*/




/*PAGE 68 - STRING CONCATENATION

int main()
{
    cout<<"Please enter your first and second names \n";
    string first, second;
    cin>>first>>second;
    string name = first +' ' + second;
    cout<<"Hello, "<<name<<"!\n";
    return 0;   
}*/

 /*PAGE 67
int main()
{
   cout<<"Please enter a floating-point number: \n";
   double n; 
   cin>>n;
   cout<<"n == "<<n<<"\n"
         <<"\nn+ 1 == "<<n+1
         <<"\nthree times n == "<<3*n
         <<"\ntwice n == "<<2*n
         <<"\n n squared == "<<n*n<<"\n"
         <<"\nhalf of n == "<<n/2
         <<"\nsquare root of n == "<<sqrt(n)<<"\n";
   return 0;
         
}*/

 /*PAGE 65 - try this
int main()
{
    cout<<"Please enter your first name and age \n";
    string first_name, second_name;
    double age;
    cin>>first_name>>second_name>>age;
    cout<<"Hello, "<<first_name<<" "<<second_name<<" (age "<<age*12<<")\n";
    return 0;
}*/

 /*PAGE 65
int main(){
    cout<<"Please enter your first name and age \n";
    string first_name, second_name;
    int age;
    cin>>first_name>>second_name>>age;
    cout<<"Hello, "<<first_name<<" "<<second_name<<" (age "<<age<<")\n";
    return 0;
}*/


/* PAGE 64
int main(){
    cout<<"Please eneter your first name and age \n";
    string first_name;
    int age;
    cin>>first_name>>age;
    cout<<"Hello, "<<first_name<<" (age "<<age<<")\n";
    return 0;
}*/



