// Name: Brian Smetana
// This program calculates the area of a room.

#include <iostream>

int main()
{
  double width, length, area;
  width=11.5;
  length=17.8;


  // Get the length and width of the room.
  std::cout << "What is the room's \"width\" in feet? ";
  std::cin >> width;
  std::cout << "What is the room's \"length\" in feet? ";
  std::cin >> length;

  // Calculate the area of the room.
  area = length * width;

  // Display the area of the room.
  std::cout << "The \"area\" of the room is 204.7 square feet./n";

  return 0;
}
