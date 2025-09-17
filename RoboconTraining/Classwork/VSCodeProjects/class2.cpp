#include<iostream>
#include<string>
using namespace std;
class motor{
    public:
    int speed;
    string type;

    motor(int s,string t){
        speed=s;
        type=t;
    }
    void display(){
        cout<<"The speed of the motor is "<<speed<<endl;
        cout<<"The motor is a "<<type<<" motor"<<endl;

    }

    void changeSpeed(int n){
        cout<<"Speed of motor has been changed to "<<n<<endl;
    }

    void changeMotorType(string s){
        cout<<"The motor has been changed to a  "<<s<<" motor"<<endl;
    }
    void useMotor(string s){
        if(s=="stepper"){
            cout<<"The stepper motor was used to make a 3D printer"<<endl;
        }else if(s=="servo"){
            cout<<"The servo motor was used in CNC machinery"<<endl;
        }else if(s=="BLDC"){
            cout<<"The BLDC was used to make a drone"<<endl;
        }else if(s =="induction"){
            cout<<"The induction motor was used to make a drone"<<endl;
        }else{
            cout<<"Invalid motor type"<<endl;
        }
    }

};

int main(){
    motor m1(50,"stepper");
    m1.display();
    m1.changeSpeed(100);
    m1.changeMotorType("servo");
    m1.useMotor("servo");

    return 0;
}