/**
 * The OpenIsolation Project
 */

#pragma once

class FILE_IN_INTERFACE {
public:
    virtual ~FILE_IN_INTERFACE() = default;
    virtual void* open(char const* fileName) = 0;
    virtual void read(void* file, unsigned int line) = 0;
    virtual void readln(char* lineData) = 0;
    virtual void tell() = 0;
    virtual int size() = 0;
    virtual void close() = 0;
protected:
    int fileSize;
};

class PackMemFileIn {
public:
    void* open(char const* fileName);
};

class PACK_MEM_FILE_IN : public FILE_IN_INTERFACE {
public:
    ~PACK_MEM_FILE_IN() override = default;
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
};

class PACK_FILE_IN : public FILE_IN_INTERFACE {
public:
    ~PACK_FILE_IN() override = default;
    void* open(char const* fileName) override;
    void read(void* file, unsigned int line) override;
    void readln(char* lineData) override;
    void tell() override;
    int size() override;
    void close() override;
private:
    PackFileIn* packFileIn;
};
