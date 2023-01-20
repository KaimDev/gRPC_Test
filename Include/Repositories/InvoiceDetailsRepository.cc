#include "InvoiceDetailsRepository.hpp"

namespace GrpcProject::Repositories
{
  InvoiceDetailsRepository::InvoiceDetailsRepository() noexcept
  {
  }

  void InvoiceDetailsRepository::AddInvoiceDetails(const_reference invoice_details)
  {
    m_invoice_details.emplace_back(invoice_details);
  }

  void InvoiceDetailsRepository::UpdateInvoiceDetails(reference model, const_reference invoice_details)
  {
    for (auto& element : m_invoice_details)
    {
      if (element == model)
      {
        element = invoice_details;
      }
    }
  }

  void InvoiceDetailsRepository::DeleteInvoiceDetails(reference model)
  {
    auto temp = std::find_if(m_invoice_details.begin(), m_invoice_details.end(), [&](value_type& invoice_details)
    {
      return invoice_details == model;
    });

    if (temp != m_invoice_details.end())
    {
      m_invoice_details.erase(temp);
    }
  }

  ForwardIterator<InvoiceDetailsRepository::value_type> InvoiceDetailsRepository::begin()
  {
    return ForwardIterator<value_type>(&m_invoice_details[0]);
  }

  ForwardIterator<InvoiceDetailsRepository::value_type> InvoiceDetailsRepository::end()
  {
    return ForwardIterator<value_type>(&m_invoice_details[m_invoice_details.size()]);
  }
}