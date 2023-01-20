#include "InvoiceRepository.hpp"

namespace GrpcProject::Repositories
{
  InvoiceRepository::InvoiceRepository() noexcept
  {
  }

  void InvoiceRepository::AddInvoice(const_reference& invoice)
  {
    m_invoice.emplace_back(invoice);
  }

  std::optional<InvoiceRepository::value_type> InvoiceRepository::FindByInvoiceById(const uint64_t invoice_id)
  {
    for (const auto& invoice : m_invoice)
    {
      if (invoice.id == invoice_id)
      {
        return invoice;
      }
    }

    return std::nullopt;
  }

  std::optional<InvoiceRepository::value_type> InvoiceRepository::FindByInvoiceByClientId(const uint64_t client_id)
  {
    for (const auto& invoice : m_invoice)
    {
      if (invoice.client_id == client_id)
      {
        return invoice;
      }
    }

    return std::nullopt;
  }

  void InvoiceRepository::UpdateInvoice(const uint64_t invoice_id, const_reference invoice)
  {
    for (auto& element : m_invoice)
    {
      if (element.id == invoice_id)
      {
        element = invoice;
      }
    }
  }

  void InvoiceRepository::DeleteInvoice(const uint64_t invoice_id)
  {
    auto temp = std::find_if(m_invoice.begin(), m_invoice.end(), [&](value_type& invoice)
    {
      return invoice.id == invoice_id;
    });

    if (temp != m_invoice.end())
    {
      m_invoice.erase(temp);
    }
  }

  ForwardIterator<InvoiceRepository::value_type> InvoiceRepository::begin()
  {
    return ForwardIterator<value_type>(&m_invoice[0]);
  }

  ForwardIterator<InvoiceRepository::value_type> InvoiceRepository::end()
  {
    return ForwardIterator<value_type>(&m_invoice[m_invoice.size()]);
  }
}