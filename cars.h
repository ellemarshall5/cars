#ifndef CARS_H_
#define CARS_H_

const int kHorsepower = 120;

void ShowPrice(double value);
void UpdatePrice(double &curent_value, double new_value);
int HorsePower();

namespace lamborghini {
    const int kHorsepower = 759;
    void ShowPrice(double value);
    void UpdatePrice(double &curent_value, double new_value);
    int HorsePower();
}


#endif /* !CARS_H_ */
