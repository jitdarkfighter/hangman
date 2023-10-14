#include<iostream>
#include<vector>
#include<string>
#include "hangman_funcs.h"
using namespace std;
int main(){
    greet();
    string codeword;
    cout<<"\nEnter the word: ";
    cin>>codeword;
    // string ans="_____";
    string ans="";
    for(int i=0;i<codeword.length();i++)
    ans=ans+"_";
    int miss=0;
    vector<char> incorrect;
    bool guess = false;
    char letter;

    while(ans!=codeword && miss<7){
        display_misses(miss);
        display_status(incorrect, ans);

        cout<<"\n\nPlease enter your guess: ";
        cin>>letter;

        for(int i=0;i<codeword.length();i++){
            if(letter==codeword[i]){
                ans[i]=letter;
                guess=true;
            
        }
        }
        if(guess){
            cout<<"\n"<<codeword<<"\n";
            cout<<"\nCorrect\n";

        }
        else{
            cout<<"\nIncorrect, Another portion of the person has been drawn\n";
            incorrect.push_back(letter);
            miss++;

        }
        guess=false;
    }
    end_game(ans, codeword);
    return 0;
}