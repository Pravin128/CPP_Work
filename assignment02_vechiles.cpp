#include "iostream"
using namespace std;
class vechiles
{
public:
    int mileage;
    int price;
    void printvec()
    {
        cout << "mileage is : " << mileage << endl;
        cout << "price is : " << price << endl;
    }
};

class car : public vechiles
{
public:
    string owner;
    int cost;
    int warrenty;
    int seats;
    string fuel_type;
    void printcar()
    {
        cout << "owner name is : " << owner << endl;
        cout << "cost is :" << cost << endl;
        cout << "warrenty is :" << warrenty << endl;
        cout << "Number of seats : " << seats << endl;
        cout << "fuel type is :" << fuel_type << endl;
    }
};
class bike : public vechiles
{
public:
    int cylinders;
    int gears;
    string cool_type;
    string wheel_type;
    int tank_size;
    void printbike()
    {
        cout << "Number of cylinders :" << cylinders << endl;
        cout << "Number of gears :" << gears << endl;
        cout << "cooling type : :" << cool_type << endl;
        cout << "wheel type :" << wheel_type << endl;
        cout << "tank size :" << tank_size << endl;
    }
};

class audi : public car
{
public:
    string model_type;
    void printval()
    {
        cout << "model type is " << model_type << endl;
    }
};

class ford : public car
{
public:
    string model_type1;
    void printford()
    {
        cout << "model type :" << model_type1;
        cout << endl;
    }
};

class bajaj : public bike
{
public:
    string make_type;
    void printbajaj()
    {
        cout << "Make type :" << make_type << endl;
    }
};

class tvs : public bike
{
public:
    string make_type1;
    void printtvs()
    {
        cout << "make  type :" << make_type1 << endl;
    }
};

int main()
{
    int num;
    cout << "ENter number of vechiles :";
    cin >> num;
    vechiles v[num];
    while (num--)
    {
        cout << "enter Mileage:";
        cin >> v[num].mileage;
        cout << "Enter price :";
        cin >> v[num].price;
        v[num].printvec();
    }
    int a;
    cout << "enter number of cars :";
    cin >> a;
    car c[5];
    while (a--)
    {
        cout << "enter owner name :";
        cin >> c[a].owner;
        cout << "enter cost :";
        cin >> c[a].cost;
        cout << "enter warrenty :";
        cin >> c[a].warrenty;
        cout << "enter number of seats :";
        cin >> c[a].seats;
        cout << "enter fuel type :";
        cin >> c[a].fuel_type;
        c[a].printcar();
    }
    int bnum;
    cout << "enter number of bikes :";
    cin >> bnum;

    bike b[5];
    while (bnum--)
    {
        cout << "enter  cylinders :";
        cin >> b[bnum].cylinders;
        cout << "enter gears :";
        cin >> b[bnum].gears;
        cout << "enter cooling type :";
        cin >> b[bnum].cool_type;
        cout << "enter wheel type :";
        cin >> b[bnum].wheel_type;
        cout << "enter tank size :";
        cin >> b[bnum].tank_size;
        b[bnum].printbike();
    }
    int aud_num;
    cout << "enter number of audies :";
    cin >> aud_num;
    audi aud[aud_num];
    while (aud_num--)
    {
        cout << "enter model type :";
        cin >> aud[aud_num].model_type;
        aud[aud_num].printval();
    }
    int f_num;
    cout << "enter number of fords:";
    cin >> f_num;

    ford f[5];
    while (f_num--)
    {
        cout << "enter model type :";
        f[f_num].model_type1 = "sports";
        f[f_num].printford();
    }
    bajaj obj;
    obj.make_type = "sports";
    obj.printbajaj();

    tvs t;
    t.make_type1 = "sports";
    t.printtvs();
}