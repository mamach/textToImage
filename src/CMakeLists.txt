# include_directories(${PROJECT_SOURCE_DIR}/src)
# link_directories(${PROJECT_BINARY_DIR}/src)

#the one C file
find_package( OpenCV REQUIRED )
set(CORELIBS ${OpenCV_LIBS} m)
add_library(Misc Misc.cpp)
add_executable( textToImage textToImage.cpp )
target_link_libraries(textToImage ${CORELIBS} Misc) #link the math library

#these are all compiled the same way
# set(PROGRAMS oglfirst pointers)
# set(CORELIBS ${GLUT_LIBRARY} ${OPENGL_LIBRARY} m)
# 
# foreach(program ${PROGRAMS})
#   add_executable(${program} ${program}.cpp)
#   target_link_libraries(${program} ${CORELIBS} )
# endforeach(program)

#building just a library. 
# add_library(geometry geometry.cpp)
# 
# add_executable(test_geometry test_geometry.cpp)
#linking against a custom library
# target_link_libraries(test_geometry ${CORELIBS} geometry)

