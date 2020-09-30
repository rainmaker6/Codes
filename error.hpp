#ifndef BOOST_GIL_IO_ERROR_HPP
#define BOOST_GIL_IO_ERROR_HPP

#include <ios>

namespace boost 
{ 
namespace gil 
{
inline void io_error(const char* descr)
{
throw std::ios_base::failure(descr);
}
inline void io_error_if(bool expr, const char* descr)
{
if (expr==true)
{
io_error(descr);
}
}
} // namespace gil
} // namespace boost

#endif

