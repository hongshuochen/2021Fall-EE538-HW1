#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  std::string PrintHelloWorld();

  // Print your self-introduction
  std::string PrintIntro();
  
  // q6
  std::vector<int> ChooseOddElement(const std::vector<int> &input);

  // Climbing Stairs
  int climbStairs(int n);
  
  private : 
};

#endif
