#include <iostream>
using namespace std;
int main() {
    float num1,num2,opr,Res;
    cout<<"Enter your First no."<<endl;
    cin>>num1;
    cout<<"Enter your Second no."<<endl;
    cin>>num2;
    cout<<"Choose operation you want to perform:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide"<<endl;
    cin>>opr;
    if (num2==0 and opr==4)
    {
        cout<<"We can't divide by Zero"<<endl;
    }
    else if (opr==4)
    {
        cout<<"Answer is:"<<num1/num2<<endl;
    }
    else if (opr==3)
    {
        cout<<"Answer is:"<<num1*num2<<endl;
    }
    else if (opr==2)
    {
        cout<<"Answer is:"<<num1-num2<<endl;
    }
    else if (opr==1)
    {
        cout<<"Answer is:"<<num1+num2<<endl;
    }
    else
    {
        cout<<"Invalid Operator Selected"<<endl;
    }
    return 0;
}
