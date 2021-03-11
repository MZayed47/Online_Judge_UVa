#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int count=0;

    while(getline(cin,input)){
        if(input == "*"){
            break;
        }

        count++;

        if(input=="Hajj"){
            cout<<"Case "<<count<<": Hajj-e-Akbar"<<endl;
        }
        else if(input=="Umrah"){
            cout<<"Case "<<count<<": Hajj-e-Asghar"<< endl;
        }
    }

    return 0;
}
