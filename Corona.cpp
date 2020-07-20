#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    int age,response1,response2,response3;
    cout<<endl<<"CORONA      CORONA     CORONA     CORONA     CORONA    CORONA       CORONA      CORONA     CORONA    CORONA     CORONA"<<endl;
    cout<<endl<<"Hey,My name is Sanprit Nayan and I am here for your medical test"<<endl<<endl;
    cout<<"Hey buddy, how are you doing, please enter your name"<<endl<<endl;
    cin>>name;
    cout<<endl<<"Your age?"<<endl<<endl;
    cin>>age;

    cout<<endl<<"Do you have any breathing problem?<<<<>>>>if yes then enter 1 or else 0"<<endl;
    cin>>response1;

    cout<<endl<<"Do you have cold?<<<<>>>>if yes then enter 1 or else 0"<<endl;
    cin>>response2;

    cout<<endl<<"Do you have fever?<<<<>>>>if yes then enter 1 or else 0"<<endl;
    cin>>response3;

    if(response1==1||response2==1||response3==1)
        {
            cout<<endl<<"Hey "<<name<<", please consult the doctor nearby you urgently."<<endl;
            cout<<"Hey "<<name<<", please consult the doctor nearby you urgently."<<endl;
        }
    else
        cout<<endl<<"Hey "<<name<<", till now,it seems okay but please quarantine yourself for better safety of yours and the world"<<endl;


    return 0;
}
