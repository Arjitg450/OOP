//polymorphsim

#include<iostream>
using namespace std;

class A{

    public:
        void func1(){  //1
            cout<<"I am func1"<<endl; 
        }

        // void func1(){ //2
        //     cout<<"I am func1 but same"<<endl;
        // }

        //if 1 and 2 two are given then throws error

        // int func1(){ //3
        //     cout<<"I am func1 but same"<<endl;
        //     return 2;
        // }

                //if 1 and 3 two are given then throws error


       int func1(int a){ //4  //when parameter is passed then overloading works
            cout<<"I am func1 with parameter passed"<<endl;
            return 2;
        }

        //if 1 and 4 two are given no  error
};




int main(){


    A obj;
    obj.func1();
    obj.func1(2);

}