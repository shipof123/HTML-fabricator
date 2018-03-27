#include <iostream>
#include <stdio.h>
/*#include "html.h"     //includes from other headers
*/
void cls()
{
    for(int i=1;i<26;i++)
    printf("\n");
}
int main()
{
    using namespace std;
    cout<<"WELCOME to REALLY BAD PROGRAM Shipof MADE!!!!"<<endl;
    cout <<"--------------------------------------------"<<endl;
    char answer;
    while(1)
    {
        cout<<"Please select an option "<<endl;
        cout<<"\t\t1-Create new project"<<endl;
        cout<<"\t\t2-Append old project"<<endl;
        cout<<"\t\t3-Quir"<<endl;
        cin>>answer;
        switch(answer)
            case "1":
                //function call
            case "2";
                //function call
            case "3":
                break;
        default:
        cls();
    }
    return 0;
}
