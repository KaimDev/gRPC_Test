#ifndef EE438A3F_9DDB_417C_8D27_5B3B4EAD4816
#define EE438A3F_9DDB_417C_8D27_5B3B4EAD4816

namespace GrpcProject::Repositories
{
  template <class T>
  struct ForwardIterator
  {
    using iterator_category = std::forward_iterator_tag;
    using difference_type   = std::ptrdiff_t;
    using value_type        = T;
    using pointer           = T*;
    using reference         = T&;

    ForwardIterator(pointer ptr)
      : m_ptr {ptr}
    {
    }

    reference operator*() const { return *m_ptr; }
    pointer operator->() { return m_ptr; }

    ForwardIterator& operator++() { m_ptr++; return *this; }
    ForwardIterator operator++(int) { ForwardIterator tmp = *this; ++(*this); return tmp; }

    friend bool operator== (const ForwardIterator& a, const ForwardIterator& b) { return a.m_ptr == b.m_ptr; };
    friend bool operator!= (const ForwardIterator& a, const ForwardIterator& b) { return a.m_ptr != b.m_ptr; };

  private:
    pointer m_ptr;
  };
} // namespace Grpc::Repositories


#endif /* EE438A3F_9DDB_417C_8D27_5B3B4EAD4816 */
