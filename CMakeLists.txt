cmake_minimum_required(VERSION 3.21)

project(xxinit LANGUAGES CXX)



set(base_target_name xxinit-base)
set(executable_target_name xxinit-exe)



add_library(${base_target_name} INTERFACE)

target_include_directories(
	${base_target_name}
	INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_compile_features(
	${base_target_name}
	INTERFACE
		cxx_std_20
)

target_compile_options(
	${base_target_name}
	INTERFACE
		$<$<CXX_COMPILER_ID:MSVC>:/W4 /w14640 /permissive->
		$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wpedantic>
)



add_subdirectory(executable)
