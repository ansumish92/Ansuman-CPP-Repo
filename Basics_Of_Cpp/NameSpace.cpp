
#include "iostream"
#include "string"
using namespace std;

/* Namespace for Car */
namespace Car{
    class Lambo {
        float fuel;
        string Owner_Name;
        long int vin;
    public:
        /* Defining Methods inside namespace */
        void Set_Detail(float a, string s, long int n) {
            fuel = a;
            Owner_Name = s;
            vin = n;
        }
        /* Defining Methods inside namespace */
        void Get_Detail() {
            cout << "Owner Of Vehicle : " << Owner_Name << endl;
            cout << "Fuel Capacity: " << fuel << endl;
            cout << "Vehicle Indetification Number: " << vin << endl;
        }
    };
}

/* Namespace for other Vehicle*/
namespace Bike {
    class Splendor {
        float fuel;
        string Owner_Name;
        long int vin;
        int money;
    public:
        void Set_Detail(float a, string s, int n, long int m);
      /*  void Set_Detail(float a, string s, int n, long int m) {
            fuel = a;
            Owner_Name = s;
            vin = n;
            money = m;
        }*/
        void Get_Detail();
      /*  void Get_Detail() {
            cout << endl;
            cout << "Owner Of Vehicle : " << Owner_Name << endl;
            cout << "Fuel Capacity: " << fuel << endl;
            cout << "Vehicle Identification Number: " << vin << endl;
            cout << "Cost Of The Vehicle: " << money << endl;
        }*/
    };
}

/* Defining methods outside of namespace and outside of class */
void Bike::Splendor::Set_Detail(float a, string s, int n, long int m) {
    fuel = a;
    Owner_Name = s;
    vin = n;
    money = m;
}

/* Defining Methods outside of namespace and outside of class */
void Bike::Splendor::Get_Detail() {
    cout << endl;
    cout << "Owner Of Vehicle : " << Owner_Name << endl;
    cout << "Fuel Capacity: " << fuel << endl;
    cout << "Vehicle Identification Number: " << vin << endl;
    cout << "Cost Of The Vehicle: " << money << endl;
}

//using namespace Car;
//using namespace Bike;

int main() {
    Car::Lambo veh1;
    Bike::Splendor veh2;

    veh1.Set_Detail(10.55, "James Thomas", 1000234);
    veh1.Get_Detail();
    veh2.Set_Detail(85.9, "Peter Johnson", 5000234, 85000);
    veh2.Get_Detail();
    return 0;
}
