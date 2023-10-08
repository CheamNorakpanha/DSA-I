#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class WeCar {
public:
    int ID;
    string Make;
    string Model;
    string Type;
    int Year;
    double Price;
    WeCar* next;

    WeCar(int id, string make, string model, string type, int year, double price) {
        ID = id;
        Make = make;
        Model = model;
        Type = type;
        Year = year;
        Price = price;
        next = nullptr;
    }
};

class WeCarList {
private:
    WeCar* head;

public:
    WeCarList() {
        head = nullptr;
    }

    void insert(int id, string make, string model, string type, int year, double price) {
        WeCar* newCar = new WeCar(id, make, model, type, year, price);
        newCar->next = head;
        head = newCar;
    }

    void remove(int id) {
        WeCar* current = head;
        WeCar* previous = nullptr;
        while (current != nullptr && current->ID != id) {
            previous = current;
            current = current->next;
        }
        if (current != nullptr) {
            if (previous == nullptr) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            delete current;
        }
    }

    WeCar* search(string model) const {
        WeCar* current = head;
        while (current != nullptr && current->Model != model) {
            current = current->next;
        }
        return current;
    }

    void display() const {
        vector<WeCar*> cars;
        WeCar* current = head;
        while (current != nullptr) {
            cars.push_back(current);
            current = current->next;
        }
        sort(cars.begin(), cars.end(), [](const WeCar* a, const WeCar* b) {
            return a->ID < b->ID;
        });
        cout <<"ID\tMake\tModel\tType\tYear\tPrice"<<endl;
        cout << "--------------------------------------------------------"<<endl;
        for (const WeCar* car : cars) {
            
            cout  << car->ID << "\t";
            cout  << car->Make << "\t";
            cout  << car->Model <<"\t";
            cout  << car->Type <<"\t";
            cout << car->Year << "\t";
            cout  << car->Price <<"$"<< endl;
            cout << "--------------------------------------------------------"<<endl;
        }
    }
};
int main(){
    WeCarList wecarList;
    // Insert some sample cars
    wecarList.insert(1, "Toyota", "Camry", "Sedan", 2015, 9800);
    wecarList.insert(2, "Ford", "Escape", "Crossover", 2015, 15900);
    wecarList.insert(3, "Honda", "Civic", "sedan", 2016, 10200);
    wecarList.insert(4, "Volkswagen", "Golf", "compact", 2014,8800);
    wecarList.insert(5,"Toyota","RAV4","crossover",2016,12800);
    wecarList.display();
    wecarList.insert(6,"Toyota","4Runner","SUV",2015,16900);
    wecarList.insert(7,"Honda","CR-V","crossover",2016,17900);
    cout << "After add new 2 car with ID 6 and 7"  << ":" << endl;
    wecarList.display();
    wecarList.remove(3);
    wecarList.remove(7);
    cout << "After removing car with ID 3 and 7"  << ":" << endl;
    wecarList.display();
    wecarList.search("Camary");
}