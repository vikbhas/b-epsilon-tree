#include <cassert>
#include <fstream>
#include <iostream>

#include <be_tree/be_tree.hpp>

int main() {
  std::cout << "Startup!" << std::endl;
  BeTree tree("tree");
  char* colour[4]
      = { "Blue", "Red", "Orange", "Yellow"};
  // uint32_t size = 100000u;
  uint32_t size = 4;
  uint32_t test = 0;

  switch (test) { 
    case 0:
      for (int i = 0; i < size; i++) {
        bool val = tree.checkStringValid(colour[i]);
        if (val == 1){
          tree.Insert(i, colour[i]);
          assert(tree.Query(i) == colour[i]);
        }
        else{
          break;
        }
      }
      for (int i = 0; i < size; i++) {
        assert(tree.Query(i) == colour[i]);
      }
      break;
  }
}
