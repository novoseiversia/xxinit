#include "greet.hxx"

#include <format>
#include <iostream>



namespace novoseiversia::xxinit
{
	auto greet(std::string const &name) -> void
	{
		std::cout << std::format("Hello, {}!\n", name);
	}
}
