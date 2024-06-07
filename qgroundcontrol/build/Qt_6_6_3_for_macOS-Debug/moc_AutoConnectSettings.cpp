/****************************************************************************
** Meta object code from reading C++ file 'AutoConnectSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/AutoConnectSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoConnectSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS = QtMocHelpers::stringData(
    "AutoConnectSettings",
    "autoConnectUDP",
    "Fact*",
    "autoConnectPixhawk",
    "autoConnectSiKRadio",
    "autoConnectPX4Flow",
    "autoConnectRTKGPS",
    "autoConnectLibrePilot",
    "autoConnectNmeaPort",
    "autoConnectNmeaBaud",
    "autoConnectZeroConf",
    "udpListenPort",
    "udpTargetHostIP",
    "udpTargetHostPort",
    "nmeaUdpPort"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[6];
    char stringdata3[19];
    char stringdata4[20];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[22];
    char stringdata8[20];
    char stringdata9[20];
    char stringdata10[20];
    char stringdata11[14];
    char stringdata12[16];
    char stringdata13[18];
    char stringdata14[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS_t qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "AutoConnectSettings"
        QT_MOC_LITERAL(20, 14),  // "autoConnectUDP"
        QT_MOC_LITERAL(35, 5),  // "Fact*"
        QT_MOC_LITERAL(41, 18),  // "autoConnectPixhawk"
        QT_MOC_LITERAL(60, 19),  // "autoConnectSiKRadio"
        QT_MOC_LITERAL(80, 18),  // "autoConnectPX4Flow"
        QT_MOC_LITERAL(99, 17),  // "autoConnectRTKGPS"
        QT_MOC_LITERAL(117, 21),  // "autoConnectLibrePilot"
        QT_MOC_LITERAL(139, 19),  // "autoConnectNmeaPort"
        QT_MOC_LITERAL(159, 19),  // "autoConnectNmeaBaud"
        QT_MOC_LITERAL(179, 19),  // "autoConnectZeroConf"
        QT_MOC_LITERAL(199, 13),  // "udpListenPort"
        QT_MOC_LITERAL(213, 15),  // "udpTargetHostIP"
        QT_MOC_LITERAL(229, 17),  // "udpTargetHostPort"
        QT_MOC_LITERAL(247, 11)   // "nmeaUdpPort"
    },
    "AutoConnectSettings",
    "autoConnectUDP",
    "Fact*",
    "autoConnectPixhawk",
    "autoConnectSiKRadio",
    "autoConnectPX4Flow",
    "autoConnectRTKGPS",
    "autoConnectLibrePilot",
    "autoConnectNmeaPort",
    "autoConnectNmeaBaud",
    "autoConnectZeroConf",
    "udpListenPort",
    "udpTargetHostIP",
    "udpTargetHostPort",
    "nmeaUdpPort"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAutoConnectSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
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
       9, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      12, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      13, 0x80000000 | 2, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 2, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoConnectSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAutoConnectSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS_t,
        // property 'autoConnectUDP'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectPixhawk'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectSiKRadio'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectPX4Flow'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectRTKGPS'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectLibrePilot'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectNmeaPort'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectNmeaBaud'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'autoConnectZeroConf'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'udpListenPort'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'udpTargetHostIP'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'udpTargetHostPort'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'nmeaUdpPort'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoConnectSettings, std::true_type>
    >,
    nullptr
} };

void AutoConnectSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
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
        auto *_t = static_cast<AutoConnectSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->autoConnectUDP(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->autoConnectPixhawk(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->autoConnectSiKRadio(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->autoConnectPX4Flow(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->autoConnectRTKGPS(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->autoConnectLibrePilot(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->autoConnectNmeaPort(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->autoConnectNmeaBaud(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->autoConnectZeroConf(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->udpListenPort(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->udpTargetHostIP(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->udpTargetHostPort(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->nmeaUdpPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *AutoConnectSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConnectSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAutoConnectSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int AutoConnectSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
