# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/luis/2018-phd-luis-caiza/src/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luis/2018-phd-luis-caiza/build/mavlink

# Utility rule file for ardupilotmega.xml-v2.0.

# Include the progress variables for this target.
include CMakeFiles/ardupilotmega.xml-v2.0.dir/progress.make

CMakeFiles/ardupilotmega.xml-v2.0: ardupilotmega-v2.0-cxx-stamp


ardupilotmega-v2.0-cxx-stamp: /home/luis/2018-phd-luis-caiza/src/mavlink/message_definitions/v1.0/ardupilotmega.xml
ardupilotmega-v2.0-cxx-stamp: /home/luis/2018-phd-luis-caiza/src/mavlink/message_definitions/v1.0/common.xml
ardupilotmega-v2.0-cxx-stamp: /home/luis/2018-phd-luis-caiza/src/mavlink/pymavlink/tools/mavgen.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/luis/2018-phd-luis-caiza/build/mavlink/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ardupilotmega-v2.0-cxx-stamp"
	/usr/bin/env PYTHONPATH="/home/luis/2018-phd-luis-caiza/src/mavlink:/home/luis/catkin_ws/devel/lib/python2.7/dist-packages:/opt/ros/kinetic/lib/python2.7/dist-packages" /usr/bin/python /home/luis/2018-phd-luis-caiza/src/mavlink/pymavlink/tools/mavgen.py --lang=C++11 --wire-protocol=2.0 --output=include/v2.0 /home/luis/2018-phd-luis-caiza/src/mavlink/message_definitions/v1.0/ardupilotmega.xml
	touch ardupilotmega-v2.0-cxx-stamp

ardupilotmega.xml-v2.0: CMakeFiles/ardupilotmega.xml-v2.0
ardupilotmega.xml-v2.0: ardupilotmega-v2.0-cxx-stamp
ardupilotmega.xml-v2.0: CMakeFiles/ardupilotmega.xml-v2.0.dir/build.make

.PHONY : ardupilotmega.xml-v2.0

# Rule to build all files generated by this target.
CMakeFiles/ardupilotmega.xml-v2.0.dir/build: ardupilotmega.xml-v2.0

.PHONY : CMakeFiles/ardupilotmega.xml-v2.0.dir/build

CMakeFiles/ardupilotmega.xml-v2.0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ardupilotmega.xml-v2.0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ardupilotmega.xml-v2.0.dir/clean

CMakeFiles/ardupilotmega.xml-v2.0.dir/depend:
	cd /home/luis/2018-phd-luis-caiza/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luis/2018-phd-luis-caiza/src/mavlink /home/luis/2018-phd-luis-caiza/src/mavlink /home/luis/2018-phd-luis-caiza/build/mavlink /home/luis/2018-phd-luis-caiza/build/mavlink /home/luis/2018-phd-luis-caiza/build/mavlink/CMakeFiles/ardupilotmega.xml-v2.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ardupilotmega.xml-v2.0.dir/depend

