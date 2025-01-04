#include<iostream>
using namespace std;
 
class Sports{
    protected:
        
        bool racket_or_not;
        string play_area; //inside or outside


    public:
        void setRacketSports(bool val){
        this->racket_or_not = val;
   }
        void describe(string &details){
        cout<<details<<endl;
        }

};

class Tennis : public Sports{
   
   protected:
   int no_of_matches;
   string details="Tennis, Ace, Kings game";
   
    public:
   void give_details(){
    describe(details);

   }

   void play(string name, string name2){
    cout<<name<<" playing Tennis with "<<name2<<endl;
   }



   void IsItRacketSports(){
    if(racket_or_not==1)
     cout<<"yes its a racket sports"<<endl;
    else{
        cout<<"no"<<endl;
        }
   }
    
};

int main(){


Tennis game1;
game1.play("Federer","Djokovic");
game1.setRacketSports(true);
// game1.racket_or_not=true;
game1.IsItRacketSports();
game1.give_details();
}