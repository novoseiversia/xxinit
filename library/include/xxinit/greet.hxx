#ifndef NOVOSEIVERSIA_XXINIT_LIBRARY_INCLUDE_GREET_HXX
#define NOVOSEIVERSIA_XXINIT_LIBRARY_INCLUDE_GREET_HXX

#include <string>



namespace novoseiversia::xxinit
{
	enum class Language
	{
		English,
		Filipino
	};

	auto greet(Language const lang, std::string const &name) -> void;
}



#endif
