
spec2def(shimgvw.dll shimgvw.spec)

list(APPEND SOURCE
    anime.c
    loader.cpp
    shimgvw.c
    comsup.c
    shimgvw.rc
    util.c
    ${CMAKE_CURRENT_BINARY_DIR}/shimgvw_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/shimgvw.def)

file(GLOB_RECURSE shimgvw_rc_deps res/*.*)
add_rc_deps(shimgvw.rc ${shimgvw_rc_deps})

add_library(shimgvw MODULE ${SOURCE})
set_module_type(shimgvw win32dll UNICODE)
target_link_libraries(shimgvw wine)
add_importlibs(shimgvw advapi32 comctl32 user32 gdi32 shell32 ole32 gdiplus comdlg32 shlwapi msvcrt kernel32 ntdll)
add_cd_file(TARGET shimgvw DESTINATION reactos/system32 FOR all)
