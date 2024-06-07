/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/PX4/PX4FirmwarePlugin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwarePlugin.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS = QtMocHelpers::stringData(
    "PX4FirmwarePlugin",
    "_mavCommandResult",
    "",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[18];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[8];
    char stringdata6[7];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS_t qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "PX4FirmwarePlugin"
        QT_MOC_LITERAL(18, 17),  // "_mavCommandResult"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 9),  // "vehicleId"
        QT_MOC_LITERAL(47, 9),  // "component"
        QT_MOC_LITERAL(57, 7),  // "command"
        QT_MOC_LITERAL(65, 6),  // "result"
        QT_MOC_LITERAL(72, 20)   // "noReponseFromVehicle"
    },
    "PX4FirmwarePlugin",
    "_mavCommandResult",
    "",
    "vehicleId",
    "component",
    "command",
    "result",
    "noReponseFromVehicle"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4FirmwarePluginENDCLASS[] = {

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
       1,    5,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,    4,    5,    6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject PX4FirmwarePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<FirmwarePlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4FirmwarePluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4FirmwarePlugin, std::true_type>,
        // method '_mavCommandResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PX4FirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4FirmwarePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_mavCommandResult((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject *PX4FirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4FirmwarePluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FirmwarePlugin::qt_metacast(_clname);
}

int PX4FirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS = QtMocHelpers::stringData(
    "PX4FirmwarePluginInstanceData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS_t qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "PX4FirmwarePluginInstanceData"
    },
    "PX4FirmwarePluginInstanceData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4FirmwarePluginInstanceDataENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject PX4FirmwarePluginInstanceData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4FirmwarePluginInstanceDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4FirmwarePluginInstanceData, std::true_type>
    >,
    nullptr
} };

void PX4FirmwarePluginInstanceData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *PX4FirmwarePluginInstanceData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwarePluginInstanceData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4FirmwarePluginInstanceDataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwarePluginInstanceData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
