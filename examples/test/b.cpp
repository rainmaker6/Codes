#include <boost/numeric/ublas/tensor.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <ostream>

int main()
{
    using namespace boost::numeric::ublas;

    using tensorf = dynamic_tensor<float>;
    using matrixf = matrix<float>;
    using vectorf = vector<float>;

    auto A = tensorf{3,4,2};
    auto B = A = 2;

    // Calling overloaded operators
    // and using simple tensor expression templates.
    if( A != (B+1) ){
        A += 2*B - 1;
    }

    // formatted output
    std::cout << "% --------------------------- " << std::endl;
    std::cout << "% --------------------------- " << std::endl << std::endl;
    std::cout << "A=" << A << ";" << std::endl << std::endl;

    auto f = vectorf(n[0],2);

    // Calling constructor with
    // vector expression templates
    tensorf C = 2*f;
    // formatted output
    std::cout << "% --------------------------- " << std::endl;
    std::cout << "% --------------------------- " << std::endl << std::endl;
    std::cout << "C=" << C << ";" << std::endl << std::endl;



}
