add_library(
	${library_target_name}
	src/greet.cxx
)



target_include_directories(
	${library_target_name}
	PUBLIC
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>
)

target_compile_features(
	${library_target_name}
	PUBLIC
		cxx_std_20
)

target_compile_options(
	${library_target_name}
	PRIVATE
		$<$<CXX_COMPILER_ID:MSVC>:/W4 /w14640 /permissive->
		$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wpedantic>
)
