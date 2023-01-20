#ifndef FDC1746A_B95E_4EAD_A458_F9CFA27BFDAE
#define FDC1746A_B95E_4EAD_A458_F9CFA27BFDAE

#include <iostream>
#include <string>

namespace GrpcProject::Models
{
  struct Client
  {
    uint64_t    id;
    std::string name;
    std::string phone;
    std::string email;
  };
}

#endif /* FDC1746A_B95E_4EAD_A458_F9CFA27BFDAE */
