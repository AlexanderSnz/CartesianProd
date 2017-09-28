
#pragma once

#include <vector>

namespace CarteianProduct
{
	class List
	{
	public:
		List();
		~List();

		bool IsEmpty() const
		{
			return myList.empty();
		}

		void AddValue(size_t value)
		{
			myList.push_back(value);
		}

		size_t GetValue(size_t index) const
		{
			return myList.at(index);
		}

		std::vector<size_t>::const_iterator& begin() const
		{
			return myList.begin();
		}

	private:
		std::vector<size_t> myList;
	};

}