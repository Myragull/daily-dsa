            //  Qno 1:
    // calculate length of a string?
#include<iostream>
using namespace std;
int length(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
char name[20];
cout<<"Enter your name:";
cin>>name;

cout<<length(name);
}
