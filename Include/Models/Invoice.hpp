#ifndef C8C9AA69_0533_4C90_BEAB_3C2861E62539
#define C8C9AA69_0533_4C90_BEAB_3C2861E62539

#include <iostream>
#include <string>
#include "Client.hpp"
#include "InvoiceDetails.hpp"

namespace GrpcProject::Models
{
  struct Invoice
  {
    uint64_t       id;
    std::string    name;
    std::string    address;
    InvoiceDetails invoice_details;
    uint64_t       client_id;
  };
}

#endif /* C8C9AA69_0533_4C90_BEAB_3C2861E62539 */
