#ifndef F99EE637_6DF5_4C38_B22B_2EE588A7BDFC
#define F99EE637_6DF5_4C38_B22B_2EE588A7BDFC

#include <iostream>
#include "Product.hpp"

namespace GrpcProject::Models
{
  struct InvoiceDetails
  {
    Product product;
    double  deduction;
    int64_t quantity;
    int64_t total;

  private:
    friend bool operator==(InvoiceDetails& obj_1, InvoiceDetails& obj_2)
    {
      if (obj_1.deduction == obj_2.deduction &&
          obj_1.product == obj_2.product &&
          obj_1.quantity == obj_2.quantity &&
          obj_1.total == obj_2.total)
      {
        return true;
      }

      return false;
    }
  };
}

#endif /* F99EE637_6DF5_4C38_B22B_2EE588A7BDFC */
