#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a Car class to represent each car in the shop
class Car
{
public:
    int id;
    string brand;
    string model;
    string type;
    int year;
    double price;

    // Constructor to initialize the object
    Car(int ID, string Brand, string Model, string Type, int Year, double Price)
    {
        id = ID;
        brand = Brand;
        model = Model;
        type = Type;
        year = Year;
        price = Price;
    }

    // Function to display the car information
    void displayInfo()
    {
        cout << id << "\t" << brand << "\t" << model << "\t" << type << "\t" << year << "\t" << price << endl;
    }
};

int main()
{
    // Create a vector to store the cars in the shop
    vector<Car> cars = 
    {
        Car(1, "Toyota", "Camry", "sedan", 2015, 9800),
        Car(2, "Ford", "Escape", "crossover", 2015, 15900),
        Car(3, "Honda", "Civic", "sedan", 2016, 10200),
        Car(4, "Volkswagen", "Golf", "compact", 2014, 8800),
        Car(5, "Toyota", "RAV4", "crossover", 2016, 12800)
    };

    // Display the initial list of cars
    cout << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++)
    {
        cars[i].displayInfo();
    }

    // Display two more cars into the list
    cars.push_back(Car(6, "Toyota", "4Runner", "suv", 2015, 16900));
    cars.push_back(Car(7, "Honda", "CR-V", "crossover", 2016, 17900));

    // Display the update list of cars
    cout << endl << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++)
    {
        cars[i].displayInfo();
    }

    // Remove two sold cars with IDs of 3 and 7
    for (int i = 0; i < cars.size(); i++)
    {
        if (cars[i].id == 3 || cars[i].id == 7)
        {
            cars.erase(cars.begin() + i);
        }
    }

    cout << endl << "ID\tMake\tModel\tType\tYear\tPrice ($)" << endl;
    for (int i = 0; i < cars.size(); i++)
    {
        cars[i].displayInfo();
    }
    cout << endl;

    // Searching for Camry car in the list
    string searchmodel = "Camry";
    cout << "Car with model: " << searchmodel << endl;
    for(Car cars : cars)
    {
        if(cars.model == searchmodel)
        {
            cout << "Model: " << cars.model << endl;
            cout << "Available" << endl;
            break;
        }
        else
        {
            cout << "Unavailable" << endl;
        }
    }

    // Find the most expensive and lowest price cars
    Car maxCar = cars[0];
    Car minCar = cars[0];
    for (int i = 1; i < cars.size(); i++)
    {
        if (cars[i].price > maxCar.price)
        {
            maxCar = cars[i];
        }
        if (cars[i].price < minCar.price)
        {
            minCar = cars[i];
        }
    }

    // Display the most expensive car and the most lowest car
    cout << endl << "Most expensive car:" << endl;
    maxCar.displayInfo();

    cout << endl << "Lowest price car:" << endl;
    minCar.displayInfo();

    return 0;
}