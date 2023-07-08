//
// The OpenIsolation Project
//

#include <cstdint>

// Class Inheritance Summary
// 
// FILE_PACKER
//   NOTIFICATION_HANDLER
//   FILE_INTERFACE_COMMON
//     FILE_INTERFACE_READABLE
//     FILE_INTERFACE_STREAMABLE
//   PACKED_FILE_COMMON
//     PACKED_FILE_READABLE

namespace FILE_PACKER {
  // Forward-declarations.
  class PACKED_FILE_COMMON;

  struct CHUNK_INFO {

  };

  struct ENTRY {

  };

  class NOTIFICATION_HANDLER {
  public:
    enum class MSG_TYPE {
      UNKNOWN = 0,
    };

    static NOTIFICATION_HANDLER* get_default_handler();
    void log_msg(MSG_TYPE type, char const* msg, ...) const;
  private:
    inline static NOTIFICATION_HANDLER* instance;
  };

  class FILE_INTERFACE_COMMON {
  public:
    enum class OPERATION {
      /// I've only seen 1 being passed in to FILE_INTERFACE_COMMON::add_request so far, this might be a simple
      /// read operation - write support might be stripped out in release builds?
      DEFAULT = 1,
    };

    class FILE_REQUEST {
      enum class REQUEST_TYPE {
        UNKNOWN = 0,
        OPEN = 1,
        CLOSE = 2,
        SEEK = 3,
        READ = 4,
        WRITE = 5
      };
    };

    NOTIFICATION_HANDLER* get_notification_handler() const;
    /// The engine supports a maximum of 15 interface slots.
    void unregister_interface(std::uint32_t interfaceSlot);
    void add_request(OPERATION operation, std::uint64_t, std::uint64_t, std::uint32_t, ENTRY* entry, void*);
    void get_next_request();
    void notify_request_complete(std::uint64_t);
    void add_string_to_heap(const char* string);
    FILE_INTERFACE_COMMON(PACKED_FILE_COMMON* packedFileCommon);
    ~FILE_INTERFACE_COMMON();
    void tell();
    void flush();
  };

  class PACKED_FILE_COMMON {
  public:
    using PackedFileEntryID = std::uint32_t;

    /// <summary>
    /// Types of endianness supported by the file packer.
    /// </summary>
    enum class ENDIAN {
      LITTLE, // TODO! Assuming LITTLE is first in this enum, properly check this against the iOS port.
      BIG,
    };

    void notify_request_complete(FILE_INTERFACE_COMMON::FILE_REQUEST* request, bool);
    void open(const char* fileName, std::uint32_t, std::uint32_t, std::uint32_t, std::uint32_t, ENDIAN endianness);
    void read_header(FILE_INTERFACE_COMMON* fileInterfaceCommon);
    void alloc_fat(std::uint32_t, bool);
    void read_entries(ENTRY* entry, std::uint32_t, FILE_INTERFACE_COMMON* fileInterfaceCommon);
    // CA::HashTable<PackedFileEntryID, ENTRY*, CA::DefaultHasher<PackedFileEntryID>, CA::HashTableDefaultEquals<PackedFileEntryID>, CA::DefaultAllocator>::set(PackedFileEntryID const&, ENTRY* const&);
    void close();
    void discard_file_interface();
    void delete_file(std::uint32_t id);
    void get_file(std::uint32_t id, bool);
    void read_data(ENTRY* entry, std::uint8_t*, void*);
    void close_file(std::uint32_t id);
    void prepare_chunk_load(CHUNK_INFO& chunkInfo);
    void perform_chunk_load(CHUNK_INFO& chunkInfo);
    void release_chunk_load(CHUNK_INFO& chunkInfo);
  };
}


/**
  Symbols:
  FILE_PACKER::NOTIFICATION_HANDLER::get_default_handler()
  FILE_PACKER::FILE_INTERFACE_COMMON::get_notification_handler() const
  FILE_PACKER::FILE_INTERFACE_COMMON::unregister_interface(unsigned int)
  FILE_PACKER::FILE_INTERFACE_COMMON::add_request(FILE_PACKER::FILE_INTERFACE_COMMON::OPERATION, unsigned long, unsigned long, unsigned int, FILE_PACKER::ENTRY*, void*)
  FILE_PACKER::FILE_INTERFACE_COMMON::get_next_request()
  FILE_PACKER::FILE_INTERFACE_COMMON::notify_request_complete(unsigned long)
  FILE_PACKER::NOTIFICATION_HANDLER::log_msg(FILE_PACKER::NOTIFICATION_HANDLER::MSG_TYPE, char const*, ...) const
  FILE_PACKER::PACKED_FILE_COMMON::notify_request_complete(FILE_PACKER::FILE_INTERFACE_COMMON::FILE_REQUEST*, bool)
  FILE_PACKER::FILE_INTERFACE_COMMON::add_string_to_heap(char const*)
  FILE_PACKER::FILE_INTERFACE_COMMON::FILE_INTERFACE_COMMON(FILE_PACKER::PACKED_FILE_COMMON*)
  FILE_PACKER::FILE_INTERFACE_READABLE::FILE_INTERFACE_READABLE(FILE_PACKER::PACKED_FILE_COMMON*)
  FILE_PACKER::FILE_INTERFACE_READABLE::~FILE_INTERFACE_READABLE()
  FILE_PACKER::FILE_INTERFACE_READABLE::~FILE_INTERFACE_READABLE()
  FILE_PACKER::FILE_INTERFACE_READABLE::service_next_request()
  FILE_PACKER::PACKED_FILE_COMMON::open(char const*, unsigned int, unsigned int, unsigned int, unsigned int, FILE_PACKER::PACKED_FILE_COMMON::ENDIAN)
  FILE_PACKER::FILE_INTERFACE_READABLE::get_size()
  FILE_PACKER::PACKED_FILE_COMMON::read_header(FILE_PACKER::FILE_INTERFACE_COMMON*)
  FILE_PACKER::PACKED_FILE_COMMON::alloc_fat(unsigned int, bool)
  FILE_PACKER::PACKED_FILE_COMMON::read_entries(FILE_PACKER::ENTRY*, unsigned int, FILE_PACKER::FILE_INTERFACE_COMMON*)
  CA::HashTable<unsigned int, FILE_PACKER::ENTRY*, CA::DefaultHasher<unsigned int>, CA::HashTableDefaultEquals<unsigned int>, CA::DefaultAllocator>::set(unsigned int const&, FILE_PACKER::ENTRY* const&)
  FILE_PACKER::PACKED_FILE_COMMON::close()
  FILE_PACKER::PACKED_FILE_COMMON::discard_file_interface()
  FILE_PACKER::PACKED_FILE_COMMON::delete_file(unsigned int)
  FILE_PACKER::PACKED_FILE_COMMON::get_file(unsigned int, bool)
  FILE_PACKER::PACKED_FILE_COMMON::read_data(FILE_PACKER::ENTRY*, unsigned char*, void*)
  FILE_PACKER::PACKED_FILE_COMMON::close_file(unsigned int)
  FILE_PACKER::PACKED_FILE_COMMON::prepare_chunk_load(FILE_PACKER::CHUNK_INFO&)
  FILE_PACKER::PACKED_FILE_COMMON::perform_chunk_load(FILE_PACKER::CHUNK_INFO&)
  FILE_PACKER::PACKED_FILE_COMMON::release_chunk_load(FILE_PACKER::CHUNK_INFO&)
  FILE_PACKER::FILE_INTERFACE_COMMON::~FILE_INTERFACE_COMMON()
  FILE_PACKER::FILE_INTERFACE_COMMON::~FILE_INTERFACE_COMMON()
  FILE_PACKER::FILE_INTERFACE_COMMON::tell()
  FILE_PACKER::FILE_INTERFACE_COMMON::flush()
  FILE_PACKER::FILE_INTERFACE_READABLE::tell()
  FILE_PACKER::FILE_INTERFACE_READABLE::FILE_INTERFACE_READABLE(FILE_PACKER::PACKED_FILE_COMMON*) [clone .cold.1]
  FILE_PACKER::PACKED_FILE_COMMON::open(char const*, unsigned int, unsigned int, unsigned int, unsigned int, FILE_PACKER::PACKED_FILE_COMMON::ENDIAN) [clone .cold.1]
  GCC_except_table19
  GCC_except_table25
  GCC_except_table28
  GCC_except_table31
  typeinfo name for FILE_PACKER::FILE_INTERFACE_COMMON
  typeinfo name for FILE_PACKER::PACKED_FILE_COMMON
  typeinfo name for FILE_PACKER::FILE_INTERFACE_READABLE
  typeinfo name for FILE_PACKER::NOTIFICATION_HANDLER
  vtable for FILE_PACKER::NOTIFICATION_HANDLER
  vtable for FILE_PACKER::FILE_INTERFACE_READABLE
  vtable for FILE_PACKER::FILE_INTERFACE_COMMON
  typeinfo for FILE_PACKER::FILE_INTERFACE_COMMON
  vtable for FILE_PACKER::PACKED_FILE_COMMON
  typeinfo for FILE_PACKER::PACKED_FILE_COMMON
  typeinfo for FILE_PACKER::FILE_INTERFACE_READABLE
  typeinfo for FILE_PACKER::NOTIFICATION_HANDLER
  FILE_PACKER::NOTIFICATION_HANDLER::get_default_handler()::instance
  FILE_PACKER::FILE_INTERFACE_COMMON::m_interface_entry
  guard variable for FILE_PACKER::NOTIFICATION_HANDLER::get_default_handler()::instance
*/
