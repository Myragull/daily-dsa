// 1 Switch case qs
// Mini Calculator

#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter number 1 : " << endl;
    cin >> num1;
    int num2;
    cout << "Enter number 2 : " << endl;
    cin >> num2;
    cout << "Enter from the following operators : + , - , * , % , /  :  ";
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "Answer : " << num1 + num2;
        break;
    case '-':
        cout << "Answer : " << num1 - num2;
        break;
    case '*':
        cout << "Answer : " << num1 * num2;
        break;
    case '/':
        cout << "Answer : " << num1 / num2;
        break;
    case '%':
        cout << "Answer : " << num1 % num2;
        break;
    default:
        cout << "Enter valid operator :";
        break;
    }
}

       // Functions

// 1 power(a,b)
#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    for(int i=1; i<=b; i++){
    ans=ans*a;
    }
    return ans;
}

int main(){
 int a;
cout<< "Enter value of a : ";
cin>>a;
int b;
cout<<"Enter value of b : ";
cin>>b;
int ans1=power(a,b);
cout<<"Answer : "<<ans1;
return 0;
}