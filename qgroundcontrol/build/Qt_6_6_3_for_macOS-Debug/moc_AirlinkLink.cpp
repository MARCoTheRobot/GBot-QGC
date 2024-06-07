/****************************************************************************
** Meta object code from reading C++ file 'AirlinkLink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AirLink/AirlinkLink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirlinkLink.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS = QtMocHelpers::stringData(
    "AirlinkConfiguration",
    "usernameChanged",
    "",
    "passwordChanged",
    "modemNameChanged",
    "username",
    "password",
    "modemName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[21];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS_t qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "AirlinkConfiguration"
        QT_MOC_LITERAL(21, 15),  // "usernameChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 15),  // "passwordChanged"
        QT_MOC_LITERAL(54, 16),  // "modemNameChanged"
        QT_MOC_LITERAL(71, 8),  // "username"
        QT_MOC_LITERAL(80, 8),  // "password"
        QT_MOC_LITERAL(89, 9)   // "modemName"
    },
    "AirlinkConfiguration",
    "usernameChanged",
    "",
    "passwordChanged",
    "modemNameChanged",
    "username",
    "password",
    "modemName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAirlinkConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,
       3,    0,   33,    2, 0x06,    5 /* Public */,
       4,    0,   34,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015103, uint(0), 0,
       6, QMetaType::QString, 0x00015103, uint(1), 0,
       7, QMetaType::QString, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AirlinkConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<UDPConfiguration::staticMetaObject>(),
    qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAirlinkConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS_t,
        // property 'username'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'password'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'modemName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AirlinkConfiguration, std::true_type>,
        // method 'usernameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modemNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AirlinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirlinkConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->usernameChanged(); break;
        case 1: _t->passwordChanged(); break;
        case 2: _t->modemNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirlinkConfiguration::*)();
            if (_t _q_method = &AirlinkConfiguration::usernameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirlinkConfiguration::*)();
            if (_t _q_method = &AirlinkConfiguration::passwordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AirlinkConfiguration::*)();
            if (_t _q_method = &AirlinkConfiguration::modemNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirlinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->modemName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirlinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setModemName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *AirlinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirlinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAirlinkConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return UDPConfiguration::qt_metacast(_clname);
}

int AirlinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UDPConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AirlinkConfiguration::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AirlinkConfiguration::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AirlinkConfiguration::modemNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAirlinkLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAirlinkLinkENDCLASS = QtMocHelpers::stringData(
    "AirlinkLink"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAirlinkLinkENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAirlinkLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAirlinkLinkENDCLASS_t qt_meta_stringdata_CLASSAirlinkLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11)   // "AirlinkLink"
    },
    "AirlinkLink"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAirlinkLinkENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject AirlinkLink::staticMetaObject = { {
    QMetaObject::SuperData::link<UDPLink::staticMetaObject>(),
    qt_meta_stringdata_CLASSAirlinkLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAirlinkLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAirlinkLinkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AirlinkLink, std::true_type>
    >,
    nullptr
} };

void AirlinkLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AirlinkLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirlinkLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAirlinkLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return UDPLink::qt_metacast(_clname);
}

int AirlinkLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UDPLink::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
