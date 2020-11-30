#pragma once
#include <string>

class Ornament
{

private:
	unsigned short o_id;
	std::string color;
	float volume;

public:

	static unsigned short id;

	Ornament();

	Ornament& operator = (Ornament&);

	explicit inline Ornament(const std::string&);

	Ornament(const std::string&, const float&);

	void Set_color(const std::string&);
	std::string Get_color() const;

	void Set_volume(const float&);
	float Get_volume() const;

	void Set_id();
	unsigned short Get_id() const;

	void Equal_id(const short&);

	friend std::ostream& operator << (std::ostream&, const Ornament&);

};