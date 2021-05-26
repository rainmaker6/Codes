#include <boost/numeric/ublas/tensor.hpp>
#include <iostream>

int main()
{
  namespace ublas = boost::numeric::ublas;
  using value   = float;
  using layout  = ublas::layout::first_order; // storage format
  using tensor  = ublas::tensor_dynamic<value,layout>;
  using shape   = typename tensor::extents_type;
  using matrix  = ublas::matrix<value,layout>;

  constexpr auto ones = ublas::ones<value,layout>{};

  using namespace boost::numeric::ublas::index;

  using namespace boost::numeric::ublas::index;
  using tensor  = boost::numeric::ublas::tensor_dynamic<float>;
  auto fones    = boost::numeric::ublas::ones<float>{};


  tensor X = fones(3,4,5);
  cout<<X<<'\n';
}