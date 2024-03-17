cmake_minimum_required(VERSION 3.21)

project(xxinit LANGUAGES CXX)



add_library(xxinit-base INTERFACE)

target_include_directories(
	xxinit-base
	INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_compile_features(
	xxinit-base
	INTERFACE
		cxx_std_20
)

target_compile_options(
	xxinit-base
	INTERFACE
		$<$<CXX_COMPILER_ID:MSVC>:/W4 /w14640 /permissive->
		$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wpedantic>
)



set(executable_target_name xxinit-exe)

add_subdirectory(executable)
