// Qno2: Write a program to check whether a character is an uppercase letter, a lowercase letter, or a numeric digit.

#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter a character : ";
cin>>ch;

if(ch>='a' && ch<='z'){
    cout<<"Lower case";
}else if(ch>='A' && ch<='Z'){
    cout<<"Upper case";
}else if(ch>='0' && ch<='9'){
    cout<<"Numeric";
}

return 0;

}

                                //    Pattern Questions
                                