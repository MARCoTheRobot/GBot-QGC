/****************************************************************************
** Meta object code from reading C++ file 'RTKSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/RTKSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTKSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRTKSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRTKSettingsENDCLASS = QtMocHelpers::stringData(
    "RTKSettings",
    "surveyInAccuracyLimit",
    "Fact*",
    "surveyInMinObservationDuration",
    "useFixedBasePosition",
    "fixedBasePositionLatitude",
    "fixedBasePositionLongitude",
    "fixedBasePositionAltitude",
    "fixedBasePositionAccuracy"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRTKSettingsENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[22];
    char stringdata2[6];
    char stringdata3[31];
    char stringdata4[21];
    char stringdata5[26];
    char stringdata6[27];
    char stringdata7[26];
    char stringdata8[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRTKSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRTKSettingsENDCLASS_t qt_meta_stringdata_CLASSRTKSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "RTKSettings"
        QT_MOC_LITERAL(12, 21),  // "surveyInAccuracyLimit"
        QT_MOC_LITERAL(34, 5),  // "Fact*"
        QT_MOC_LITERAL(40, 30),  // "surveyInMinObservationDuration"
        QT_MOC_LITERAL(71, 20),  // "useFixedBasePosition"
        QT_MOC_LITERAL(92, 25),  // "fixedBasePositionLatitude"
        QT_MOC_LITERAL(118, 26),  // "fixedBasePositionLongitude"
        QT_MOC_LITERAL(145, 25),  // "fixedBasePositionAltitude"
        QT_MOC_LITERAL(171, 25)   // "fixedBasePositionAccuracy"
    },
    "RTKSettings",
    "surveyInAccuracyLimit",
    "Fact*",
    "surveyInMinObservationDuration",
    "useFixedBasePosition",
    "fixedBasePositionLatitude",
    "fixedBasePositionLongitude",
    "fixedBasePositionAltitude",
    "fixedBasePositionAccuracy"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRTKSettingsENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject RTKSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSRTKSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRTKSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRTKSettingsENDCLASS_t,
        // property 'surveyInAccuracyLimit'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'surveyInMinObservationDuration'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'useFixedBasePosition'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'fixedBasePositionLatitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'fixedBasePositionLongitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'fixedBasePositionAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'fixedBasePositionAccuracy'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RTKSettings, std::true_type>
    >,
    nullptr
} };

void RTKSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        auto *_t = static_cast<RTKSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->surveyInAccuracyLimit(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->surveyInMinObservationDuration(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->useFixedBasePosition(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->fixedBasePositionLatitude(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->fixedBasePositionLongitude(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->fixedBasePositionAltitude(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->fixedBasePositionAccuracy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *RTKSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTKSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRTKSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int RTKSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
