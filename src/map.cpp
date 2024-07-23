#include "map.hpp"
#include <iostream>

Map::Map() : map(nullptr), rows(0), cols(0) {}

Map::~Map()
{
    // Free allocated memory
    for (int i = 0; i < rows; ++i)
    {
        delete[] map[i];
    }
    delete[] map;
}

void Map::initMap(int rows, int cols)
{
    this->rows = rows;
    this->cols = cols;
    this->foodX = 0;
    this->foodY = 0;

    // Allocate memory for the 2D array
    map = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        map[i] = new int[cols];
    }

    // Optionally initialize the array with some values (e.g., 0)
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            map[i][j] = 0;
        }
    }
}

void Map::printMap()
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << map[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Map::addFood()
{
    map[foodX][foodY] = 0;

    // Add food to a random location on the map
    int randomRow = rand() % rows;
    int randomCol = rand() % cols;

    this->foodX = randomRow;
    this->foodY = randomCol;
    map[randomRow][randomCol] = 1;
}
