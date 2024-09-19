#include<iostream>
using namespace std;

class player{
    private:
           int health;
           int score;
   public:
    void setScore(int s) {
        cout<<"score set kiya ja rha hai:"<<endl;
        score=s;
    }
    void setHealth(int h) {
         cout<<"Health change kiya ja rha hai:"<<endl;
         health=h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
   player mani;     
 mani.setScore(10);
 cout<<"The new score is:"<<mani.getScore()<<endl;
 mani.setHealth(100);
 cout<<"The new health is:"<<mani.getHealth()<<endl;
}
