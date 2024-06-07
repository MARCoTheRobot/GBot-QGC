/****************************************************************************
** Meta object code from reading C++ file 'APMFirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/APM/APMFirmwarePlugin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFirmwarePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS = QtMocHelpers::stringData(
    "APMFirmwarePlugin",
    "_artooSocketError",
    "",
    "QAbstractSocket::SocketError",
    "socketError"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS_t qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "APMFirmwarePlugin"
        QT_MOC_LITERAL(18, 17),  // "_artooSocketError"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(66, 11)   // "socketError"
    },
    "APMFirmwarePlugin",
    "_artooSocketError",
    "",
    "QAbstractSocket::SocketError",
    "socketError"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMFirmwarePluginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMFirmwarePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<FirmwarePlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMFirmwarePluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMFirmwarePlugin, std::true_type>,
        // method '_artooSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>
    >,
    nullptr
} };

void APMFirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMFirmwarePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_artooSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *APMFirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMFirmwarePluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FirmwarePlugin::qt_metacast(_clname);
}

int APMFirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FirmwarePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS = QtMocHelpers::stringData(
    "APMFirmwarePluginInstanceData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS_t qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "APMFirmwarePluginInstanceData"
    },
    "APMFirmwarePluginInstanceData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMFirmwarePluginInstanceDataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject APMFirmwarePluginInstanceData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMFirmwarePluginInstanceDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMFirmwarePluginInstanceData, std::true_type>
    >,
    nullptr
} };

void APMFirmwarePluginInstanceData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *APMFirmwarePluginInstanceData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFirmwarePluginInstanceData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMFirmwarePluginInstanceDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMFirmwarePluginInstanceData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
