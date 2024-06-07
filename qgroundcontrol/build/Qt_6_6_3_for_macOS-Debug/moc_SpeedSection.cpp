/****************************************************************************
** Meta object code from reading C++ file 'SpeedSection.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SpeedSection.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpeedSection.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSpeedSectionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSpeedSectionENDCLASS = QtMocHelpers::stringData(
    "SpeedSection",
    "specifyFlightSpeedChanged",
    "",
    "specifyFlightSpeed",
    "specifiedFlightSpeedChanged",
    "flightSpeed",
    "_updateSpecifiedFlightSpeed",
    "_flightSpeedChanged",
    "Fact*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSpeedSectionENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[28];
    char stringdata5[12];
    char stringdata6[28];
    char stringdata7[20];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSpeedSectionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSpeedSectionENDCLASS_t qt_meta_stringdata_CLASSSpeedSectionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "SpeedSection"
        QT_MOC_LITERAL(13, 25),  // "specifyFlightSpeedChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 18),  // "specifyFlightSpeed"
        QT_MOC_LITERAL(59, 27),  // "specifiedFlightSpeedChanged"
        QT_MOC_LITERAL(87, 11),  // "flightSpeed"
        QT_MOC_LITERAL(99, 27),  // "_updateSpecifiedFlightSpeed"
        QT_MOC_LITERAL(127, 19),  // "_flightSpeedChanged"
        QT_MOC_LITERAL(147, 5)   // "Fact*"
    },
    "SpeedSection",
    "specifyFlightSpeedChanged",
    "",
    "specifyFlightSpeed",
    "specifiedFlightSpeedChanged",
    "flightSpeed",
    "_updateSpecifiedFlightSpeed",
    "_flightSpeedChanged",
    "Fact*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSpeedSectionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    3 /* Public */,
       4,    1,   41,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   44,    2, 0x08,    7 /* Private */,
       7,    0,   45,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015103, uint(0), 0,
       5, 0x80000000 | 8, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpeedSection::staticMetaObject = { {
    QMetaObject::SuperData::link<Section::staticMetaObject>(),
    qt_meta_stringdata_CLASSSpeedSectionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSpeedSectionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSpeedSectionENDCLASS_t,
        // property 'specifyFlightSpeed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flightSpeed'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpeedSection, std::true_type>,
        // method 'specifyFlightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'specifiedFlightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method '_updateSpecifiedFlightSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_flightSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpeedSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpeedSection *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->specifyFlightSpeedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->specifiedFlightSpeedChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->_updateSpecifiedFlightSpeed(); break;
        case 3: _t->_flightSpeedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpeedSection::*)(bool );
            if (_t _q_method = &SpeedSection::specifyFlightSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpeedSection::*)(double );
            if (_t _q_method = &SpeedSection::specifiedFlightSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SpeedSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->specifyFlightSpeed(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->flightSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SpeedSection *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpecifyFlightSpeed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SpeedSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSpeedSectionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Section::qt_metacast(_clname);
}

int SpeedSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SpeedSection::specifyFlightSpeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpeedSection::specifiedFlightSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
