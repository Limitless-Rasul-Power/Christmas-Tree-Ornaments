#include <iostream>
#include <assert.h>
#include "Glass_Ornaments.h"

Ornament::Ornament():o_id(0), color(""), volume(0.0f)
{}

Ornament& Ornament::operator = (Ornament& other)
{
	Set_color(other.Get_color());
	Equal_id(other.Get_id());
	Set_volume(other.Get_volume());

	return *this;
}

inline Ornament::Ornament(const std::string& color)
{
	Set_color(color);
}

Ornament::Ornament(const std::string& color, const float& volume)
	:Ornament(color)
{
	Set_volume(volume);
	Set_id();
}

void Ornament::Set_color(const std::string& color)
{
	assert(!color.empty() && "Color is Empty!");
	this->color = color;
}

std::string Ornament::Get_color() const
{
	return color;
}

void Ornament::Set_volume(const float& volume)
{
	assert(volume > 0 && "Volume is 0 or smaller than 0!!");
	this->volume = volume;
}

float Ornament::Get_volume() const
{
	return volume;
}

void Ornament::Set_id()
{
	this->o_id = ++id;
}

unsigned short Ornament::Get_id() const
{
	return o_id;
}

void Ornament::Equal_id(const short& id)
{
	assert(id > 0 && "ID is 0 or smaller than 0!");
	this->o_id = id;
}

std::ostream& operator << (std::ostream& out, const Ornament& ornament)
{
	out << "Ornament ID: " << ornament.Get_id() << '\n';
	out << "Ornament Color: " << ornament.Get_color() << '\n';
	out << "Ornament Volume: " << ornament.Get_volume() << "\n\n";

	return out;
}