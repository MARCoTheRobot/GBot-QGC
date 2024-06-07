/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ADSB/ADSBVehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicle.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSADSBVehicleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSADSBVehicleENDCLASS = QtMocHelpers::stringData(
    "ADSBVehicle",
    "coordinateChanged",
    "",
    "callsignChanged",
    "altitudeChanged",
    "headingChanged",
    "alertChanged",
    "icaoAddress",
    "callsign",
    "coordinate",
    "QGeoCoordinate",
    "altitude",
    "heading",
    "alert"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSADSBVehicleENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[9];
    char stringdata9[11];
    char stringdata10[15];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSADSBVehicleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSADSBVehicleENDCLASS_t qt_meta_stringdata_CLASSADSBVehicleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ADSBVehicle"
        QT_MOC_LITERAL(12, 17),  // "coordinateChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 15),  // "callsignChanged"
        QT_MOC_LITERAL(47, 15),  // "altitudeChanged"
        QT_MOC_LITERAL(63, 14),  // "headingChanged"
        QT_MOC_LITERAL(78, 12),  // "alertChanged"
        QT_MOC_LITERAL(91, 11),  // "icaoAddress"
        QT_MOC_LITERAL(103, 8),  // "callsign"
        QT_MOC_LITERAL(112, 10),  // "coordinate"
        QT_MOC_LITERAL(123, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(138, 8),  // "altitude"
        QT_MOC_LITERAL(147, 7),  // "heading"
        QT_MOC_LITERAL(155, 5)   // "alert"
    },
    "ADSBVehicle",
    "coordinateChanged",
    "",
    "callsignChanged",
    "altitudeChanged",
    "headingChanged",
    "alertChanged",
    "icaoAddress",
    "callsign",
    "coordinate",
    "QGeoCoordinate",
    "altitude",
    "heading",
    "alert"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSADSBVehicleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    7 /* Public */,
       3,    0,   45,    2, 0x06,    8 /* Public */,
       4,    0,   46,    2, 0x06,    9 /* Public */,
       5,    0,   47,    2, 0x06,   10 /* Public */,
       6,    0,   48,    2, 0x06,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015401, uint(-1), 0,
       8, QMetaType::QString, 0x00015001, uint(1), 0,
       9, 0x80000000 | 10, 0x00015009, uint(0), 0,
      11, QMetaType::Double, 0x00015001, uint(2), 0,
      12, QMetaType::Double, 0x00015001, uint(3), 0,
      13, QMetaType::Bool, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ADSBVehicle::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSADSBVehicleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSADSBVehicleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSADSBVehicleENDCLASS_t,
        // property 'icaoAddress'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'callsign'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'coordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'altitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'heading'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'alert'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ADSBVehicle, std::true_type>,
        // method 'coordinateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callsignChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'altitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'headingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alertChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ADSBVehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ADSBVehicle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coordinateChanged(); break;
        case 1: _t->callsignChanged(); break;
        case 2: _t->altitudeChanged(); break;
        case 3: _t->headingChanged(); break;
        case 4: _t->alertChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ADSBVehicle::*)();
            if (_t _q_method = &ADSBVehicle::coordinateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (_t _q_method = &ADSBVehicle::callsignChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (_t _q_method = &ADSBVehicle::altitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (_t _q_method = &ADSBVehicle::headingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ADSBVehicle::*)();
            if (_t _q_method = &ADSBVehicle::alertChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ADSBVehicle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->icaoAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->callsign(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->alert(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ADSBVehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSADSBVehicleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ADSBVehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ADSBVehicle::coordinateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ADSBVehicle::callsignChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ADSBVehicle::altitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ADSBVehicle::headingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ADSBVehicle::alertChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
