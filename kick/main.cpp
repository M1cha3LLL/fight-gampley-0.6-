

#include <iostream>

using namespace std;
class big {
public:
        string name;
    int hp;
    int str;
    bool turn;

    void con(string n, int h, int s, bool t) {
        name = n;
        hp = h;
        str = s;
        turn = t;
    };
    //this should decrease hp
        void attack1(big& attacker , big& victim) {

        attacker.turn = false;
        victim.hp = victim.hp - attacker.str;
        victim.turn = true;

        cout << victim.name << " took " << attacker.str << " from "<< attacker.name << "player has this much health:" <<victim.hp <<"\n";
    }
};







int main() {
    big player1;
    player1.con("mike", 120, 50, true);
    big player2;
    player2.con("bike", 100, 30, false);

    bool winner = false;
    bool winner2 = false;
    // the logic took unnecessarily long
    while(   winner == false && winner2 == false || winner == false && winner2 == false  ){
    if (player2.hp == 0 ){
            winner = true;
        }
        else if (player1.hp == 0){
            winner2 = true;
        }

        int input = 0;
        cout << "press 1 to punch  \n";
        cin >> input;



         if (input == 1 && player1.turn == true) {
            player1.attack1(player1 , player2);
            }
        else if (player2.turn == true && player1.turn != true) {
            player1.attack1(player2 , player1);
        }
        if (player2.hp == 0 ){
            winner = true;
        }
        else if (player1.hp == 0){
            winner2 = true;
        }


    };
    if ( winner == true ){
        cout<< "the winner is " <<player1.name;
    }
    if ( winner2 == true ){
        cout<< "the winner is " <<player2.name;
    }




        return 0;


}
