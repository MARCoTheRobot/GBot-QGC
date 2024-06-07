/****************************************************************************
** Meta object code from reading C++ file 'ArduSubFirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/APM/ArduSubFirmwarePlugin.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduSubFirmwarePlugin.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS = QtMocHelpers::stringData(
    "APMSubmarineFactGroup",
    "camTilt",
    "Fact*",
    "tetherTurns",
    "lightsLevel1",
    "lightsLevel2",
    "pilotGain",
    "inputHold",
    "rangefinderDistance"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[22];
    char stringdata1[8];
    char stringdata2[6];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS_t qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "APMSubmarineFactGroup"
        QT_MOC_LITERAL(22, 7),  // "camTilt"
        QT_MOC_LITERAL(30, 5),  // "Fact*"
        QT_MOC_LITERAL(36, 11),  // "tetherTurns"
        QT_MOC_LITERAL(48, 12),  // "lightsLevel1"
        QT_MOC_LITERAL(61, 12),  // "lightsLevel2"
        QT_MOC_LITERAL(74, 9),  // "pilotGain"
        QT_MOC_LITERAL(84, 9),  // "inputHold"
        QT_MOC_LITERAL(94, 19)   // "rangefinderDistance"
    },
    "APMSubmarineFactGroup",
    "camTilt",
    "Fact*",
    "tetherTurns",
    "lightsLevel1",
    "lightsLevel2",
    "pilotGain",
    "inputHold",
    "rangefinderDistance"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMSubmarineFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       8, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMSubmarineFactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<FactGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMSubmarineFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS_t,
        // property 'camTilt'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'tetherTurns'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'lightsLevel1'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'lightsLevel2'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'pilotGain'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'inputHold'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'rangefinderDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMSubmarineFactGroup, std::true_type>
    >,
    nullptr
} };

void APMSubmarineFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMSubmarineFactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->camTilt(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->tetherTurns(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->lightsLevel1(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->lightsLevel2(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->pilotGain(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->inputHold(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rangefinderDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *APMSubmarineFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMSubmarineFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMSubmarineFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int APMSubmarineFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS = QtMocHelpers::stringData(
    "ArduSubFirmwarePlugin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS_t qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21)   // "ArduSubFirmwarePlugin"
    },
    "ArduSubFirmwarePlugin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSArduSubFirmwarePluginENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject ArduSubFirmwarePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<APMFirmwarePlugin::staticMetaObject>(),
    qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSArduSubFirmwarePluginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ArduSubFirmwarePlugin, std::true_type>
    >,
    nullptr
} };

void ArduSubFirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ArduSubFirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArduSubFirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSArduSubFirmwarePluginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return APMFirmwarePlugin::qt_metacast(_clname);
}

int ArduSubFirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = APMFirmwarePlugin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
