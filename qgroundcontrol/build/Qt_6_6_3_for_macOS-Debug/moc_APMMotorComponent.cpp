/****************************************************************************
** Meta object code from reading C++ file 'APMMotorComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMMotorComponent.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMMotorComponent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS = QtMocHelpers::stringData(
    "APMMotorComponent",
    "motorIndexToLetter",
    "",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[18];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS_t qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "APMMotorComponent"
        QT_MOC_LITERAL(18, 18),  // "motorIndexToLetter"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5)   // "index"
    },
    "APMMotorComponent",
    "motorIndexToLetter",
    "",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMMotorComponentENDCLASS[] = {

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

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x02,    1 /* Public */,

 // methods: parameters
    QMetaType::QString, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMMotorComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<MotorComponent::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMMotorComponentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMMotorComponent, std::true_type>,
        // method 'motorIndexToLetter'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void APMMotorComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMMotorComponent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->motorIndexToLetter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *APMMotorComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMMotorComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMMotorComponentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MotorComponent::qt_metacast(_clname);
}

int APMMotorComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MotorComponent::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
