#include "Board.hpp"
using namespace ariel;
#include <iostream>
using namespace std;
#include "Direction.hpp"


int main(){
    Board board;
    cout<<"welcome to our station"<<endl;
    cout<<"we are so sorry for what happened to you"<<endl<<"we hope your visit won't be long" <<endl<<"and you can come back home quickly As possible "<<endl;
    cout<<"for each qustion, enter the matching number,"<<endl<<" press 1 to continue"<<endl;
    int start;
    int male;
    int shirt;
    cin>>start;
    if(start!=1){
        cout<<"we are here to help, there is no need to be afraid"<<endl;
    }
    board.post(2,15,Direction::Horizontal,"WANTED:");
    cout<<"enter the maching number: \nwhat was the color of the thief? \n1: brown \n2: blond \n3: black  \n4: bold"<<endl;
    cin>>start;
    cout<<"enter the maching number: \n1: the thief was a male\n2: the thief was a woman"<<endl;
    cin>>male;
    cout<<"enter the maching number:\nwhat was the color of the thief's shirt?\n1: brown \n2: red \n3: blue\n4: black"<<endl;
    cin>>shirt;
    if(male==1){
        board.post(4,1,Direction::Horizontal,"a violent man following the next description:");
    }
    else if(male==2){
        board.post(6,1,Direction::Horizontal,"a violent woman following the next description:");
    }
    if(start==1){
        board.post(6,1,Direction::Horizontal,"a long brown hair");
    }
    else if(start==2){
        board.post(6,1,Direction::Horizontal,"a long blont hair");
    }
    else if(start==3){
        board.post(6,1,Direction::Horizontal,"a long black hair");
    }
    else if(start==4){
        board.post(6,1,Direction::Horizontal,"completly bold");
    }
    if(shirt==1){
        board.post(8,1,Direction::Horizontal,"wearing a very dirty brown shirt");
    }
    else if(shirt==2){
        board.post(8,1,Direction::Horizontal,"wearing a very dirty red shirt");
    }
    else if(shirt==3){
        board.post(8,1,Direction::Horizontal,"wearing a very dirty blue shirt");
    }
    else if(shirt==4){
        board.post(8,1,Direction::Horizontal,"wearing a very dirty black shirt");
    }
    board.post(10,1,Direction::Horizontal,"if you know anyting about this person, ");
    board.post(11,1,Direction::Horizontal,"don't hesitate and call us immidiatly");
    
    cout<<"Thank you for your cooperation \n"<<endl;
    cout<<"enter 1 to see yout post"<<endl;
    cin>>start;
    if(start==1){
        board.show();
    }
}





    
