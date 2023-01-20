#include "ClientRepository.hpp"
#include "algorithm"

namespace GrpcProject::Repositories
{
  ClientRepository::ClientRepository() noexcept
  {
  }

  void ClientRepository::AddClient(const_reference client)
  {
    m_clients.emplace_back(client);
  }

  std::optional<ClientRepository::value_type> ClientRepository::FindByClientId(const uint64_t client_id)
  {
    for (const auto& client : m_clients)
    {
      if (client.id == client_id)
      {
        return client;
      }
    }

    return std::nullopt;
  }

  void ClientRepository::UpdateClient(const uint64_t id, const_reference client_reference)
  {
    for (auto& client : m_clients)
    {
      if (client.id == id)
      {
        client = client_reference;
      }
    }
  }

  void ClientRepository::DeleteClient(const uint64_t client_id)
  {
    auto temp = std::find_if(m_clients.begin(), m_clients.end(), [&](value_type& client)
    {
      return client.id == client_id;
    });

    if (temp != m_clients.end())
    {
      m_clients.erase(temp);
    }
  }

  ForwardIterator<ClientRepository::value_type> ClientRepository::begin()
  {
    return ForwardIterator<value_type>(&m_clients[0]);
  }

  ForwardIterator<ClientRepository::value_type> ClientRepository::end()
  {
    return ForwardIterator<value_type>(&m_clients[m_clients.size()]);
  }
} // namespace GrpcService::Repositories
