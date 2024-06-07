/****************************************************************************
** Meta object code from reading C++ file 'ActuatorTesting.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Actuators/ActuatorTesting.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActuatorTesting.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS = QtMocHelpers::stringData(
    "ActuatorTesting::Actuator",
    "label",
    "min",
    "max",
    "defaultValue",
    "function",
    "isMotor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[26];
    char stringdata1[6];
    char stringdata2[4];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[9];
    char stringdata6[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS_t qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "ActuatorTesting::Actuator"
        QT_MOC_LITERAL(26, 5),  // "label"
        QT_MOC_LITERAL(32, 3),  // "min"
        QT_MOC_LITERAL(36, 3),  // "max"
        QT_MOC_LITERAL(40, 12),  // "defaultValue"
        QT_MOC_LITERAL(53, 8),  // "function"
        QT_MOC_LITERAL(62, 7)   // "isMotor"
    },
    "ActuatorTesting::Actuator",
    "label",
    "min",
    "max",
    "defaultValue",
    "function",
    "isMotor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorTestingSCOPEActuatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::Float, 0x00015401, uint(-1), 0,
       3, QMetaType::Float, 0x00015401, uint(-1), 0,
       4, QMetaType::Float, 0x00015401, uint(-1), 0,
       5, QMetaType::Int, 0x00015401, uint(-1), 0,
       6, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorTesting::Actuator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorTestingSCOPEActuatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'min'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'max'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'defaultValue'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'function'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'isMotor'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Actuator, std::true_type>
    >,
    nullptr
} };

void ActuatorTesting::Actuator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Actuator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->min(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->max(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->defaultValue(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->function(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMotor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ActuatorTesting::Actuator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorTesting::Actuator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorTesting::Actuator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS = QtMocHelpers::stringData(
    "ActuatorTesting::ActuatorTest",
    "actuatorsChanged",
    "",
    "hadFailureChanged",
    "setActive",
    "active",
    "setChannelTo",
    "index",
    "value",
    "stopControl",
    "actuators",
    "QmlObjectListModel*",
    "allMotorsActuator",
    "Actuator*",
    "hadFailure"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[30];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[10];
    char stringdata5[7];
    char stringdata6[13];
    char stringdata7[6];
    char stringdata8[6];
    char stringdata9[12];
    char stringdata10[10];
    char stringdata11[20];
    char stringdata12[18];
    char stringdata13[10];
    char stringdata14[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS_t qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29),  // "ActuatorTesting::ActuatorTest"
        QT_MOC_LITERAL(30, 16),  // "actuatorsChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 17),  // "hadFailureChanged"
        QT_MOC_LITERAL(66, 9),  // "setActive"
        QT_MOC_LITERAL(76, 6),  // "active"
        QT_MOC_LITERAL(83, 12),  // "setChannelTo"
        QT_MOC_LITERAL(96, 5),  // "index"
        QT_MOC_LITERAL(102, 5),  // "value"
        QT_MOC_LITERAL(108, 11),  // "stopControl"
        QT_MOC_LITERAL(120, 9),  // "actuators"
        QT_MOC_LITERAL(130, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(150, 17),  // "allMotorsActuator"
        QT_MOC_LITERAL(168, 9),  // "Actuator*"
        QT_MOC_LITERAL(178, 10)   // "hadFailure"
    },
    "ActuatorTesting::ActuatorTest",
    "actuatorsChanged",
    "",
    "hadFailureChanged",
    "setActive",
    "active",
    "setChannelTo",
    "index",
    "value",
    "stopControl",
    "actuators",
    "QmlObjectListModel*",
    "allMotorsActuator",
    "Actuator*",
    "hadFailure"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorTestingSCOPEActuatorTestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   57, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    4 /* Public */,
       3,    0,   45,    2, 0x06,    5 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   46,    2, 0x02,    6 /* Public */,
       6,    2,   49,    2, 0x02,    8 /* Public */,
       9,    1,   54,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    7,    8,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00015009, uint(0), 0,
      12, 0x80000000 | 13, 0x00015009, uint(0), 0,
      14, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorTesting::ActuatorTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorTestingSCOPEActuatorTestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS_t,
        // property 'actuators'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'allMotorsActuator'
        QtPrivate::TypeAndForceComplete<Actuator*, std::true_type>,
        // property 'hadFailure'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActuatorTest, std::true_type>,
        // method 'actuatorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hadFailureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setActive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setChannelTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'stopControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ActuatorTesting::ActuatorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorTest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actuatorsChanged(); break;
        case 1: _t->hadFailureChanged(); break;
        case 2: _t->setActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->setChannelTo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 4: _t->stopControl((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorTest::*)();
            if (_t _q_method = &ActuatorTest::actuatorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorTest::*)();
            if (_t _q_method = &ActuatorTest::hadFailureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Actuator* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorTest *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->actuators(); break;
        case 1: *reinterpret_cast< Actuator**>(_v) = _t->allMotorsActuator(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hadFailure(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ActuatorTesting::ActuatorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorTesting::ActuatorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorTestingSCOPEActuatorTestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorTesting::ActuatorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ActuatorTesting::ActuatorTest::actuatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorTesting::ActuatorTest::hadFailureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
