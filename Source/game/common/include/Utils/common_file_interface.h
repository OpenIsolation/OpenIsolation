/**
 * The OpenIsolation Project
 */

#pragma once

#include <cstdint>
#include <CAPackFile.h>

class FILE_IN_INTERFACE {
	friend PACK_MEM_FILE_IN;
	friend PACK_FILE_IN;
public:
    virtual ~FILE_IN_INTERFACE() = 0;
    virtual void* open(char const* fileName) = 0;
    virtual void read(void* file, unsigned int line) = 0;
    virtual void readln(char* lineData) = 0;
    virtual void tell() = 0;
    virtual int size() = 0;
    virtual void close() = 0;
protected:
    std::uint8_t position;
    std::uint8_t fileSize;
};

class PackMemFileIn {
public:
    void* open(char const* fileName);
};

class PACK_MEM_FILE_IN : FILE_IN_INTERFACE {
public:
    ~PACK_MEM_FILE_IN() = 0;
    void* open(char const* fileName) override;
    void read(void* file, unsigned int line) override;
    void readln(char* lineData) override;
    void tell() override;
    int size() override;
    void close() override;
private:
    PackMemFileIn* packMemFileIn;
};

class PackFileIn {
public:
    void* open(char const* fileName);
    void readln(char* lineData);
    std::uint8_t numEntries;
    CA::PackFileEntry* packFileEntry;
};

class PACK_FILE_IN : FILE_IN_INTERFACE {
public:
    ~PACK_FILE_IN() override = 0;
    void* open(char const* fileName) override;
    void read(void* file, unsigned int line) override;
    void readln(char* lineData) override;
    void tell() override;
    int size() override;
    void close() override;
private:
    PackFileIn* packFileIn;
	//std::uint8_t position;
	//std::uint8_t fileSize;
};
