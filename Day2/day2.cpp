// Qno1: Write a program to check whether a character is an uppercase letter, a lowercase letter, or a numeric digit.

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
// 1 print following pattern of loops

// ****
// ****
// ****
// ****

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
    cout<<"*";
    j++;
}
cout<<endl;
i++;
}
}


// 2 : Print the following patterns:
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4
//  1 2 3 4

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
    cout<<j;
    j++;
}
cout<<endl;
i++;
}
}

// 3
// 54321
// 54321
// 54321
// 54321
// 54321
// 54321

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
    cout<<n-j+1;
    j++;
}
cout<<endl;
i++;
}
}

// 4
//  1 2 3
//  4 5 6
//  7 8 9

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
int count=1;
while(i<=n){
int j=1;
while(j<=n){
    cout<<count<<" ";
    count++;
    j++;
}
cout<<endl;
i++;
}
}


// 5
//  *
//  **
//  ***
//  ****
//  *****

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
    cout<<"*";
    j++;
}
cout<<endl;
i++;
}
}


// 5
//  1
//  22
//  333
//  4444
//  55555

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
    cout<<i;
    j++;
}
cout<<endl;
i++;
}
}

// 6
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;

int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int count=1;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
    cout<<count;
    count++;
    j++;
}
cout<<endl;
i++;
}
}


// 7
// 1
// 23
// 345
// 4567
// 56789

#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter number : ";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=i){
    cout<<j+i-1;
    j++;
}
cout<<endl;
i++;
}
}


// 8
// 1
// 2  1
// 3  2  1
// 4  3  2  1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
