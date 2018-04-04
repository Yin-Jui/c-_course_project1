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

    int Time,mana,tower_num,frinum=0,enenum=0,condition,probability;
    unsigned counter=1;

    char deck1,deck2,deck3,deck4,period;

    vector<int>tower(7,0);

    allies all[5];

    enemies ene[5];

    cout<<"9 4 1 7 8 C 6 3"<<endl;

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


        srand((unsigned)time(NULL));

        condition=rand()%2;

		probability=0;
       
		if(tower[1]<20){
		   probability=1;
	   }

/*
		if(tower[4]<5||tower[3]<20) {
                 condition=0;
          }

        if(tower[6]<20){
			condition=0;
		}
		if(tower[6]<5||tower[1]<20) {
                 condition=3;
          }*/
/*switch(condition){

	case 0:
		probability=0;
		break;
	case 1:

		probability=0;
		break;
	case 2:
          
		probability=0;
		break;
	case 3:
        
		probability=1;
		break;
	case 4:
		
		probability=1;
		break;
	case 5:
		
		probability=1;
		break;
	case 6:
		probability=2;
		break;
}
*/		
		
		
		switch(probability) {

        case 1:

            if(mana==0) {
                cout<<0<<endl;
            }

            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 5 22"<<endl<<0<<endl;
                }
            }
            if(mana>=6) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 5 20"<<endl<<0<<endl;
                }
            }

            if(mana>=4) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 5 12"<<endl<<0<<endl;
                }
            }
			if(mana>=7) {
                if(deck1=='C'||deck2=='C'||deck3=='C'||deck4=='C') {
                    cout<<"1 C 5 12"<<endl;
				}					

			}

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 5 18"<<endl<<0<<endl;
                }
            }
            break;
        case 0:

            if(mana==0) {
                cout<<0<<endl;
            }

            if(mana>=3) {
                if(deck1=='9'||deck2=='9'||deck3=='9'||deck4=='9') {
                    cout<<"1 9 15 22"<<endl<<0<<endl;
                }
            }

            if(mana>=6&&Time<168) {
                if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                    cout<<"1 4 15 20"<<endl<<0<<endl;
                }
            }


			if(mana>=5) {
                if(deck1=='1'||deck2=='1'||deck3=='1'||deck4=='1') {
                    cout<<"1 5 15 12"<<endl<<0<<endl;
                }
            }
			if(mana>=4&&Time<155) {
                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 15 12"<<endl<<0<<endl;
                }
            }
            if(mana>=7&&Time<150) {
                if(deck1=='C'||deck2=='C'||deck3=='C'||deck4=='C') {
                    cout<<"1 C 15 12"<<endl;
				}
			}

            if(mana>=8) {
                if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                    cout<<"1 7 15 20"<<endl<<0<<endl;
                }
            }
            break;

     /*   case 2:

            if(deck1=='7'||deck2=='7'||deck3=='7'||deck4=='7') {
                cout<<"1 7 10 22"<<endl;
                if(deck1=='3'||deck2=='3'||deck3=='3'||deck4=='3') {
                    cout<<"1 3 10 22"<<endl<<0<<endl;
                }
            }


            if(deck1=='4'||deck2=='4'||deck3=='4'||deck4=='4') {
                cout<<"1 4 10 22"<<endl;

                if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                    cout<<"1 6 10 20"<<endl<<0<<endl;
                }

                if(deck1=='3'||deck2=='3'||deck3=='3'||deck4=='3') {
                    cout<<"1 3 10 18"<<endl<<"1 3 10 20"<<endl<<0<<endl;
                }
            }


            if(deck1=='6'||deck2=='6'||deck3=='6'||deck4=='6') {
                cout<<"1 6 10 20"<<endl<<"1 6 10 18"<<endl<<0<<endl;
                if(deck1=='3'||deck2=='3'||deck3=='3'||deck4=='3') {
                    cout<<"1 3 10 22"<<endl<<0<<endl;
                }
            }


            if(deck1=='1'||deck2=='1'||deck3=='1'||deck4=='1') {
                cout<<"1 1 10 22"<<endl<<"1 1 10 20"<<endl<<0<<endl;

            }


            if(deck1=='8'||deck2=='8'||deck3=='8'||deck4=='8') {
                cout<<"1 8 10 18"<<endl<<"1 8 10 16"<<endl<<0<<endl;

            }
            break;*/
        }

    }
    return 0;
}



