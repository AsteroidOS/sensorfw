/**
   @file normalizerfilter.cpp
   @brief NormalizerFilter
   <p>
   Copyright (C) 2009-2010 Nokia Corporation

   @author Marja Hassinen <ext-marja.2.hassinen@nokia.com>

   This file is part of Sensord.

   Sensord is free software; you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License
   version 2.1 as published by the Free Software Foundation.

   Sensord is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with Sensord.  If not, see <http://www.gnu.org/licenses/>.
   </p>
*/

#include "normalizerfilter.h"
#include "genericdata.h"
#include <math.h>

NormalizerFilter::NormalizerFilter() :
        Filter<TimedXyzData, NormalizerFilter, double>(this, &NormalizerFilter::interpret)
{
    //qDebug() << "Creating the NormalizerFilter";
}

void NormalizerFilter::interpret(unsigned, const TimedXyzData* data)
{
    //qDebug() << "Data received on Normalizer... analyzing and pushing forward";
    double n = sqrt(data->x_ * data->x_ + data->y_ * data->y_ + data->z_ * data-> z_);
    source_.propagate(1, &n);
}
