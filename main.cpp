/**
 * @file cars
 * @author Danielle Marshall
 * @date 9/14/20
 * @brief create functions and use namespace
 */

#include <iostream>
#include "cars.h"


int main() 
{
    // Part 1: Regular Car
    std::cout << "Task 1: " << std::endl;
    double sedan_value = 18500;
    ShowPrice(sedan_value);
    std::cout << "Updating price" << std::endl;
    UpdatePrice(sedan_value, 20340.9);
    ShowPrice(sedan_value);
    std::cout << "The horse power of a sedan is: " <<
                HorsePower() << std::endl;

    // Part 2: Lamborghini Car
    std::cout << "\nTask 2: " << std::endl;
    double lambo_value = 18500;
    lamborghini::ShowPrice(lambo_value);
    std::cout << "Updating price" << std::endl;
    lamborghini::UpdatePrice(lambo_value, 20340.9);
    lamborghini::ShowPrice(lambo_value);
    std::cout << "The horse power of a lambo is: " <<
              lamborghini::HorsePower() << std::endl;

    return 0;
}
