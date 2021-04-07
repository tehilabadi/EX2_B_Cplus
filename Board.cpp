#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
#include <unordered_map>
using namespace std;
namespace ariel{
        Board::Board(){
        minRight = minBottom = 0;
        maxLeft = maxTop = __INT_MAX__;
    };
        void Board::setForPost(unsigned int raw,unsigned int cul,Direction Dir, unsigned int nummOfChar){ 
        if(Dir==Direction::Horizontal&&cul+nummOfChar>minRight){
            minRight = cul+nummOfChar;
        }
        else if(Dir==Direction::Vertical&&raw+nummOfChar>minBottom){
            minBottom=raw+nummOfChar;
        }
        if (cul<maxLeft){
            maxLeft = cul;

        }
        if (raw<maxTop){
            maxTop = raw;
        }

    }
    void Board::post(unsigned int raw, unsigned int cul, Direction Dir, string myPost){
        setForPost(raw,cul,Dir, myPost.length());
        if(Dir == Direction::Horizontal){
            for (unsigned int i = 0; i < myPost.length(); i++)
            {
                board[raw][cul+i] = myPost[i];
            }
        }
        else{
            for (unsigned int i = 0; i < myPost.length(); i++)
            {
                board[raw+i][cul] = myPost[i];
            }
        }
    }
        string Board::read(unsigned int raw, unsigned int cul, ariel::Direction Dir,int numOfChar ){
            unsigned int temp = (unsigned int)numOfChar;
            string ans = read(raw,cul,Dir,temp);
            return ans;
        }

    string Board::read(unsigned int raw, unsigned int cul, ariel::Direction Dir, unsigned int numOfChar ){
        if(numOfChar==0){
            return "";
        }
        string ans;
        if(Dir==Direction::Horizontal){
            for (unsigned int i = 0; i < numOfChar; i++)
            {
                if(board.find(raw)==board.end()||board.empty()||board[raw].empty()||board[raw].find(cul+i) == board[raw].end()){
                ans+='_';
                }
                else{
                ans+=board[raw][cul+i];
                }
            }
        }
        else{
            for (unsigned int i = 0; i < numOfChar; i++)
            {
                
                if(board.empty()||board[raw+i].empty()||board[raw+i].find(cul) == board[raw+i].end()){
                ans+='_';
                }
                else{
                ans+=board[raw+i][cul];
                }            
                }
            
        }
        return ans;
    }
    void Board::show(){


    
            for (unsigned int i = maxTop; i <=minBottom; i++)
            {
                for (size_t j = maxLeft; j <minRight ; j++)
                {
                if(board.find(i)==board.end()||board.empty()||board[i].empty()||board[i].find(j) == board[i].end()){
                cout<<'_';
                }
                else{
                cout<<board[i][j];
                }
          }
            cout<<"\n";

}
    }
    }


    //     unsigned int t = maxLeft-minRight;
    //     for (size_t i = maxTop; i <= minBottom; i++)
    //     {
    //     string temp = read(i,maxLeft,Direction::Horizontal,t);
    //     //cout<<maxTop<<endl;
    //     //cout<<minBottom<<endl;
    //     cout<<maxLeft<<endl;
    //     cout<<minRight<<endl;
    //    // cout<<i<<endl;
    //     // cout<<temp<<endl;

        
        




