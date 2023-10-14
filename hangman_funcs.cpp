#include<iostream>
#include<vector>
#include "hangman_funcs.h"
using namespace std;

//defining functions
void greet(){
    cout<<"^^^^^^^^^^^^^^\n";
    cout<<"  Hangman\n";
    cout<<"Save the man from being hanged by guessing the correct letters in the codeword";
}
void display_misses(int misses)
{
  if(misses==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(misses==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
}

void display_status(vector<char> incorrect,string ans){
  cout<<"Incorrect Guesses: \n";
  
  for(int i=0; i< incorrect.size();i++)
  cout<<incorrect[i]<<" ";

  cout<<"\nCodeword:\n";

  for(int i=0;i<ans.length(); i++)
  cout<<ans[i]<<" ";
}

void end_game(string ans, string codeword)
{
  if(ans==codeword)
  {
    cout<<"Hooray! You saved the person from being hanged and earned a medal of honor!\n";
    cout<<"Congratulations!\n";
  }
  else
  {
    cout<<"On no! The man is hanged!\n";
  }
}
