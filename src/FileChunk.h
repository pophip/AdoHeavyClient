#ifndef FILECHUNK_H
#define FILECHUNK_H

#include <memory>
#include <array>

constexpr unsigned long ChunkByteSize = 1024 * 1024;

class FileChunk
{
    friend class ChunkByChunkFileReader;
public:
    FileChunk();

    FileChunk(const FileChunk & other);
    FileChunk(FileChunk && other);

    const char * data() const;
    unsigned long long size() const;

private:
    unsigned long long m_realSize;
    std::unique_ptr<std::array<char, ChunkByteSize> > m_data;
    void setSize(unsigned long long otherSize);
    char * dataPtr();
};

#endif // FILECHUNK_H
