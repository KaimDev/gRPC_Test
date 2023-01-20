#ifndef F972FA36_92F9_43FB_89AB_5D7C26DEC5B5
#define F972FA36_92F9_43FB_89AB_5D7C26DEC5B5

#include "Models/Invoice.hpp"
#include "Iterator.hpp"
#include <type_traits>
#include <vector>
#include <optional>

namespace GrpcProject::Repositories
{
  class InvoiceRepository
  {
  public:
    using value_type      = Models::Invoice;
    using reference       = value_type&;
    using pointer         = value_type*;
    using const_reference = const value_type&;
    using const_pointer   = const value_type*;
    using size_type       = std::size_t;

    InvoiceRepository() noexcept;
    InvoiceRepository(const InvoiceRepository&) = delete;
    InvoiceRepository(InvoiceRepository&&) = delete;
    InvoiceRepository& operator=(const InvoiceRepository&) = delete;
    InvoiceRepository& operator=(InvoiceRepository&&) = delete;
    virtual ~InvoiceRepository() noexcept = default;

    void AddInvoice(const_reference& invoice);
    std::optional<value_type> FindByInvoiceById(const uint64_t invoice_id);
    std::optional<value_type> FindByInvoiceByClientId(const uint64_t client_id);
    void UpdateInvoice(const uint64_t invoice_id, const_reference invoice);
    void DeleteInvoice(const uint64_t invoice_id);

    ForwardIterator<value_type> begin();
    ForwardIterator<value_type> end();

  private:
    std::vector<value_type> m_invoice;
  };
}


#endif /* F972FA36_92F9_43FB_89AB_5D7C26DEC5B5 */
