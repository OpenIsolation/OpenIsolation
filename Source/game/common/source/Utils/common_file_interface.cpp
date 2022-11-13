/**
 * The OpenIsolation Project
 */

#include "Utils/common_file_interface.h"

void* PACK_MEM_FILE_IN::open(const char* fileName) {
    return packMemFileIn->open(fileName);
}

void PACK_MEM_FILE_IN::read(void* file, unsigned int line) {
    throw;
}

void PACK_MEM_FILE_IN::readln(char* lineData) {
    throw;
}

void PACK_MEM_FILE_IN::tell() {
    throw;
}

int PACK_MEM_FILE_IN::size() {
    throw;
}

void PACK_MEM_FILE_IN::close() {
    throw;
}

void* PackMemFileIn::open(const char* fileName) {
    throw;
    return nullptr;
}

void* PACK_FILE_IN::open(const char* fileName) {
    return this->packFileIn->open(fileName);
}

void PACK_FILE_IN::read(void* file, unsigned int line) {

}

void PACK_FILE_IN::readln(char* lineData) {
    this->packFileIn->readln(lineData);
}

void PACK_FILE_IN::tell() {

}

int PACK_FILE_IN::size() {
    if (this->packFileIn != nullptr) {
        return this->fileSize;
    }

    return 0;
}

void PACK_FILE_IN::close() {

}

void* PackFileIn::open(const char* fileName) {
    throw;
    return nullptr;
}

void PackFileIn::readln(char* lineData) {

}
