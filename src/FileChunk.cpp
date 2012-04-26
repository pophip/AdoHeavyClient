#include "FileChunk.h"

#include <algorithm>

FileChunk::FileChunk()
    : m_realSize(0)
    , m_data(nullptr)
{
}

FileChunk::FileChunk(const FileChunk &other)
    : m_realSize(other.m_realSize)
    , m_data(new std::array<char, ChunkByteSize>)
{
    std::copy(other.m_data->begin()
              , other.m_data->end()
              , other.m_data->begin());
}

FileChunk::FileChunk(FileChunk && other)
    : m_realSize(other.m_realSize)
    , m_data(nullptr)
{
    m_data = std::move(other.m_data);
}

const char * FileChunk::data() const
{
    return m_data->data();
}

char * FileChunk::dataPtr()
{
    return m_data->data();
}

unsigned long long FileChunk::size() const
{
    return m_realSize;
}

void FileChunk::setSize(unsigned long long otherSize)
{
    m_realSize = otherSize;
}
