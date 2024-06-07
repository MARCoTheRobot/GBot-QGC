/****************************************************************************
** Meta object code from reading C++ file 'MissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionItem.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionItem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionItemENDCLASS = QtMocHelpers::stringData(
    "MissionItem",
    "isCurrentItemChanged",
    "",
    "isCurrentItem",
    "sequenceNumberChanged",
    "sequenceNumber",
    "specifiedFlightSpeedChanged",
    "flightSpeed",
    "specifiedGimbalYawChanged",
    "gimbalYaw",
    "specifiedGimbalPitchChanged",
    "gimbalPitch",
    "_param1Changed",
    "value",
    "_param2Changed",
    "_param3Changed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionItemENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[12];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[22];
    char stringdata5[15];
    char stringdata6[28];
    char stringdata7[12];
    char stringdata8[26];
    char stringdata9[10];
    char stringdata10[28];
    char stringdata11[12];
    char stringdata12[15];
    char stringdata13[6];
    char stringdata14[15];
    char stringdata15[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionItemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionItemENDCLASS_t qt_meta_stringdata_CLASSMissionItemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "MissionItem"
        QT_MOC_LITERAL(12, 20),  // "isCurrentItemChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 13),  // "isCurrentItem"
        QT_MOC_LITERAL(48, 21),  // "sequenceNumberChanged"
        QT_MOC_LITERAL(70, 14),  // "sequenceNumber"
        QT_MOC_LITERAL(85, 27),  // "specifiedFlightSpeedChanged"
        QT_MOC_LITERAL(113, 11),  // "flightSpeed"
        QT_MOC_LITERAL(125, 25),  // "specifiedGimbalYawChanged"
        QT_MOC_LITERAL(151, 9),  // "gimbalYaw"
        QT_MOC_LITERAL(161, 27),  // "specifiedGimbalPitchChanged"
        QT_MOC_LITERAL(189, 11),  // "gimbalPitch"
        QT_MOC_LITERAL(201, 14),  // "_param1Changed"
        QT_MOC_LITERAL(216, 5),  // "value"
        QT_MOC_LITERAL(222, 14),  // "_param2Changed"
        QT_MOC_LITERAL(237, 14)   // "_param3Changed"
    },
    "MissionItem",
    "isCurrentItemChanged",
    "",
    "isCurrentItem",
    "sequenceNumberChanged",
    "sequenceNumber",
    "specifiedFlightSpeedChanged",
    "flightSpeed",
    "specifiedGimbalYawChanged",
    "gimbalYaw",
    "specifiedGimbalPitchChanged",
    "gimbalPitch",
    "_param1Changed",
    "value",
    "_param2Changed",
    "_param3Changed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       6,    1,   68,    2, 0x06,    5 /* Public */,
       8,    1,   71,    2, 0x06,    7 /* Public */,
      10,    1,   74,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   77,    2, 0x08,   11 /* Private */,
      14,    1,   80,    2, 0x08,   13 /* Private */,
      15,    1,   83,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionItem, std::true_type>,
        // method 'isCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sequenceNumberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'specifiedFlightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'specifiedGimbalYawChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'specifiedGimbalPitchChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_param1Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_param2Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_param3Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void MissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isCurrentItemChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->sequenceNumberChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->specifiedFlightSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->specifiedGimbalYawChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->specifiedGimbalPitchChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->_param1Changed((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 6: _t->_param2Changed((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 7: _t->_param3Changed((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MissionItem::*)(bool );
            if (_t _q_method = &MissionItem::isCurrentItemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MissionItem::*)(int );
            if (_t _q_method = &MissionItem::sequenceNumberChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MissionItem::*)(double );
            if (_t _q_method = &MissionItem::specifiedFlightSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MissionItem::*)(double );
            if (_t _q_method = &MissionItem::specifiedGimbalYawChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MissionItem::*)(double );
            if (_t _q_method = &MissionItem::specifiedGimbalPitchChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *MissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MissionItem::isCurrentItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MissionItem::sequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MissionItem::specifiedFlightSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MissionItem::specifiedGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MissionItem::specifiedGimbalPitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
