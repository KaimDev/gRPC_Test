#ifndef FF4614ED_642D_4823_936F_E91EA2559BA4
#define FF4614ED_642D_4823_936F_E91EA2559BA4

#include "Models/Product.hpp"
#include "Iterator.hpp"
#include <type_traits>
#include <vector>
#include <optional>

namespace GrpcProject::Repositories
{
  class ProductRepository
  {
  public:
    using value_type      = Models::Product;
    using reference       = value_type&;
    using pointer         = value_type*;
    using const_reference = const value_type&;
    using const_pointer   = const value_type*;
    using size_type       = std::size_t;

    ProductRepository() noexcept;
    ProductRepository(const ProductRepository&) = delete;
    ProductRepository(ProductRepository&&) = delete;
    ProductRepository& operator=(const ProductRepository&) = delete;
    ProductRepository& operator=(ProductRepository&&) = delete;
    virtual ~ProductRepository() noexcept = default;

    ForwardIterator<value_type> begin();
    ForwardIterator<value_type> end();

    void AddProduct(const_reference product);
    std::optional<std::vector<value_type>> FindByProductPrice(const double product_price);
    std::optional<value_type> FindByProductId(const uint64_t product_id);
    void UpdateProduct(const uint64_t product_id, const_reference other_product);
    void DeleteProduct(const uint64_t product_id);

  private:
    std::vector<value_type> m_products;
  };
}


#endif /* FF4614ED_642D_4823_936F_E91EA2559BA4 */
