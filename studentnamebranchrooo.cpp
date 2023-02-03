#include<iostream>
using namespace std;
class student
{
        private:
        char name[20],regd[10],branch[10];
        int sem;
        public:
        void input();
        void display();        
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Roll number:";
        cin>>regd;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter Sem:";
        cin>>sem;
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nRoll number:"<<regd;
        cout<<"\nBranch:"<<branch;
        cout<<"\nSem:"<<sem;
}
int main()
{
        student s;
        s.input();
        s.display();
}
