#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;


class Weapon
{
public:
    virtual void Action1() = 0;
    virtual void Action2() = 0;
};

class Knife : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Hit to someone" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Drop it" << "\n";
    }
};
class Shotgun : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Fire" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Recharge the gun" << "\n";
    }

};
class Pistol : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Take aim" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Pistol fire" << "\n";
    }

};
class Grenade : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Throw a grenade" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Put on a belt" << "\n";
    }
};
class Crossbow : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Recharge the Crossbow" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Fire the Crossbow" << "\n";
    }

};
class Flamethrower : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Refuel gas" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Fire!!!!" << "\n";
    }

};
class MachineGun : public Weapon
{
public:
    virtual void Action1() override
    {
        cout << "Recharge the machine gun" << "\n";
    }
    virtual void Action2() override
    {
        cout << "Throw out" << "\n";
    }

};


int main()
{
    vector<Weapon*> SomeGun;
    SomeGun.push_back(new Knife);
    SomeGun.push_back(new Shotgun);
    SomeGun.push_back(new Pistol);
    SomeGun.push_back(new Grenade);
    SomeGun.push_back(new Crossbow);
    SomeGun.push_back(new Flamethrower);
    SomeGun.push_back(new MachineGun);


    while (true)
    {
        int Code = _getch();

        if (Code == 49)
        {
            cout << "You are using a knife" << "\n";
        }
        else if (Code == 50)
        {
            cout << "You are using a shotgun" << "\n";
        }
        else if (Code == 51)
        {
            cout << "You are using a pistol" << "\n";
        }
        else if (Code == 52)
        {
            cout << "You are using a grenade" << "\n";
        }
        else if (Code == 53)
        {
            cout << "You are using a crossbow" << "\n";
        }
        else if (Code == 54)
        {
            cout << "You are using a flamethrower" << "\n";
        }
        else if (Code == 55)
        {
            cout << "You are using a machine gun" << "\n";
        }
        else if (Code == 32)
        {
            cout << "You are take aim" << "\n";
        }
        else if (Code == 13)
        {
            cout << "You are shoot" << "\n";
        }
        else if (Code == 27) exit(0);
    }
       


}

