/****************************************************************************
**
** Copyright (C) 2013 Jolla Ltd
** Contact: lorn.potter@jollamobile.com
**
** Copyright (C) 2020 Darrel Griët
** Contact: idanlcontact@gmail.com
**
**
** $QT_BEGIN_LICENSE:LGPL$
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "hybriswristgestureadaptorplugin.h"
#include "hybriswristgestureadaptor.h"
#include "sensormanager.h"
#include "logging.h"

void HybrisWristGestureAdaptorPlugin::Register(class Loader&)
{
    sensordLogD() << "registering hybriswristgestureadaptor";
    SensorManager& sm = SensorManager::instance();
    sm.registerDeviceAdaptor<HybrisWristGestureAdaptor>("wristgestureadaptor");
}
