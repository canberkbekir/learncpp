#ifndef MAP_H
#define MAP_H

class Map
{
public:
    Map();
    ~Map();
    void initMap(int rows, int cols);
    void printMap();
    void addFood();

private:
    int **map; // Pointer to a pointer for dynamic 2D array
    int rows;
    int cols;
    int foodX;
    int foodY;
};

#endif // MAP_H
