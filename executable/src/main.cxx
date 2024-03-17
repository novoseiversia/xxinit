#include <cstdlib>

#include "greet.hxx"
#include "xxinit/greet.hxx"



auto main() -> int
{
	novoseiversia::xxinit::greet("novoseiversia");
	novoseiversia::xxinit::greet(novoseiversia::xxinit::Language::Filipino, "novoseiversia");
	return EXIT_SUCCESS;
}
