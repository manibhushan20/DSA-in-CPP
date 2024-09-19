#include<iostream>
using namespace std;
class player{
    private:
         int health;
         int age;
         int score;
         bool isAlive;

    public:
       void setHealth(int health){
        this->health=health;
       }
       void setScore(int score){
        this->score=score;
       }
       void setAge(int age){
        this->age=age;
       }
       void setisAlive(bool isAlive){
        this->isAlive=isAlive;
       }

       int getHealth(){
        return health;
       }
       int getScore(){
        return score;
       }
       int getAge(){
        return age;
       }
           bool getisAlive(){
            return isAlive;
           }
};

void add(player a, player b){
    cout<<"Addition of Score:"<<a.getScore()+b.getScore()<<endl;
    cout<<"Addition of health:"<<a.getHealth()+b.getHealth()<<endl;
    cout<<"Addition of age:"<<a.getAge()+b.getAge()<<endl;
    cout<<"Addition of isAlive:"<<a.getisAlive()+b.getisAlive()<<endl;
}
int main(){
     player harsh;//object creation, statically
     player raghav;//compile time, static allocatio

     player *urvi = new player;//runtime, dynamic allocation
     player urviObject=*urvi;
     harsh.setScore(70);
     harsh.setHealth(60);
     harsh.setAge(32);
     harsh.setisAlive(true);

     raghav.setHealth(90);
     raghav.setAge(23);
     raghav.setScore(100);
     raghav.setisAlive(true);

     urviObject.setAge(18);
     urviObject.setHealth(100);
     urviObject.setScore(70);
     urvi->setisAlive(true);
      
    cout<<urvi->getisAlive()<<endl;
     cout<<urviObject.getAge()<<endl;
     add(harsh, raghav);

}