#include <iostream>
#include <string>
	


int main() {
	std::string choice;
    double temp;   
    char again = 'y';

    std::cout << "Temperature Converter\n\n";
    
    
    while (again == 'y' || again == 'Y') {
        std::cout << "What are you converting from: ";
        std::cin>>choice;
    
    //calculate for celsius to all other degrees
        if (choice == "c" || choice== "C" || choice == "celsius" || choice == "Celsius") {
        
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temp;
        
            double f = (temp * 1.8) + 32 ;   // calculate
            std::cout << temp << "°C is " << f << "°F\n";
        
            double k = temp + 273.15;
            std::cout << temp << "°C is " << k << "°K\n";
        
         }
     
     //calculate for farenheit to all other degrees
         else if (choice == "f" || choice == "F"  || choice == "farenheit" || choice == "Farenheit") 
         { 
             std::cout << "Enter temperature in Farenheit: ";
             std::cin >> temp;
   
             double c = (temp - 32) * (0.55556);
             std::cout << temp << "°F is " << c << "°C\n";
         
             double k = (temp - 32) * 0.55556 + 273.15;
             std::cout << temp << "°F is " << k << "°K\n";
         }
     
     
         else if (choice == "k" || choice == "K"  || choice == "kelvin" || choice == "Kelvin") 
         { 
             std::cout << "Enter temperature in Kelvin: ";
             std::cin >> temp;
             
             if (temp < 0) {   // Kelvin can't be negative
                std::cout << "Error: Temperature below absolute zero!\n";
                continue;   // skip to next loop iteration
            }
         
             double c = temp - 273.15;
             std::cout << temp << "°K is " << c << "°C\n";
        
            double k = (temp - 273.15) * 1.8 + 32;
            std::cout << temp << "°K is " << k << "°F\n";
         }
     
     
     //prints the statememt if input value is invalid
         else { std::cout << "Invalid choice!\n"; }
         
        std::cout << "\nDo you wish to continue? (y/n): ";
        std::cin >> again;
    }
    std::cout << "Goodbye!\n";
    return 0;
    
    
}
    