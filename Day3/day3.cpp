// 1
// AAAA
// BBBB
// CCCC
// DDDD

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){

    char ch='A'+i-1;
    int j=1;
    while(j<=n){
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 2
// ABCD
// ABCD
// ABCD
// ABCD

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){

    int j=1;
    while(j<=n){
        char ch='A'+j-1;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 3
// ABC
// DEF
// GHI

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
char ch='A';
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<ch;
        ch++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 4
// ABC
// BCD
// CDE

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){

    int j=1;
    while(j<=n){
        char ch= j+i+'A'-2;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 5
// A
// BB
// CCC
// DDDD
// EEEEE

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+i-1;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

//  6
//  A
//  BC
//  DEF
//  GHIJ

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
char ch='A';
int i=1;
while(i<=n){

    int j=1;
    while(j<=i){
        cout<<ch;
        ch++;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}


//  7
//  A
//  BC
//  CDE
//  DEFG
//  EFGHI
//  int n;

#include<iostream>
using namespace std;

int main(){
int i=1;
int n;
cout<<"Enter a number :";
cin>>n;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch= j+i+'A'-2;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 8
// 4
// 34
// 234
// 1234

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<n-i+j;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}


//  9
//  D
//  CD
//  BCD
//  ABCD

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number :";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        char ch='A'+n-1 -i+j;
        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}

// 10
//      *
//     **
//    ***
//   ****
//  *****

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int i=1;
while(i<=n){

    int space = n-i;
    while(space){
        cout<<" ";
        space--;
    }

    int j=1;
    while(j<=i){
        cout<<"*";
        j++;
    }

    cout<<endl;
    i++;
}
return 0;
}

// 11
// ***
// **
// *

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int i=1;
while(i<=n){

    int star = n-i+1;
    int j=1;
    while(j<=star){
        cout<<"*";
        j++;
    }

    cout<<endl;
    i++;
}
return 0;
}

//  12
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int i=1;
while(i<=n){

    int space = i-1;
    while(space){
        cout<<" ";
        space--;
    }

    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j++;
    }

    cout<<endl;
    i++;
}
return 0;
}

//  13
//  11111
//   2222
//    333
//     44
//      5

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number : ";
cin>>n;
int i=1;
while(i<=n){

    int space = i-1;
    while(space){
        cout<<" ";
        space--;
    }

    int j=1;
    while(j<=n-i+1){
        cout<<i;
        j++;
    }

    cout<<endl;
    i++;
}
return 0;
}
