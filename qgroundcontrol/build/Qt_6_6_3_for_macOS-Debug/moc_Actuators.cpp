/****************************************************************************
** Meta object code from reading C++ file 'Actuators.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Actuators/Actuators.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Actuators.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSActuatorsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorsENDCLASS = QtMocHelpers::stringData(
    "Actuators",
    "actuatorOutputsChanged",
    "",
    "selectedActuatorOutputChanged",
    "imageRefreshFlagChanged",
    "hasUnsetRequiredFunctionsChanged",
    "motorAssignmentActiveChanged",
    "motorAssignmentEnabledChanged",
    "motorAssignmentMessageChanged",
    "actuatorActionsChanged",
    "parametersChanged",
    "updateGeometryImage",
    "imageClicked",
    "x",
    "y",
    "selectActuatorOutput",
    "index",
    "initMotorAssignment",
    "startMotorAssignment",
    "spinCurrentMotor",
    "abortMotorAssignment",
    "actuatorOutputs",
    "QmlObjectListModel*",
    "actuatorActions",
    "isMultirotor",
    "imageRefreshFlag",
    "hasUnsetRequiredFunctions",
    "motorAssignmentActive",
    "motorAssignmentEnabled",
    "motorAssignmentMessage",
    "actuatorTest",
    "ActuatorTesting::ActuatorTest*",
    "mixer",
    "Mixer::Mixers*",
    "selectedActuatorOutput",
    "ActuatorOutputs::ActuatorOutput*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorsENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[10];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[24];
    char stringdata5[33];
    char stringdata6[29];
    char stringdata7[30];
    char stringdata8[30];
    char stringdata9[23];
    char stringdata10[18];
    char stringdata11[20];
    char stringdata12[13];
    char stringdata13[2];
    char stringdata14[2];
    char stringdata15[21];
    char stringdata16[6];
    char stringdata17[20];
    char stringdata18[21];
    char stringdata19[17];
    char stringdata20[21];
    char stringdata21[16];
    char stringdata22[20];
    char stringdata23[16];
    char stringdata24[13];
    char stringdata25[17];
    char stringdata26[26];
    char stringdata27[22];
    char stringdata28[23];
    char stringdata29[23];
    char stringdata30[13];
    char stringdata31[31];
    char stringdata32[6];
    char stringdata33[15];
    char stringdata34[23];
    char stringdata35[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorsENDCLASS_t qt_meta_stringdata_CLASSActuatorsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Actuators"
        QT_MOC_LITERAL(10, 22),  // "actuatorOutputsChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 29),  // "selectedActuatorOutputChanged"
        QT_MOC_LITERAL(64, 23),  // "imageRefreshFlagChanged"
        QT_MOC_LITERAL(88, 32),  // "hasUnsetRequiredFunctionsChanged"
        QT_MOC_LITERAL(121, 28),  // "motorAssignmentActiveChanged"
        QT_MOC_LITERAL(150, 29),  // "motorAssignmentEnabledChanged"
        QT_MOC_LITERAL(180, 29),  // "motorAssignmentMessageChanged"
        QT_MOC_LITERAL(210, 22),  // "actuatorActionsChanged"
        QT_MOC_LITERAL(233, 17),  // "parametersChanged"
        QT_MOC_LITERAL(251, 19),  // "updateGeometryImage"
        QT_MOC_LITERAL(271, 12),  // "imageClicked"
        QT_MOC_LITERAL(284, 1),  // "x"
        QT_MOC_LITERAL(286, 1),  // "y"
        QT_MOC_LITERAL(288, 20),  // "selectActuatorOutput"
        QT_MOC_LITERAL(309, 5),  // "index"
        QT_MOC_LITERAL(315, 19),  // "initMotorAssignment"
        QT_MOC_LITERAL(335, 20),  // "startMotorAssignment"
        QT_MOC_LITERAL(356, 16),  // "spinCurrentMotor"
        QT_MOC_LITERAL(373, 20),  // "abortMotorAssignment"
        QT_MOC_LITERAL(394, 15),  // "actuatorOutputs"
        QT_MOC_LITERAL(410, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(430, 15),  // "actuatorActions"
        QT_MOC_LITERAL(446, 12),  // "isMultirotor"
        QT_MOC_LITERAL(459, 16),  // "imageRefreshFlag"
        QT_MOC_LITERAL(476, 25),  // "hasUnsetRequiredFunctions"
        QT_MOC_LITERAL(502, 21),  // "motorAssignmentActive"
        QT_MOC_LITERAL(524, 22),  // "motorAssignmentEnabled"
        QT_MOC_LITERAL(547, 22),  // "motorAssignmentMessage"
        QT_MOC_LITERAL(570, 12),  // "actuatorTest"
        QT_MOC_LITERAL(583, 30),  // "ActuatorTesting::ActuatorTest*"
        QT_MOC_LITERAL(614, 5),  // "mixer"
        QT_MOC_LITERAL(620, 14),  // "Mixer::Mixers*"
        QT_MOC_LITERAL(635, 22),  // "selectedActuatorOutput"
        QT_MOC_LITERAL(658, 32)   // "ActuatorOutputs::ActuatorOutput*"
    },
    "Actuators",
    "actuatorOutputsChanged",
    "",
    "selectedActuatorOutputChanged",
    "imageRefreshFlagChanged",
    "hasUnsetRequiredFunctionsChanged",
    "motorAssignmentActiveChanged",
    "motorAssignmentEnabledChanged",
    "motorAssignmentMessageChanged",
    "actuatorActionsChanged",
    "parametersChanged",
    "updateGeometryImage",
    "imageClicked",
    "x",
    "y",
    "selectActuatorOutput",
    "index",
    "initMotorAssignment",
    "startMotorAssignment",
    "spinCurrentMotor",
    "abortMotorAssignment",
    "actuatorOutputs",
    "QmlObjectListModel*",
    "actuatorActions",
    "isMultirotor",
    "imageRefreshFlag",
    "hasUnsetRequiredFunctions",
    "motorAssignmentActive",
    "motorAssignmentEnabled",
    "motorAssignmentMessage",
    "actuatorTest",
    "ActuatorTesting::ActuatorTest*",
    "mixer",
    "Mixer::Mixers*",
    "selectedActuatorOutput",
    "ActuatorOutputs::ActuatorOutput*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      11,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,   12 /* Public */,
       3,    0,  111,    2, 0x06,   13 /* Public */,
       4,    0,  112,    2, 0x06,   14 /* Public */,
       5,    0,  113,    2, 0x06,   15 /* Public */,
       6,    0,  114,    2, 0x06,   16 /* Public */,
       7,    0,  115,    2, 0x06,   17 /* Public */,
       8,    0,  116,    2, 0x06,   18 /* Public */,
       9,    0,  117,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  118,    2, 0x0a,   20 /* Public */,
      11,    0,  119,    2, 0x08,   21 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    2,  120,    2, 0x02,   22 /* Public */,
      15,    1,  125,    2, 0x02,   25 /* Public */,
      17,    0,  128,    2, 0x02,   27 /* Public */,
      18,    0,  129,    2, 0x02,   28 /* Public */,
      19,    0,  130,    2, 0x02,   29 /* Public */,
      20,    0,  131,    2, 0x02,   30 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, 0x80000000 | 22, 0x00015009, uint(0), 0,
      23, 0x80000000 | 22, 0x00015009, uint(7), 0,
      24, QMetaType::Bool, 0x00015401, uint(-1), 0,
      25, QMetaType::Bool, 0x00015001, uint(2), 0,
      26, QMetaType::Bool, 0x00015001, uint(3), 0,
      27, QMetaType::Bool, 0x00015001, uint(4), 0,
      28, QMetaType::Bool, 0x00015001, uint(5), 0,
      29, QMetaType::QString, 0x00015001, uint(6), 0,
      30, 0x80000000 | 31, 0x00015409, uint(-1), 0,
      32, 0x80000000 | 33, 0x00015409, uint(-1), 0,
      34, 0x80000000 | 35, 0x00015009, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Actuators::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorsENDCLASS_t,
        // property 'actuatorOutputs'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'actuatorActions'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'isMultirotor'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'imageRefreshFlag'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasUnsetRequiredFunctions'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'motorAssignmentActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'motorAssignmentEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'motorAssignmentMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'actuatorTest'
        QtPrivate::TypeAndForceComplete<ActuatorTesting::ActuatorTest*, std::true_type>,
        // property 'mixer'
        QtPrivate::TypeAndForceComplete<Mixer::Mixers*, std::true_type>,
        // property 'selectedActuatorOutput'
        QtPrivate::TypeAndForceComplete<ActuatorOutputs::ActuatorOutput*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Actuators, std::true_type>,
        // method 'actuatorOutputsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedActuatorOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageRefreshFlagChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasUnsetRequiredFunctionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'motorAssignmentActiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'motorAssignmentEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'motorAssignmentMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'actuatorActionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parametersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateGeometryImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'selectActuatorOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'initMotorAssignment'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startMotorAssignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'spinCurrentMotor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortMotorAssignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Actuators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Actuators *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->actuatorOutputsChanged(); break;
        case 1: _t->selectedActuatorOutputChanged(); break;
        case 2: _t->imageRefreshFlagChanged(); break;
        case 3: _t->hasUnsetRequiredFunctionsChanged(); break;
        case 4: _t->motorAssignmentActiveChanged(); break;
        case 5: _t->motorAssignmentEnabledChanged(); break;
        case 6: _t->motorAssignmentMessageChanged(); break;
        case 7: _t->actuatorActionsChanged(); break;
        case 8: _t->parametersChanged(); break;
        case 9: _t->updateGeometryImage(); break;
        case 10: _t->imageClicked((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 11: _t->selectActuatorOutput((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: { bool _r = _t->initMotorAssignment();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->startMotorAssignment(); break;
        case 14: _t->spinCurrentMotor(); break;
        case 15: _t->abortMotorAssignment(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::actuatorOutputsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::selectedActuatorOutputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::imageRefreshFlagChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::hasUnsetRequiredFunctionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::motorAssignmentActiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::motorAssignmentEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::motorAssignmentMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Actuators::*)();
            if (_t _q_method = &Actuators::actuatorActionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ActuatorOutputs::ActuatorOutput* >(); break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ActuatorTesting::ActuatorTest* >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Mixer::Mixers* >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Actuators *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->actuatorOutputs(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->actuatorActions(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMultirotor(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->imageRefreshFlag(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasUnsetRequiredFunctions(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->motorAssignmentActive(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->motorAssignmentEnabled(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->motorAssignmentMessage(); break;
        case 8: *reinterpret_cast< ActuatorTesting::ActuatorTest**>(_v) = _t->actuatorTest(); break;
        case 9: *reinterpret_cast< Mixer::Mixers**>(_v) = _t->mixer(); break;
        case 10: *reinterpret_cast< ActuatorOutputs::ActuatorOutput**>(_v) = _t->selectedActuatorOutput(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Actuators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Actuators::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Actuators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Actuators::actuatorOutputsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Actuators::selectedActuatorOutputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Actuators::imageRefreshFlagChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Actuators::hasUnsetRequiredFunctionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Actuators::motorAssignmentActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Actuators::motorAssignmentEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Actuators::motorAssignmentMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Actuators::actuatorActionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
