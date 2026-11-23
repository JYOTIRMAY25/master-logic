// Take time (hours and minutes) and print the smaller angle between the hour and minute hands. 


#include <iostream>

int main()
{
    int hours, minutes;
    double hourAngle, minuteAngle, difference;

    std::cout << "Enter hours and minutes: ";
    std::cin >> hours >> minutes;

    // Step 1: Validate time
    if (hours >= 0 && hours <= 23 &&
        minutes >= 0 && minutes <= 59)
    {
        // Step 2: Calculate hour hand angle
        hourAngle = (hours % 12) * 30 + minutes * 0.5;

        // Step 3: Calculate minute hand angle
        minuteAngle = minutes * 6;

        // Step 4: Calculate the absolute difference
        difference = hourAngle - minuteAngle;

        if (difference < 0)
        {
            difference = -difference;
        }

        // Step 5: Find the smaller angle
        if (difference > 180)
        {
            difference = 360 - difference;
        }

        std::cout << "Smaller angle: "
                  << difference << " degrees" << std::endl;
    }
    else
    {
        std::cout << "Invalid time!" << std::endl;
    }

    return 0;
}
