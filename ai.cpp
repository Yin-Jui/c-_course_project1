#include<iostream>
#include<string>
#include<cstdio>
#include<sstream>
#include<vector>
#include<ctime>
#include<cstdlib>
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

    int Time,mana,tower_num,frinum=0,enenum=0,condition;
    unsigned counter=1;

    char deck1,deck2,deck3,deck4,period;

    vector<int>tower(7,0);

    allies all[5];

    enemies ene[5];

    cout<<"9 6 5 3 7 2 4 8"<<endl;

    while(1) {

        while(1) {
            frinum=0;
            enenum=0;
            string input,tmp;

            getline(cin,input);

            if(input == "END") {
                break;
            }


            stringstream ss(input);

            ss>>tmp;

            if(tmp == "TIME") {
                ss>>Time;
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

        if(tower[5]==0) {
            break;
        }

        srand((unsigned)time(NULL));

        condition=rand()%1;
        if(tower[4]<20) {
            condition=0;
        }

        if(tower[5]<20) {
            condition=0;
        }
        switch(condition) {

        case 1:

            if(mana==0) {
                cout<<0<<endl;
            }

            if(mana>=1) {
                if(deck1=='5'||deck2=='5'||deck3=='5'||deck4=='5') {
                    cout<<"1 5 5 11"<<endl<<0<<endl;
                    mana-=1;
                }
            }


            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 5 11"<<endl<<0<<endl;
                    mana-=3;
                }
            }

            if(mana>=4) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 5 15"<<endl<<0<<endl;
                    mana-=4;
                }
            }


            if(mana>=6) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 5 20"<<endl<<0<<endl;
                    mana-=6;
                }
            }

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 5 20"<<endl<<0<<endl;
                    mana-=8;
                }
            }
            break;
        case 0:

            if(mana==0) {
                cout<<0<<endl;
            }

            if(mana>=1) {
                if(deck1=='5'||deck2=='5'||deck3=='5'||deck4=='5') {
                    cout<<"1 5 15 11"<<endl<<0<<endl;
                    mana-=1;
                }
            }


            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 15 11"<<endl<<0<<endl;
                    mana-=3;
                }
            }

            if(mana>=4) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 15 15"<<endl<<0<<endl;
                    mana-=4;
                }
            }


            if(mana>=6) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 15 20"<<endl<<0<<endl;
                    mana-=6;
                }
            }

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 15 20"<<endl<<0<<endl;
                    mana-=8;
                }
            }
            break;

        }

    }
    return 0;
}



