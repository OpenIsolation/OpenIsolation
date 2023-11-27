/*
 * The OpenIsolation Project
 */

#include "CTMemoryIBKHeaps.h"

using STREAMED_FILE_HANDLE = void*;

enum class STREAMED_FILE_STATE {
  UNKNOWN,
};

class StreamFileInManager {
public:
  void create();
  void _callback_handler(STREAMED_FILE_HANDLE* handle, STREAMED_FILE_STATE state, void*);
  void init(CA::CTMemory::Heap& heap);
  void update();
  void open_packfile(const char* fileName);
  void clean_up();
  void shutdown();
private:
  static void* m_read_mutex;
  static StreamFileInManager* singleton;
};

class StreamFileIn {
public:

};

class StreamFileInInternal {
public:

};

