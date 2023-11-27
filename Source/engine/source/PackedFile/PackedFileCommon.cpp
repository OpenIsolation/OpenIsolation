//
// The OpenIsolation Project
//

#include "PackedFile/PackedFileCommon.h"

FILE_PACKER::NOTIFICATION_HANDLER* FILE_PACKER::NOTIFICATION_HANDLER::get_default_handler() {
  return instance;
}

