#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector<char> foo(std::list<Human>& people)
{
    std::vector<char> retval(people.size());
    auto itOut = retval.begin(); // iterator po elem. wyjściowych

    std::for_each(people.begin(), people.end(),
        [&](Human& h)
        {
            h.birthday();  // analogicznie jak w oryginale

            *itOut++ = (h.isMonster() ? 'n' : 'y');


        }
    );

    std::reverse(retval.begin(), retval.end());

    return retval;
}
