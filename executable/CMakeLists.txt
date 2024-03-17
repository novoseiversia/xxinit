add_executable(
	${executable_target_name}
	main.cxx
)

target_link_libraries(
	${executable_target_name}
	PRIVATE
		xxinit-base
)
