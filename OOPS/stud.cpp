#include<iostream>
using namespace std;
class stud
{
    private:
        int age;
    public:
        int roll;
    public :
    void dis(){
        cout<<age<<" "<<roll;
    }
    int ga(){
        return age;
    }
    int giveage(int x){
        age=x;
    }
};

