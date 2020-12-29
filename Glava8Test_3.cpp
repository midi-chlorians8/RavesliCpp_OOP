
#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <string>


class Monster{
     
public:
    enum MonsterType 
{
	Dragon,
	Goblin,
	Ogre,
    Orc,
    Skeleton,
    Troll,
    Vampire,
    Zombie,
    MAX_MONSTER_TYPES
};
    Monster(MonsterType M_type, std::string name,int health){
        m_type = M_type;
        m_name = name;
        m_health = health;
    }
    std::string getTypeString() const
	{
		switch (m_type)
		{
		case Dragon: return "dragon";
		case Goblin: return "goblin";
		case Ogre: return "ogre";
		case Orc: return "orc";
		case Skeleton: return "skeleton";
		case Troll: return "troll";
		case Vampire: return "vampire";
		case Zombie: return "zombie";
		}
	
		return "Error!";
	}
    void print(){
        std::cout << m_name << " is the " << getTypeString() << " that has " << m_health <<  " health point\n";
    }
    static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
		// Равномерно распределяем вычисление значения из нашего диапазона
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}
private:
    MonsterType m_type; //monsterType
    std::string m_name;
    int m_health;
};

class MonsterGenerator {

public:
        static Monster generateMonster(){
            //Monster GenerateMonster(Monster::Orc, "Jack", 90);
            Monster::MonsterType type = Monster::MonsterType(Monster::getRandomNumber(0,Monster::MAX_MONSTER_TYPES-1) );
            std::string name[] ={ "jack", "hurry", "piter", "far" };
   
            int health = Monster::getRandomNumber(0,100);

            return Monster(type,name[Monster::getRandomNumber(0,3)], health);
        }
};
int main()
{
     srand(4541); // устанавливаем стартовое значение - 4 541
	//Monster jack(Monster::Orc, "Jack", 90);
    //jack.print();
    Monster m = MonsterGenerator::generateMonster();
	m.print();
    
    Monster s = MonsterGenerator::generateMonster();
	s.print();

    Monster t = MonsterGenerator::generateMonster();
	t.print();

     Monster z = MonsterGenerator::generateMonster();
	z.print();

    Monster x = MonsterGenerator::generateMonster();
	x.print();
    return 0;
}
// Остановился на  №3.f)