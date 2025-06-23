#include <iostream>
#include "../xkitchen.cpp"

int main() {
  printf("Starting the basic xkitchen tests!\n");
  string name = "HTML validator";
  xkitchen my_xk(name, name);
  cout << my_xk;
}
