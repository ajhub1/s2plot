FILE(REMOVE_RECURSE
  "CMakeFiles/myapp.dir/myapp.cpp.o"
  "myapp.pdb"
  "myapp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/myapp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
