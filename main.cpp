#include<iostream>

using namespace std;

class habit{
    private:
    int id;
    string hname;
    int streak;
    public:
    habit(){
    
        cout<<"Enter Task and Id : ";
        getline(cin,hname);
        cin>>id;
        streak=0;
        cout<<"Habit Created : "<<hname<<endl;
    
    }
    ~habit(){
    cout<<"Habit Destroyed "<<hname<<endl;
    }


    void markcomplete();

    inline int getstreak(){

    return streak;
}

    
    friend void display();
};

void habit::markcomplete(){
    streak++;
    cout<<"mark completed"<<endl;
}


int main(){

    habit h1;
    h1.markcomplete();
    habit h2(h1);

    h2.markcomplete();
    return 0;
}