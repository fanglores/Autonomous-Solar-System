file(REMOVE_RECURSE
  "../_headers_/vfs/NetVfs.edl"
  "../_headers_/vfs/NetVfs.edl.h"
  "NetVfs.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/net_vfs_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
