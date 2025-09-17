#include<iostream>
using namespace std;
int main(){

    int speed = 9;
    char name= 'a';
    bool issafe=true;
    
    cout <<sizeof(issafe)<<endl;


    cout<<"HelloWorld"<<endl;
    cout<<"Swapneel"<<endl;
    cout<<"NWC"<<endl;

    for(int i=0;i<=5;i++){
        cout<<i<<endl;
    }

    int j= 0;
    while(j<=5){
        cout<<j<<endl;
        j++;
    }

    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
    cout<<"You are eligible to vote"<<endl;
    }else{
        cout<<"You are not elibgible to vote"<<endl;
    }

}