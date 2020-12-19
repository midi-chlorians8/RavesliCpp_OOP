//https://ravesli.com/urok-117-spisok-initsializatsii-chlenov-klassa/
#include <iostream>
#include <string>
using namespace std;
#include <cstdint>

class RGBA{
std::uint8_t m_red ; 
std::uint8_t m_green ;
std::uint8_t m_blue ;
std::uint8_t m_alpha ;

public:
  RGBA(std::uint8_t red=1, std::uint8_t green=1, std::uint8_t blue=1, std::uint8_t m_alpha=200) // на этой строке уже и так много чего,
        : m_red(red), // поэтому выделяем каждому инициализатору отдельную строку, не забывая о запятой в конце
        m_green(green),
        m_blue(blue),
        m_alpha(m_alpha) 
        {

        }
        void print()
	{
		std::cout << "r=" << static_cast<int>(m_red) <<
			" g=" << static_cast<int>(m_green) <<
			" b=" << static_cast<int>(m_blue) <<
			" a=" << static_cast<int>(m_alpha) << '\n';
	}

};


int main(){
 	RGBA color(0, 135, 135,4);
	color.print();
 
     return 0;
}