#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <ctime>

#define WRONGTRIES 5
using namespace std;

void DrawMan(int tries){
    cout<<"  -----"<<endl;
    cout<<"  |   |"<<endl;
    cout<<"  |"; if(tries>=1) cout<<"   o   "; cout<<endl;
    cout<<"  |"; if(tries>=3) cout<<"  /|\\  "; cout<<endl;
    cout<<"  |"; if(tries>=5) cout<<"  / \\   "; cout<<endl;
    cout<<"  |"<<endl;
    cout<<"__|_"<<endl;
}

int main(){

    return 0;
}