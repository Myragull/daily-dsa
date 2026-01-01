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


// 2 even or odd
#include<iostream>
using namespace std;

string checker(int a){
    if(a%2==0){
     return "Even";
    }else{
      return"odd";
    }
}

int main(){
int n;
cout<<"Enter value : ";
cin>>n  ;
cout<<"Answer : "<<checker(n);
return 0;
}

// 3

#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int nCr(int n, int r)
{
    int nf=factorial(n);
    int rf=factorial(r);

    int diff = n - r;
    int nrf=factorial(diff);

    int nCr = nf / (rf * nrf);
    return nCr;
}

int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    int r;
    cout << "Enter r : ";
    cin >> r;

    int ans = nCr(n, r);
    cout << "nCr : " << ans;

    return 0;
}

