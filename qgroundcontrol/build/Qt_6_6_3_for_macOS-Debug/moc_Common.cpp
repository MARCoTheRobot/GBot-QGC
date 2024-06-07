/****************************************************************************
** Meta object code from reading C++ file 'Common.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Actuators/Common.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Common.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFactBitsetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFactBitsetENDCLASS = QtMocHelpers::stringData(
    "FactBitset",
    "onIntegerFactChanged",
    "",
    "onThisFactChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFactBitsetENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFactBitsetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFactBitsetENDCLASS_t qt_meta_stringdata_CLASSFactBitsetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "FactBitset"
        QT_MOC_LITERAL(11, 20),  // "onIntegerFactChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17)   // "onThisFactChanged"
    },
    "FactBitset",
    "onIntegerFactChanged",
    "",
    "onThisFactChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFactBitsetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FactBitset::staticMetaObject = { {
    QMetaObject::SuperData::link<Fact::staticMetaObject>(),
    qt_meta_stringdata_CLASSFactBitsetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFactBitsetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFactBitsetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FactBitset, std::true_type>,
        // method 'onIntegerFactChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onThisFactChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FactBitset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactBitset *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onIntegerFactChanged(); break;
        case 1: _t->onThisFactChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FactBitset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactBitset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFactBitsetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Fact::qt_metacast(_clname);
}

int FactBitset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Fact::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS = QtMocHelpers::stringData(
    "FactFloatAsBool",
    "onFloatFactChanged",
    "",
    "onThisFactChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS_t qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "FactFloatAsBool"
        QT_MOC_LITERAL(16, 18),  // "onFloatFactChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 17)   // "onThisFactChanged"
    },
    "FactFloatAsBool",
    "onFloatFactChanged",
    "",
    "onThisFactChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFactFloatAsBoolENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FactFloatAsBool::staticMetaObject = { {
    QMetaObject::SuperData::link<Fact::staticMetaObject>(),
    qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFactFloatAsBoolENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FactFloatAsBool, std::true_type>,
        // method 'onFloatFactChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onThisFactChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FactFloatAsBool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactFloatAsBool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onFloatFactChanged(); break;
        case 1: _t->onThisFactChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FactFloatAsBool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactFloatAsBool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFactFloatAsBoolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Fact::qt_metacast(_clname);
}

int FactFloatAsBool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Fact::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
