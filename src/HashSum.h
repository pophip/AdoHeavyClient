#ifndef HASHSUM_H
#define HASHSUM_H

#include <openssl/evp.h>
#include <ostream>
#include <array>

class HashSum
{
    friend class FileHasher;
    friend std::ostream & operator<<(std::ostream & oStreamOut, const HashSum &);

public:
    HashSum();
    void print(std::ostream & ouptut) const;
    bool operator==(const HashSum & other) const;

private:
    std::array<unsigned char, EVP_MAX_MD_SIZE> m_messageDigestValue;
    unsigned int m_messageDigestlength;
};

std::ostream & operator<<(std::ostream & oStreamOut, const HashSum & iHashSum);

#endif // HASHSUM_H
