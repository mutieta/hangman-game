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
    srand(time(NULL));
    string wordList[5] = {"apple","peach","banana","mango","strawberry"};
    string word;
    string guessed;
    
    word = wordList[rand()%5];

    int wordLength = word.length();
    string disWord (wordLength, '_');

    int found = 0;
    char guess = ' ';
    int tries = 5; 
    int flagFound = 0;

    while(tries>=0){
        system("cls");
        cout<<"Guess Fruit Name: "<<endl<<endl;

        for(int i=0; i<wordLength; i++)
            cout<<" "<<disWord[i]<<" ";
        cout<<endl<<endl<<endl;

        cout<<"Wrong Attempts: "<<tries<<" / "<<WRONGTRIES<<endl;
        cout<<"Guessd Letters: "<<guessed<<endl;

        DrawMan(tries);

        if( found == wordLength){
            cout<<endl;
            cout<<"****************"<<endl;
            cout<<"*   YOU WIN    *"<<endl;
            cout<<"****************"<<endl;
            break;
        }

        if( tries == 0) break;

        cout<<"Pick a Letter: ";
        guess = getche();

        guessed = guess + " " + guess;

        if( disWord.find(guess) != string::npos ) tries++;

        flagFound = 0;
        for (int i=0; i<wordLength; i++){
            if( word[i]==guess && disWord[i]=='_'){
                disWord[i] = guess;
                found++;
                flagFound = 1;
            }
        }
        if( !flagFound )
            tries--;
    }
    if( found != wordLength ){
        cout<<endl;
        cout<<"****************"<<endl;
        cout<<"*   YOU LOSE   *"<<endl;
        cout<<"****************"<<endl;
    }
    
    getch();
    return 0;
}