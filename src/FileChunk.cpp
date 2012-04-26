#include "FileChunk.h"

#include <algorithm>

FileChunk::FileChunk()
    : m_realSize(0)
    , m_data(nullptr)
{
}

void FileChunk::init()
{
    if (m_data.get() == nullptr)
    {
        m_data.reset(new  std::array<char, ChunkBufferSize>);
        m_data->fill('\0');
    }
}

FileChunk::FileChunk(const FileChunk &other)
    : m_realSize(other.m_realSize)
    , m_data(new std::array<char, ChunkBufferSize>)
{
    m_data->fill('\0');
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
