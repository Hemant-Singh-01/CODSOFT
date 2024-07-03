#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int randomNumber = rand() % 5 + 1; // Generate the random number
    int num=0;
    for (int i=0; i<5; i++)
    {
        cout<<"You have "<<5-i<<" chance to guess"<<endl;
        cout<<"Guess the number between 1 to 10"<<endl;
        cin>>num;
        if (num==randomNumber)
        {
            cout<<"You Guessed it Right"<<endl;
            break;
        }
        else if (i==4 and num!=randomNumber)
        {
            cout<<"You ran out of chance!!!"<<endl;
        }
        else if (num>10 or num<1)
        {
            cout<<"You have entered no. out of range"<<endl;
            cout<<"TRY AGAIN!"<<endl;
        }
        else if (num<randomNumber)
        {
            cout<<"Guess Too Low!!! TRY AGAIN"<<endl;
        }
        else if (num>randomNumber)
        {
            cout<<"Guess Too High!!! TRY AGAIN"<<endl;
        }
    }
    cout<<"The number was:"<<randomNumber<<endl;
    return 0;
}
