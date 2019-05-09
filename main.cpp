#include <iostream>
#include "ieditable.hpp"
#include "cexception.h"
using namespace std;

class CExcFille : public nsUtil::CException
{
protected :
    virtual ostream& display(ostream& os) const
    {
        return CException::display(os) << " de la classe fille";
    }
public:
    CExcFille(const string & libelle, const unsigned code) : CException(libelle, code)
    {

    }
    virtual ~CExcFille() {};
};

void testCException() throw (CExcFille)
{
    throw CExcFille("test du polymorphisme", 25);
}

int main ()
{
    try
    {
        testCException();
    }
    catch (const nsUtil::CException & e)
    {
        cerr << e << '\n';
        return e.getCodErr ();
    }
    catch (const exception & e)
    {
        cerr << "Exception standard : " << e.what() << '\n';
        return nsUtil::KExcStd;
    }
    catch (...)
    {
        cerr << "Exception inconnue\n";
        return nsUtil::KExcInconnue;
    }
    return nsUtil::KNoExc;

} // main()
