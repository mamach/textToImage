# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mahesh/Desktop/researchGate/Projects/textToImage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mahesh/Desktop/researchGate/Projects/textToImage/build

# Include any dependencies generated for this target.
include src/CMakeFiles/textToImage.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/textToImage.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/textToImage.dir/flags.make

src/CMakeFiles/textToImage.dir/textToImage.cpp.o: src/CMakeFiles/textToImage.dir/flags.make
src/CMakeFiles/textToImage.dir/textToImage.cpp.o: ../src/textToImage.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mahesh/Desktop/researchGate/Projects/textToImage/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/textToImage.dir/textToImage.cpp.o"
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/textToImage.dir/textToImage.cpp.o -c /home/mahesh/Desktop/researchGate/Projects/textToImage/src/textToImage.cpp

src/CMakeFiles/textToImage.dir/textToImage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/textToImage.dir/textToImage.cpp.i"
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mahesh/Desktop/researchGate/Projects/textToImage/src/textToImage.cpp > CMakeFiles/textToImage.dir/textToImage.cpp.i

src/CMakeFiles/textToImage.dir/textToImage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/textToImage.dir/textToImage.cpp.s"
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mahesh/Desktop/researchGate/Projects/textToImage/src/textToImage.cpp -o CMakeFiles/textToImage.dir/textToImage.cpp.s

src/CMakeFiles/textToImage.dir/textToImage.cpp.o.requires:
.PHONY : src/CMakeFiles/textToImage.dir/textToImage.cpp.o.requires

src/CMakeFiles/textToImage.dir/textToImage.cpp.o.provides: src/CMakeFiles/textToImage.dir/textToImage.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/textToImage.dir/build.make src/CMakeFiles/textToImage.dir/textToImage.cpp.o.provides.build
.PHONY : src/CMakeFiles/textToImage.dir/textToImage.cpp.o.provides

src/CMakeFiles/textToImage.dir/textToImage.cpp.o.provides.build: src/CMakeFiles/textToImage.dir/textToImage.cpp.o

# Object files for target textToImage
textToImage_OBJECTS = \
"CMakeFiles/textToImage.dir/textToImage.cpp.o"

# External object files for target textToImage
textToImage_EXTERNAL_OBJECTS =

src/textToImage: src/CMakeFiles/textToImage.dir/textToImage.cpp.o
src/textToImage: src/CMakeFiles/textToImage.dir/build.make
src/textToImage: /usr/local/lib/libopencv_calib3d.so
src/textToImage: /usr/local/lib/libopencv_contrib.so
src/textToImage: /usr/local/lib/libopencv_core.so
src/textToImage: /usr/local/lib/libopencv_features2d.so
src/textToImage: /usr/local/lib/libopencv_flann.so
src/textToImage: /usr/local/lib/libopencv_gpu.so
src/textToImage: /usr/local/lib/libopencv_highgui.so
src/textToImage: /usr/local/lib/libopencv_imgproc.so
src/textToImage: /usr/local/lib/libopencv_legacy.so
src/textToImage: /usr/local/lib/libopencv_ml.so
src/textToImage: /usr/local/lib/libopencv_nonfree.so
src/textToImage: /usr/local/lib/libopencv_objdetect.so
src/textToImage: /usr/local/lib/libopencv_photo.so
src/textToImage: /usr/local/lib/libopencv_stitching.so
src/textToImage: /usr/local/lib/libopencv_ts.so
src/textToImage: /usr/local/lib/libopencv_video.so
src/textToImage: /usr/local/lib/libopencv_videostab.so
src/textToImage: src/libMisc.a
src/textToImage: src/CMakeFiles/textToImage.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable textToImage"
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/textToImage.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/textToImage.dir/build: src/textToImage
.PHONY : src/CMakeFiles/textToImage.dir/build

src/CMakeFiles/textToImage.dir/requires: src/CMakeFiles/textToImage.dir/textToImage.cpp.o.requires
.PHONY : src/CMakeFiles/textToImage.dir/requires

src/CMakeFiles/textToImage.dir/clean:
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src && $(CMAKE_COMMAND) -P CMakeFiles/textToImage.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/textToImage.dir/clean

src/CMakeFiles/textToImage.dir/depend:
	cd /home/mahesh/Desktop/researchGate/Projects/textToImage/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mahesh/Desktop/researchGate/Projects/textToImage /home/mahesh/Desktop/researchGate/Projects/textToImage/src /home/mahesh/Desktop/researchGate/Projects/textToImage/build /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src /home/mahesh/Desktop/researchGate/Projects/textToImage/build/src/CMakeFiles/textToImage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/textToImage.dir/depend

