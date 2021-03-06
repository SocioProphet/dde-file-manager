/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i acesscontrol/acesscontrolmanager.h -c AcessControlAdaptor -l AcessControlManager -a dbusadaptor/acesscontrol_adaptor acesscontrol.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ACESSCONTROL_ADAPTOR_H
#define ACESSCONTROL_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "acesscontrol/acesscontrolmanager.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.filemanager.daemon.AcessControlManager
 */
class AcessControlAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.filemanager.daemon.AcessControlManager")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.filemanager.daemon.AcessControlManager\">\n"
"    <method name=\"acquireFullAuthentication\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"userName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"path\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AcessControlAdaptor(AcessControlManager *parent);
    virtual ~AcessControlAdaptor();

    inline AcessControlManager *parent() const
    { return static_cast<AcessControlManager *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool acquireFullAuthentication(const QString &userName, const QString &path);
Q_SIGNALS: // SIGNALS
};

#endif
