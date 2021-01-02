#include "cars.h"
#include <iomanip>  // for formatted output
#include <iostream>

/**
 * @brief display car's value
 * @param value = car's value
 */

void ShowPrice(double value)
{
    //display input value in a fixed 2 decimal precision
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}

/**
 * @brief update current car's value to new value
 * @param current_value : old value
 * @param new_value : new value
 */
void UpdatePrice(double &curent_value, double new_value)
{
    curent_value = new_value;
}

/**
 * @brief display car's horsepower
 * @return int
 */
int HorsePower()
{
    //return horsepower
    return kHorsepower;
}

/**
 * @brief display car's value, update namespace
 * @param value = car's value
 */

void lamborghini::ShowPrice(double value)
{
    //display input value in a fixed 2 decimal precision
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Car Value: " << value << std::endl;
}

/**
 * @brief update current car's value to new value, update namespace
 * @param current_value : old value
 * @param new_value : new value
 */
void lamborghini::UpdatePrice(double &curent_value, double new_value)
{
    curent_value = new_value;
}

/**
 * @brief display car's horsepower, update namespace
 * @return int
 */
int lamborghini::HorsePower()
{
    //return horsepower
    return kHorsepower;
}


