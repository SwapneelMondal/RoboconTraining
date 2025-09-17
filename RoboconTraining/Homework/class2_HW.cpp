#include<iostream>
#include<string>
using namespace std;
class robot{
    public:
    string name;
    int battery;

    robot(){
        name = "Alpha";
        battery = 100;
    }

    void performTask(){
        cout<<"The robot performed a task"<<endl;
        battery-=10;
        if(battery<=0){
            cout<<"The robot does not have sufficient charge"<<endl;
        }
    }
    void displayStatus(){
        cout<<"The name of the robot is "<<name<<endl;
        cout<<"The battery of the robot is "<<battery<<endl;
    }

    ~robot(){
        cout<<"The robot was shutdown!"<<endl;
    }
};

int main(){
    robot r1;
    r1.displayStatus();
    r1.performTask();
    r1.displayStatus();
    
    return 0;
}
