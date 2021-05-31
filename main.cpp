#include <iostream>
#include <conio.h>
using namespace std;

class emp
{
    public:
    int eno;
    char name[20],des[20];
    void getInfo()
    {
        cout<<"Enter the employee number:";
        cin>>eno;
        cout<<"Enter the employee name:";
        cin>>name;
        cout<<"Enter the job title:";
        cin>>des;
    }
};

class salary:public emp
{
    float basicPay, UIF, tax, providentFund, netPay, totalDeductions;
    public:
    void getSalary()
    {
        cout<<"Enter the basic pay:";
        cin>>basicPay;
        cout<<"Enter the UIF:";
        cin>>UIF;
        cout<<"Enter the Tax amount:";
        cin>>tax;
        cout<<"Enter the Provident Fund:";
        cin>>providentFund;
    }
    void calculateNet()
    {
        totalDeductions = UIF + tax + providentFund;
        netPay = basicPay - totalDeductions;
    }
    void display()
    {
        cout<<eno<<"\t "<<name<<"\t "<<des<<"\t "<<basicPay<<"\t         "<<UIF<<
        "\t "<<tax<<"\t "<<providentFund<<"\t         "<<netPay<<"\n";
    }
};

int main()
{
    int i,n;
    char ch;
    salary s[10];
    cout<<"Enter the number of employees:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].getInfo() ;
        s[i].getSalary() ;
        s[i].calculateNet() ;
    }
    cout<<"\nE_no \t E_name\t des\t basicPay\t UIF\t tax\t providentFund\t netPay \n";
    for(i=0;i<n;i++)
    {
        s[i].display();
    }
    getch();
}
