#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a Car class to represent each car in the shop
class Car {
public:
    int id;
    string make;
    string model;
    string type;
    int year;
    double price;

    // Constructor to initialize the object
    Car(int i, string mk, string mdl, string t, int y, double p) {
        id = i;
        make = mk;
        model = mdl;
        type = t;
        year = y;
        price = p;
    }

    // Function to display the car information
    void display() {
        cout << id << "\t" << make << "\t" << model << "\t" << type << "\t" << year << "\t" << price << endl;
    }
};

int main() {
    // Create a vector to store the cars in the shop
    vector<Car> cars = {
        Car(1, "Toyota", "Camry", "sedan", 2015, 9800),
        Car(2, "Ford", "Escape", "crossover", 2015, 15900),
        Car(3, "Honda", "Civic", "sedan", 2016, 10200),
        Car(4, "Volkswagen", "Golf", "compact", 2014, 8800),
        Car(5, "Toyota", "RAV4", "crossover", 2016, 12800)
    };

    // Display the initial list of cars
    cout << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].display();
    }

    // Add two new cars to the shop
    cars.push_back(Car(6, "Toyota", "4Runner", "suv", 2015, 16900));
    cars.push_back(Car(7, "Honda", "CR-V", "crossover", 2016, 17900));

    // Display the updated list of cars
    cout << endl << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].display();
    }

    // Remove two sold cars with IDs of 3 and 7
    for (int i = 0; i < cars.size(); i++) {
        if (cars[i].id == 3 || cars[i].id == 7) {
            cars.erase(cars.begin() + i);
        }
    }

    // Display the list of cars after the sold cars are removed
    cout << endl << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].display();
    }

    // Find all cars with the model "Camry" and display them
    cout << endl << "Cars with model 'Camry':" << endl;
    for (int i = 0; i < cars.size(); i++) {
        if (cars[i].model == "Camry") {
            cars[i].display();
        }
    }

    // Find the most expensive and lowest price cars
    Car maxCar = cars[0];
    Car minCar = cars[0];
    
    // Display the initial list of cars
    cout << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].display();
    }

    // Remove two sold cars with IDs of 3 and 7
    for (int i = 0; i < cars.size(); i++) {
        if (cars[i].id == 3 || cars[i].id == 7) {
            cars.erase(cars.begin() + i);
        }
    }

    // Display the list of cars after the sold cars are removed
    cout << endl << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cars[i].display();
    }

    // Find all cars with the model "Camry" and display them
    cout << endl << "Cars with model 'Camry':" << endl;
    for (int i = 0; i < cars.size(); i++) {
        if (cars[i].model == "Camry") {
            cars[i].display();
        }
    }

    for (int i = 1; i < cars.size(); i++) {
        if (cars[i].price > maxCar.price) {
            maxCar = cars[i];
        }
        if (cars[i].price < minCar.price) {
            minCar = cars[i];
        }
    }

    cout << endl << "Most expensive car:" << endl;
    maxCar.display();

    cout << endl << "Lowest price car:" << endl;
    minCar.display();

    return 0;

}
