// Take a password string and check basic rules (length ≥ 8 and contains at least one digit).


#include <iostream>
#include <string>

int main()
{
    std::string password;
    bool hasDigit = false;

    std::cout << "Enter your password: ";
    std::cin >> password;

    // Check whether the password contains a digit
    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = true;
            break;
        }
    }

    // Check both password rules
    if (password.length() >= 8 && hasDigit == true)
    {
        std::cout << "Valid password!" << std::endl;
    }
    else
    {
        std::cout << "Invalid password!" << std::endl;

        if (password.length() < 8)
        {
            std::cout << "Password must contain at least 8 characters." << std::endl;
        }

        if (hasDigit == false)
        {
            std::cout << "Password must contain at least one digit." << std::endl;
        }
    }

    return 0;
}