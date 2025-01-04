#include <iostream>
using namespace std;

class Hero {
private:
    int health;
    char level;
public:
    Hero(int health, char level) {  // Renamed parameters
        this->health = health;
        this->level = level;
        }

    char getLevel(){
            return level;
        }

    void setHealth(int health){
            this-> health =health;
    }

    int getHealth(){
        return health;
    }
};
//variation of hero
//     Hero(int h, char l){

//         this->health = h;
//         this->level = l;
//     }
// };

//     Hero(int h, char l){

//         health = h;
//         level = l;
//     }
//  };


int main() {
cout<<"Static Object h1---------"<<endl;    
    Hero h1(15, 'C');
    cout<<h1.getLevel()<<endl;
    h1.setHealth(20);
    cout<<h1.getHealth()<<endl;
    // cout << h1.level << endl;



cout<<"Dynamic Object h2---------"<<endl;
    Hero *h2 = new Hero(40,'b');
    h2->setHealth(50);
    cout<<(*h2).getLevel()<<endl;
    cout<<h2->getHealth()<<endl;


    return 0;
}
