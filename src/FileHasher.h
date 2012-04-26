#ifndef FILEHASHER_H
#define FILEHASHER_H

#include <openssl/evp.h>
#include <iomanip>
#include <fstream>

#include "HashSum.h"

class ChunkByChunkFileReader;

class FileHasher
{
public:
    FileHasher();
    static HashSum hash(const char fileName[]);
private:
    static HashSum sha1(const ChunkByChunkFileReader & iReader);
};

#endif // FILEHASHER_H
