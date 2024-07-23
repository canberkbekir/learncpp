#include <map.hpp>
#include <iostream>
#include <unistd.h>

void clearScreen();

int main()
{
    Map myMap;
    myMap.initMap(10, 10);
    while (true)
    {
        clearScreen();
        myMap.addFood();  // Add food to the map
        myMap.printMap(); // Print the map with food
        sleep(1);         // Sleep for 1 second
    }

    return 0;
}

void clearScreen()
{
    // Clear the screen
    std::cout << "\033[2J\033[1;1H";
}