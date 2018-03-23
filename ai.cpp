#include<iostream>
#include<string>
#include<cstdio>
#include<sstream>
#include<vector>

using namespace std;

class allies {
  public:
    int id,pos_x,pos_y,HP;

    allies() {

        id=0;
        pos_x=0;
        pos_y=0;
        HP=0;
    }
}	;


class enemies {
  public:

    int id,pos_x,pos_y,HP;

    enemies() {

        id=0;
        pos_x=0;
        pos_y=0;
        HP=0;
    }

};

int main() {

    int time,mana,tower_num,frinum=0,enenum=0;

    char deck1,deck2,deck3,deck4,period;

    vector<int>tower(7,0);

    allies all[5];

    enemies ene[5];

    cout<<"9 6 3 7 5 2 4 8"<<endl;

    //  while(1) {

    while(1) {

        string input,tmp;

        getline(cin,input);

        if(input == "END") {
            break;
        }


        stringstream ss(input);

        ss>>tmp;

        if(tmp == "TIME") {
            ss>>time;
        }
        if(tmp == "MANA") {
            ss>>mana;
        }

        if(tmp == "DECK") {
            ss>>deck1;


            ss>>deck2;
            ss>>deck3;
            ss>>deck4;
        }

        if(tmp == "TOWER") {
            ss>>tower_num;
            ss>>tower[tower_num];
        }
        if(tmp == "FRIEND") {
            ss>>all[frinum].id;
            ss>>tmp;
            ss>>all[frinum].pos_x;
            ss>>period;
            ss>>all[frinum].pos_y;
            ss>>tmp;
            ss>>all[frinum].HP;
            frinum++;
        }

        if(tmp == "ENEMY") {
            ss>>ene[enenum].id;
            ss>>tmp;
            ss>>ene[enenum].pos_x;
            ss>>period;
            ss>>ene[enenum].pos_y;
            ss>>tmp;
            ss>>ene[enenum].HP;
            enenum++;
        }

    }

    /*       if(mana>=2) {
               cout<<"1 3 5 23"<<endl<<0;
           }
           if(mana>=2) {
               cout<<"1 3 15 23"<<endl<<0;
           }

           if(mana>=3) {
               cout<<"1 9 5 12"<<endl<<0;
           }

           if(mana>=1) {
               cout<<"1 9 5 10"<<endl<<0;
           }

           if(mana>=4) {
               cout<<"1 6 5 20"<<endl<<0;
           }

           if(mana>=4) {
               cout<<"1 6 15 20"<<endl<<0;
           }

           if(mana>=2&&mana<8) {
               cout<<"1 3 15 23"<<endl<<0;
           }

           else {
               cout<<"1 7 15 23"<<endl<<0;
           }

           if(mana>=2&&mana<8) {
               cout<<"1 3 5 23"<<endl<<0;
           }

           else {
               cout<<"1 7 5 23"<<endl<<0;
           }
       }
       //	 if(tower[6]!=8000){

       //  cout<<"1 8 15 12";}

    */

    //  cout<<tower[1]<<" "<<tower[2]<<endl;
//	cout<<all[0].id<<" "<<all[0].pos_x<<" "<<all[0].pos_y<<" "<<all[0].HP<<endl;
    //    cout<<time<<mana<<endl<<deck1<<endl<<deck2<<deck3<<deck4<<endl ;

    return 0;
}





