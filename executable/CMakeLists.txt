add_executable(
	${executable_target_name}
	src/main.cxx
)

target_link_libraries(
	${executable_target_name}
	PRIVATE
		${base_target_name}
)
