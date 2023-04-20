//
// Created by pytlu on 13.04.2023.
//

#include "Mieszkaniec.h"
Mieszkaniec::Mieszkaniec(char _symbol)
{
    symbol = _symbol;
}

Mieszkaniec::Mieszkaniec(const Mieszkaniec &mieszkaniec)
{
    symbol = mieszkaniec.symbol;
}

char Mieszkaniec::jakiSymbol() const
{
    return symbol;
}

Mieszkaniec::~Mieszkaniec()
{

}