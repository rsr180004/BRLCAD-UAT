add_subdirectory(scripts)

set(sdialogs_TCLSCRIPTS
  sdialogs.tcl
  )
BRLCAD_ADDDATA(sdialogs_TCLSCRIPTS tclscripts/sdialogs)
pkgIndex_BUILD(tclscripts/sdialogs)
tclIndex_BUILD(tclscripts/sdialogs)

CMAKEFILES(CMakeLists.txt)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
