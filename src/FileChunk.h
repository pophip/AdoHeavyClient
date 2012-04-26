#ifndef FILECHUNK_H
#define FILECHUNK_H

#include <memory>
#include <array>

//constexpr unsigned long ChunkByteSize = 1024 * 1024; commented for testing
constexpr unsigned long ChunkByteSize = 64;

class FileChunk
{
    friend class ChunkByChunkFileReader;
    static constexpr unsigned long ChunkBufferSize = ChunkByteSize + 1; // The extra character at the end will be used to terminate the string with '\0'

public:
    FileChunk();
    void init();

    FileChunk(const FileChunk & other);
    FileChunk(FileChunk && other);

    const char * data() const;
    unsigned long long size() const;

private:
    unsigned long long m_realSize;
    std::unique_ptr<std::array<char, ChunkBufferSize> > m_data;
    void setSize(unsigned long long otherSize);
    char * dataPtr();
};

#endif // FILECHUNK_H
