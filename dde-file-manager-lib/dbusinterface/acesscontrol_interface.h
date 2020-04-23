/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c AcessControlInterface -p dbusinterface/acesscontrol_interface acesscontrol.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ACESSCONTROL_INTERFACE_H
#define ACESSCONTROL_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.daemon.AcessControlManager
 */
class AcessControlInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.daemon.AcessControlManager"; }

public:
    AcessControlInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~AcessControlInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> acquireFullAuthentication(const QString &userName, const QString &path)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(userName) << QVariant::fromValue(path);
        return asyncCallWithArgumentList(QStringLiteral("acquireFullAuthentication"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace deepin {
    namespace filemanager {
      namespace daemon {
        typedef ::AcessControlInterface AcessControlManager;
      }
    }
  }
}
#endif
