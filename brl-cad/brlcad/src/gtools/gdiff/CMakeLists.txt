set(GDIFF_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${BU_INCLUDE_DIRS}
  ${BU_INCLUDE_DIRS}
  ${RT_INCLUDE_DIRS}
  )
list(REMOVE_DUPLICATES GDIFF_INCLUDE_DIRS)
include_directories(${GDIFF_INCLUDE_DIRS})

set(gdiff_srcs
  diff3_summary.c
  diff_summary.c
  gdiff.c
  merge.c
  utility.c
  )

BRLCAD_ADDEXEC(gdiff "${gdiff_srcs}" "librt")

CMAKEFILES(
  CMakeLists.txt
  gdiff.h
  tests/00_moss-control.asc
  tests/01_moss-diff.asc
  tests/02_moss-3diff.asc
  )

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
