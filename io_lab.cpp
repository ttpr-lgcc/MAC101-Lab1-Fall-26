#include <iostream>
#include<string> //needed to use std::string
#include<iomanip>//needed for set precision and fixed
using namespace std;//so i dont have to type std:: before every cin and cout
int main(){
    string name;//string for text
    double GPA;//double for numbers with decimals
cout<<"What is your name?\n";//\n to go to next line
getline(cin, name);//getline(input stream, string variable-in this case name)
cout<<"Hello " <<name<< ", nice to meet you. \n";
cout<<"What is your GPA?\n";
cin>>GPA;
cout<<"Wow " <<name<<", your GPA is "<<fixed<<setprecision(1)<<GPA<<". You got this! Don't forget to use student resources!";
return 0;
}
