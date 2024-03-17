add_executable(
	${executable_target_name}
	src/greet.cxx
	src/main.cxx
)



target_include_directories(
	${executable_target_name}
	PRIVATE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_compile_features(
	${executable_target_name}
	PRIVATE
		cxx_std_20
)

target_compile_options(
	${executable_target_name}
	PRIVATE
		$<$<CXX_COMPILER_ID:MSVC>:/W4 /w14640 /permissive->
		$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wpedantic>
)
