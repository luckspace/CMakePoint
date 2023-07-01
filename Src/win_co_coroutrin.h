#pragma once

#include <string>

namespace luck {

	template<typename TC, const char *Scope>
	class LuckTempObj
	{
	public:
		using temp_type = TC;

		LuckTempObj() {
			sta_scope = Scope;
		}

		~LuckTempObj() {

		}

		const ::std::string& Scope() const { return sta_scope; }

	protected:

		void ResetScope(const ::std::string& _new) {
			sta_scope = _new;
		}

	private:
		::std::string sta_scope;
	};
}
