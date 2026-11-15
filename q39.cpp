// Take electricity units consumed and calculate the bill as per slabs (using if-else).

#include <iostream>

int main()
{
    int units;
    int bill;

    std::cout << "Enter the number of electricity units consumed: " << std::endl;
    std::cin >> units;

    if (units<=100)
    {
        bill = units * 5; // Rs. 5 per unit for first 100 units

    }
    else if (units>100 && units<=200)
    {
        bill = (100 * 5) + ((units - 100) * 7); // Rs. 5 per unit for first 100 units and Rs. 7 per unit for next 100 units

    }
    else if (units>200 && units<=300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10); // Rs. 5 per unit for first 100 units, Rs. 7 per unit for next 100 units, and Rs. 10 per unit for next 100 units

    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 15); // Rs. 5 per unit for first 100 units, Rs. 7 per unit for next 100 units, Rs. 10 per unit for next 100 units, and Rs. 15 per unit for units above 300

    }

    std::cout << "The total electricity bill is: Rs. " << bill << std::endl;

    return 0;
}