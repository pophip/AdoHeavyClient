#include "HashSum.h"

#include "Log.h"

#include <iomanip>

using namespace std;

HashSum::HashSum()
    : m_messageDigestlength(0)
{
    m_messageDigestValue.fill(0);
}

void HashSum::print(std::ostream &output) const
{
    Log::get() << "HashSum::print()" << Log::Endl;
    output << setbase(16) << setfill('0');
    for(int i = 0; i < m_messageDigestlength; i++)
    {
        output << setw(2) << static_cast<int>(m_messageDigestValue[i]);
    }
}

bool HashSum::operator ==(const HashSum & other) const
{
    const bool lengthEqual = (m_messageDigestlength == other.m_messageDigestlength);
    const bool dataEqual = (m_messageDigestValue == other.m_messageDigestValue);
    return lengthEqual && dataEqual;
}

std::ostream & operator<<(std::ostream & oStreamOut, const HashSum & iHashSum)
{
    Log::get() << "Printing HashSum:" << Log::Endl;
    iHashSum.print(oStreamOut);
    return oStreamOut;
}
