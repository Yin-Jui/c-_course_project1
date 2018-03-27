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

    int Time,mana,tower_num,frinum=0,enenum=0,condition,probality;
    unsigned counter=1;

    char deck1,deck2,deck3,deck4,period;

    vector<int>tower(7,0);

    allies all[5];

    enemies ene[5];

    cout<<"9 4 5 7 8 2 6 3"<<endl;

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

        condition=rand()%7;


        if(tower[1]<20||tower[3]<20) {
        /*    if(condition=0)probality=1;
            if(condition=5)probality=1;
            if(condition=6)probality=1;
            if(condition=1)probality=1;
            if(condition=2)probality=1;
            if(condition=3)probality=1;
            if(condition=4)probality=0;*/
			probality=1;

        } else {
            probality=0;
        }

        switch(probality) {

        case 1:

            if(mana==0) {
                cout<<0<<endl;
            }

            if(mana>=1) {
                if(deck1=='5'||deck2=='5'||deck3=='5'||deck4=='5') {
                    cout<<"1 5 1 1"<<endl<<0<<endl;
                    mana-=1;
                }
            }


            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 2 1"<<endl<<0<<endl;
                    mana-=3;
                }
            }

            if(mana>=4) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 10 10"<<endl<<0<<endl;
                    mana-=4;
                }
            }


            if(mana>=6) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 10 10"<<endl<<0<<endl;
                    mana-=6;
                }
            }

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 10 10"<<endl<<0<<endl;
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
                    cout<<"1 5 19 1"<<endl<<0<<endl;
                    mana-=1;
                }
            }


            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 19 2"<<endl<<0<<endl;
                    mana-=3;
                }
            }

            if(mana>=4) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 15 20"<<endl<<0<<endl;
                    mana-=4;
                }
            }


            if(mana>=6) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 15 24"<<endl<<0<<endl;
                    mana-=6;
                }
            }

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 15 22"<<endl<<0<<endl;
                    mana-=8;
                }
            }
            break;

        }

    }
    return 0;
}



