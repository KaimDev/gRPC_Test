#ifndef ACD92C05_170F_4478_B3C3_981ACB193F26
#define ACD92C05_170F_4478_B3C3_981ACB193F26


#include "ClientRepository.hpp"
#include "ProductRepository.hpp"
#include "InvoiceRepository.hpp"
#include "InvoiceDetailsRepository.hpp"

namespace GrpcProject::Repositories
{
  class Database
  {
  public:
    Database() noexcept = default;

    ClientRepository& Clients();
    ProductRepository& Products();
    InvoiceDetailsRepository& InvoiceDetails();
    InvoiceRepository& Invoices();

  private:
    ClientRepository         m_client_repository;
    InvoiceRepository        m_invoice_repository;
    InvoiceDetailsRepository m_invoice_details_repository;
    ProductRepository        m_product_repository;
  };
}


#endif /* ACD92C05_170F_4478_B3C3_981ACB193F26 */
