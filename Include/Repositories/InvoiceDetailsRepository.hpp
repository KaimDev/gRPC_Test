#ifndef C6850BBF_7332_4A2A_85F6_2F6773D9C5F0
#define C6850BBF_7332_4A2A_85F6_2F6773D9C5F0

#include "Models/InvoiceDetails.hpp"
#include "Iterator.hpp"
#include <type_traits>
#include <vector>

namespace GrpcProject::Repositories
{
  class InvoiceDetailsRepository
  {
  public:
    using value_type      = Models::InvoiceDetails;
    using reference       = value_type&;
    using pointer         = value_type*;
    using const_reference = const value_type&;
    using const_pointer   = const value_type*;
    using size_type       = std::size_t;

    InvoiceDetailsRepository() noexcept;
    InvoiceDetailsRepository(const InvoiceDetailsRepository&) = delete;
    InvoiceDetailsRepository(InvoiceDetailsRepository&&) = delete;
    InvoiceDetailsRepository& operator=(const InvoiceDetailsRepository&) = delete;
    InvoiceDetailsRepository& operator=(InvoiceDetailsRepository&&) = delete;
    virtual ~InvoiceDetailsRepository() noexcept = default;

    void AddInvoiceDetails(const_reference invoice_details);
    void UpdateInvoiceDetails(reference model, const_reference invoice_details);
    void DeleteInvoiceDetails(reference model);

    ForwardIterator<value_type> begin();
    ForwardIterator<value_type> end();
    
  private:
    std::vector<value_type> m_invoice_details;
  };
}


#endif /* C6850BBF_7332_4A2A_85F6_2F6773D9C5F0 */
