/****************************************************************************
** Meta object code from reading C++ file 'APMFollowComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMFollowComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFollowComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS = QtMocHelpers::stringData(
    "APMFollowComponentController",
    "angle",
    "Fact*",
    "distance",
    "height",
    "roverFirmware"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[29];
    char stringdata1[6];
    char stringdata2[6];
    char stringdata3[9];
    char stringdata4[7];
    char stringdata5[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "APMFollowComponentController"
        QT_MOC_LITERAL(29, 5),  // "angle"
        QT_MOC_LITERAL(35, 5),  // "Fact*"
        QT_MOC_LITERAL(41, 8),  // "distance"
        QT_MOC_LITERAL(50, 6),  // "height"
        QT_MOC_LITERAL(57, 13)   // "roverFirmware"
    },
    "APMFollowComponentController",
    "angle",
    "Fact*",
    "distance",
    "height",
    "roverFirmware"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMFollowComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMFollowComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMFollowComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS_t,
        // property 'angle'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'height'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'roverFirmware'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMFollowComponentController, std::true_type>
    >,
    nullptr
} };

void APMFollowComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        auto *_t = static_cast<APMFollowComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->angleFact(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->distanceFact(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->heightFact(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->roverFirmware(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *APMFollowComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFollowComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMFollowComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMFollowComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
