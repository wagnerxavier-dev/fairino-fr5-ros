# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wagnerxavier/ros2_ws/build/fr_ros2

# Include any dependencies generated for this target.
include CMakeFiles/srv_test_client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/srv_test_client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/srv_test_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/srv_test_client.dir/flags.make

CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o: CMakeFiles/srv_test_client.dir/flags.make
CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o: /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/main.cpp
CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o: CMakeFiles/srv_test_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wagnerxavier/ros2_ws/build/fr_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o -MF CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o.d -o CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o -c /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/main.cpp

CMakeFiles/srv_test_client.dir/examples/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/srv_test_client.dir/examples/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/main.cpp > CMakeFiles/srv_test_client.dir/examples/src/main.cpp.i

CMakeFiles/srv_test_client.dir/examples/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/srv_test_client.dir/examples/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/main.cpp -o CMakeFiles/srv_test_client.dir/examples/src/main.cpp.s

CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o: CMakeFiles/srv_test_client.dir/flags.make
CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o: /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/srv_test_client.cpp
CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o: CMakeFiles/srv_test_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wagnerxavier/ros2_ws/build/fr_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o -MF CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o.d -o CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o -c /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/srv_test_client.cpp

CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/srv_test_client.cpp > CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.i

CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2/examples/src/srv_test_client.cpp -o CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.s

# Object files for target srv_test_client
srv_test_client_OBJECTS = \
"CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o" \
"CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o"

# External object files for target srv_test_client
srv_test_client_EXTERNAL_OBJECTS =

srv_test_client: CMakeFiles/srv_test_client.dir/examples/src/main.cpp.o
srv_test_client: CMakeFiles/srv_test_client.dir/examples/src/srv_test_client.cpp.o
srv_test_client: CMakeFiles/srv_test_client.dir/build.make
srv_test_client: /opt/ros/humble/lib/librclcpp.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_fastrtps_c.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_introspection_c.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_fastrtps_cpp.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_introspection_cpp.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_cpp.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_generator_py.so
srv_test_client: /opt/ros/humble/lib/liblibstatistics_collector.so
srv_test_client: /opt/ros/humble/lib/librcl.so
srv_test_client: /opt/ros/humble/lib/librmw_implementation.so
srv_test_client: /opt/ros/humble/lib/libament_index_cpp.so
srv_test_client: /opt/ros/humble/lib/librcl_logging_spdlog.so
srv_test_client: /opt/ros/humble/lib/librcl_logging_interface.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
srv_test_client: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
srv_test_client: /opt/ros/humble/lib/librcl_yaml_param_parser.so
srv_test_client: /opt/ros/humble/lib/libyaml.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
srv_test_client: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
srv_test_client: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
srv_test_client: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
srv_test_client: /opt/ros/humble/lib/libtracetools.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
srv_test_client: /opt/ros/humble/lib/libfastcdr.so.1.0.24
srv_test_client: /opt/ros/humble/lib/librmw.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_typesupport_c.so
srv_test_client: /home/wagnerxavier/ros2_ws/install/frhal_msgs/lib/libfrhal_msgs__rosidl_generator_c.so
srv_test_client: /opt/ros/humble/lib/librosidl_typesupport_c.so
srv_test_client: /opt/ros/humble/lib/librcpputils.so
srv_test_client: /opt/ros/humble/lib/librosidl_runtime_c.so
srv_test_client: /opt/ros/humble/lib/librcutils.so
srv_test_client: /usr/lib/x86_64-linux-gnu/libpython3.10.so
srv_test_client: CMakeFiles/srv_test_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wagnerxavier/ros2_ws/build/fr_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable srv_test_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/srv_test_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/srv_test_client.dir/build: srv_test_client
.PHONY : CMakeFiles/srv_test_client.dir/build

CMakeFiles/srv_test_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/srv_test_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/srv_test_client.dir/clean

CMakeFiles/srv_test_client.dir/depend:
	cd /home/wagnerxavier/ros2_ws/build/fr_ros2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2 /home/wagnerxavier/ros2_ws/src/frcobot_ros2/fr_ros2 /home/wagnerxavier/ros2_ws/build/fr_ros2 /home/wagnerxavier/ros2_ws/build/fr_ros2 /home/wagnerxavier/ros2_ws/build/fr_ros2/CMakeFiles/srv_test_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/srv_test_client.dir/depend
