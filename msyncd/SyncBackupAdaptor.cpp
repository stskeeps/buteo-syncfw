/*
 * This file is part of buteo-syncfw package
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Sateesh Kavuri <sateesh.kavuri@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */
/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a SyncBackupAdaptor -c SyncBackupAdaptor com.nokia.syncbackup.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "SyncBackupAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

using namespace Buteo;
/*
 * Implementation of adaptor class SyncBackupAdaptor
 */

SyncBackupAdaptor::SyncBackupAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SyncBackupAdaptor::~SyncBackupAdaptor()
{
    // destructor
}

uchar SyncBackupAdaptor::backupFinished(const QDBusMessage &message)
{
    // handle method call com.nokia.backupclient.backupFinished
    uchar out0;
    QMetaObject::invokeMethod(parent(), "backupFinished", Q_RETURN_ARG(uchar, out0), Q_ARG (QDBusMessage ,message));
    return out0;
}

uchar SyncBackupAdaptor::backupStarts(const QDBusMessage &message)
{
    // handle method call com.nokia.backupclient.backupStarts
    uchar out0;
    QMetaObject::invokeMethod(parent(), "backupStarts", Q_RETURN_ARG(uchar, out0), Q_ARG (QDBusMessage ,message));
    return out0;
}

bool SyncBackupAdaptor::getBackUpRestoreState()
{
    // handle method call com.nokia.backupclient.getBackUpRestoreState
    bool out0;
    QMetaObject::invokeMethod(parent(), "getBackUpRestoreState", Q_RETURN_ARG(bool, out0));
    return out0;
}

uchar SyncBackupAdaptor::restoreFinished(const QDBusMessage &message)
{
    // handle method call com.nokia.backupclient.restoreFinished
    uchar out0;
    QMetaObject::invokeMethod(parent(), "restoreFinished", Q_RETURN_ARG(uchar, out0), Q_ARG (QDBusMessage ,message));
    return out0;
}

uchar SyncBackupAdaptor::restoreStarts(const QDBusMessage &message)
{
    // handle method call com.nokia.backupclient.restoreStarts
    uchar out0;
    QMetaObject::invokeMethod(parent(), "restoreStarts", Q_RETURN_ARG(uchar, out0), Q_ARG (QDBusMessage ,message));
    return out0;
}
