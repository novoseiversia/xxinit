#include "greet.hxx"

#include <format>
#include <iostream>



namespace novoseiversia::xxinit
{
	auto greet(Language const lang, std::string const &name) -> void
	{
		auto greeting = [lang]
		{
			switch (lang)
			{
			case Language::English: return "Hello";
			case Language::Filipino: return "Kamusta";
			}
		}();

		std::cout << std::format("{}, {}!\n", greeting, name);
	}
}
