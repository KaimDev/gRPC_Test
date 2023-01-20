#include "Database.hpp"

namespace GrpcProject::Repositories
{

    ClientRepository& Database::Clients()
    {
      return m_client_repository;
    }

    ProductRepository& Database::Products()
    {
      return m_product_repository;
    }

    InvoiceDetailsRepository& Database::InvoiceDetails()
    {
      return m_invoice_details_repository;
    }

    InvoiceRepository& Database::Invoices()
    {
      return m_invoice_repository;
    }

} // namespace GrpcService::Repositories