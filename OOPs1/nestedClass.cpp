#include<iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class player {
private:
    int health;
    int age;
    int score;
    bool isAlive;
    Gun gun;

    class Helmet {
        int hp;
        int level;

    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() {
            return hp;
        }
        int getLevel() {
            return level;
        }
    };

    Helmet helmet;

public:
    void setHealth(int health) {
        this->health = health;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setisAlive(bool isAlive) {
        this->isAlive = isAlive;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }
    void setHelmet(int level) {
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "error, invalid level!!";
        helmet->setHp(health);
        this->helmet = *helmet;
    }
    void getHelmet() {
        cout << helmet.getHp() << endl;
        cout << helmet.getLevel() << endl;
    }

    int getHealth() {
        return health;
    }
    int getScore() {
        return score;
    }
    int getAge() {
        return age;
    }
    bool getisAlive() {
        return isAlive;
    }
    Gun getGun() {
        return gun;
    }
};

int main() {
    player harsh;
    player raghav;

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    harsh.setScore(70);
    harsh.setHealth(60);
    harsh.setAge(32);
    harsh.setisAlive(true);
    harsh.setGun(akm);
    harsh.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    raghav.setHealth(90);
    raghav.setAge(23);
    raghav.setScore(100);
    raghav.setisAlive(true);
    raghav.setGun(awm);
    raghav.setHelmet(3);

    Gun gun123 = raghav.getGun();
    cout << gun123.damage << endl;
    cout << gun123.ammo << endl;
    cout << gun123.scope << endl;

    harsh.getHelmet();
    raghav.getHelmet();

    return 0;
}
