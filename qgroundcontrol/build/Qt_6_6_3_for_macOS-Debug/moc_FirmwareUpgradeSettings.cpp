/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/FirmwareUpgradeSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS = QtMocHelpers::stringData(
    "FirmwareUpgradeSettings",
    "defaultFirmwareType",
    "Fact*",
    "apmChibiOS",
    "apmVehicleType"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[24];
    char stringdata1[20];
    char stringdata2[6];
    char stringdata3[11];
    char stringdata4[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS_t qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "FirmwareUpgradeSettings"
        QT_MOC_LITERAL(24, 19),  // "defaultFirmwareType"
        QT_MOC_LITERAL(44, 5),  // "Fact*"
        QT_MOC_LITERAL(50, 10),  // "apmChibiOS"
        QT_MOC_LITERAL(61, 14)   // "apmVehicleType"
    },
    "FirmwareUpgradeSettings",
    "defaultFirmwareType",
    "Fact*",
    "apmChibiOS",
    "apmVehicleType"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFirmwareUpgradeSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FirmwareUpgradeSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFirmwareUpgradeSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS_t,
        // property 'defaultFirmwareType'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'apmChibiOS'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'apmVehicleType'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FirmwareUpgradeSettings, std::true_type>
    >,
    nullptr
} };

void FirmwareUpgradeSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FirmwareUpgradeSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->defaultFirmwareType(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->apmChibiOS(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->apmVehicleType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *FirmwareUpgradeSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFirmwareUpgradeSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int FirmwareUpgradeSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
