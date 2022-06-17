file(REMOVE_RECURSE
  "../_headers_/client/Client.edl"
  "../_headers_/client/Client.edl.h"
  "Client.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/client_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
