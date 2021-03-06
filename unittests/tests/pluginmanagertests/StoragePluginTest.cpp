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
#include "StoragePluginTest.h"

#include "SyncFwTestLoader.h"

#include "PluginManager.h"

using namespace Buteo;

void StoragePluginTest::testCreateDestroy()
{
    QDir dir = QDir::current();
    QString path = dir.absolutePath();
    if (dir.cd("../dummyplugins/dummystorage/"))
    {
        path = dir.absolutePath();
    } // no else

    PluginManager pluginManager( path );

    StoragePlugin* storage1 = pluginManager.createStorage( "hdummy" );
    QVERIFY( storage1 );
    QVERIFY( pluginManager.iLoadedDlls.count() == 1 );

    StoragePlugin* storage2 = pluginManager.createStorage( "hdummy" );

    QVERIFY( storage2 );
    QVERIFY( pluginManager.iLoadedDlls.count() == 1 );

    pluginManager.destroyStorage( storage1 );

    QVERIFY( pluginManager.iLoadedDlls.count() == 1 );

    pluginManager.destroyStorage(storage2 );

    QVERIFY( pluginManager.iLoadedDlls.count() == 0 );
}

TESTLOADER_ADD_TEST(StoragePluginTest);
