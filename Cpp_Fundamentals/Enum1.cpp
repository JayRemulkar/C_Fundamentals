#include<iostream>

using namespace std;

int main()
{   
    int input = 0;
    //          0   1   2   3    4   5   6
    /*enum days {sun,mon,tue,wed,thus,fri,sat};

    enum days obj;

    obj = tue;*/

    //cout<<sizeof(days)<<"\n";
    //cout<<obj<<"\n";

    enum Gender {MALE = 1 ,FEMALE = 2};

    //enum Gender input;

    cout<<"enter your gender \n";
    cout<<"MALE \n";
    cout<<"FEMALE \n";

    cin>>input;

    switch(input)
    {
        case MALE:
            cout<<"cash limit 10 \n";
            break;

        case FEMALE:
            cout<<"cash limit is 20 \n";
            break;

        default:
            cout<<"invalid input \n";
         
    }   
    return 0;
}