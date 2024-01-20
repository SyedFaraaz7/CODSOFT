#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
    int guess = rand()%100+1;
    int num = 0;
    int time = 7;
    int a = 1;
    cout<<"Welcome to the guessing game:"<<endl;
    cout<<"Guess a number between 1 to 100"<<endl;
    do{
        cout<<"Turns remaining "<<time+1<<endl;
        cin>>num;

        if(num==guess)
        {
            cout<<"Congartulations you won!"<<endl;
            a=0;
        }
            else if(num>guess)
            {
                cout<<"Enter a smaller number "<<endl;
            }

            else if(num<guess)
            {
                cout<<"Enter a larger number "<<endl;
            }

    
    
    }
    while(a==1 && time--);

    if(num!=guess)
    {cout<<"Oops! You are out of turns."<<endl;
    }
    return 0;
}












