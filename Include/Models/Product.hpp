#ifndef B305128B_EB1B_468D_BF8A_F8E42461DB04
#define B305128B_EB1B_468D_BF8A_F8E42461DB04

#include <iostream>
#include <string>

namespace GrpcProject::Models
{
  struct Product
  {
    uint64_t    id;
    std::string name;
    double      price;

  private:
    friend bool operator==(Product& obj_1, Product& obj_2)
    {
      return obj_1.id == obj_2.id;
    }
  };
}

#endif /* B305128B_EB1B_468D_BF8A_F8E42461DB04 */
