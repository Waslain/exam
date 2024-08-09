#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-Brick Wall")
{

}

BrickWall::~BrickWall()
{
	
}

BrickWall *BrickWall::clone()
{
	return (new BrickWall());
}