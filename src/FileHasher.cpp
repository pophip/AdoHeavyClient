#include "FileHasher.h"

#include "Log.h"
#include "FileChunk.h"
#include "ChunkByChunkFileReader.h"

HashSum FileHasher::hash(const char fileName[])
{
    Log::get() << "\n\nHashing " << fileName << Log::Endl;
    ChunkByChunkFileReader reader(fileName);
    return sha1(reader);
}

HashSum FileHasher::sha1(const ChunkByChunkFileReader & iReader)
{
    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_sha1();
    mdctx = EVP_MD_CTX_create();
    EVP_DigestInit_ex(mdctx, md, NULL);

    for( FileChunk chunk : iReader)
    {
        EVP_DigestUpdate(mdctx, chunk.data(), chunk.size());
    }
    HashSum sum;
    EVP_DigestFinal_ex(mdctx, sum.m_messageDigestValue.data()
                       , &sum.m_messageDigestlength);
    EVP_MD_CTX_destroy(mdctx);
    return sum;
}

