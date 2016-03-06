#include "board.h"
#include <iostream>

using namespace std;

Board* Board::Addr=NULL;

Board* Board::Instance(){
    if(Addr==NULL){
        Addr=new Board();
    }

    return Addr;
}

Board::Board()
{
    for(int i=0;i<20;i++)
        for(int j=0;j<40;j++)
            kotak[i][j]=NULL;
}

void Board::TampilkanBoard()
{
    for(int i=0;i<42;i++)
        cout<<"_";
    cout<<endl;
    for(int i=0;i<20;i++){
        cout<<"|";
        for(int j=0;j<40;j++){
            if(kotak[i][j]==NULL){
                cout<<" ";
            }else{
                kotak[i][j]->muncul();
            }

        }
        cout<<"|"<<endl;
    }

    for(int i=0;i<42;i++)
        cout<<"_";
    cout<<endl;
}
