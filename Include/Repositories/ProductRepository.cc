#include "ProductRepository.hpp"

namespace GrpcProject::Repositories
{
  ProductRepository::ProductRepository() noexcept
  {

  }

  void ProductRepository::AddProduct(const_reference product)
  {
    m_products.emplace_back(product);
  }

  std::optional<std::vector<ProductRepository::value_type>> ProductRepository::FindByProductPrice(const double product_price)
  {
    std::vector<value_type> product_list;

    for (const auto& product : m_products)
    {
      if (product.price <= product_price)
      {
        product_list.emplace_back(product);
      }
    }

    if (!product_list.size())
    {
      return product_list;
    }

    return std::nullopt;
  }

  std::optional<ProductRepository::value_type> ProductRepository::FindByProductId(const uint64_t product_id)
  {
    for (const auto& product : m_products)
    {
      if (product.id == product_id)
      {
        return product;
      }
    }

    return std::nullopt;
  }

  void ProductRepository::UpdateProduct(const uint64_t product_id, const_reference other_product)
  {
    for (auto& product : m_products)
    {
      if (product.id == product_id)
      {
        product = other_product;
      }
    }
  }

  void ProductRepository::DeleteProduct(const uint64_t product_id)
  {
    auto temp = std::find_if(m_products.begin(), m_products.end(), [&](value_type& product)
    {
      return product.id == product_id;
    });

    if (temp != m_products.end())
    {
      m_products.erase(temp);
    }
  }

  ForwardIterator<ProductRepository::value_type> ProductRepository::begin()
  {
    return ForwardIterator<value_type>(&m_products[0]);
  }

  ForwardIterator<ProductRepository::value_type> ProductRepository::end()
  {
    return ForwardIterator<value_type>(&m_products[m_products.size()]);
  }
}