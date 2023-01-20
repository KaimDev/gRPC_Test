#ifndef BF43325E_BA3B_4916_B9AC_43BEEE38F53E
#define BF43325E_BA3B_4916_B9AC_43BEEE38F53E

#include "Models/Client.hpp"
#include "Iterator.hpp"
#include <optional>
#include <type_traits>
#include <vector>

namespace GrpcProject::Repositories
{
  class ClientRepository
  {
  public:
    using value_type      = Models::Client;
    using reference       = value_type&;
    using pointer         = value_type*;
    using const_reference = const value_type&;
    using const_pointer   = const value_type*;
    using size_type       = std::size_t;

    ClientRepository() noexcept;
    ClientRepository(const ClientRepository&) = delete;
    ClientRepository(ClientRepository&&) = delete;
    ClientRepository& operator=(const ClientRepository&) = delete;
    ClientRepository& operator=(ClientRepository&&) = delete;
    virtual ~ClientRepository() noexcept = default;

    void AddClient(const_reference client);
    std::optional<value_type> FindByClientId(const uint64_t client_id);
    void UpdateClient(const uint64_t client_id, const_reference client);
    void DeleteClient(const uint64_t client_id);

    ForwardIterator<value_type> begin();
    ForwardIterator<value_type> end();

  private:
    std::vector<value_type> m_clients;
  };
}

#endif /* BF43325E_BA3B_4916_B9AC_43BEEE38F53E */
