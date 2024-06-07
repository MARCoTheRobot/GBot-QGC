/****************************************************************************
** Meta object code from reading C++ file 'FactPanelController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactControls/FactPanelController.h"
#include "Vehicle.h"
#include "Fact.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactPanelController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFactPanelControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFactPanelControllerENDCLASS = QtMocHelpers::stringData(
    "FactPanelController",
    "missingParametersAvailable",
    "",
    "_checkForMissingParameters",
    "getParameterFact",
    "Fact*",
    "componentId",
    "name",
    "reportMissing",
    "parameterExists",
    "getMissingParameters",
    "rgNames",
    "vehicle",
    "Vehicle*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFactPanelControllerENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[20];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[17];
    char stringdata5[6];
    char stringdata6[12];
    char stringdata7[5];
    char stringdata8[14];
    char stringdata9[16];
    char stringdata10[21];
    char stringdata11[8];
    char stringdata12[8];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFactPanelControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFactPanelControllerENDCLASS_t qt_meta_stringdata_CLASSFactPanelControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "FactPanelController"
        QT_MOC_LITERAL(20, 26),  // "missingParametersAvailable"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 26),  // "_checkForMissingParameters"
        QT_MOC_LITERAL(75, 16),  // "getParameterFact"
        QT_MOC_LITERAL(92, 5),  // "Fact*"
        QT_MOC_LITERAL(98, 11),  // "componentId"
        QT_MOC_LITERAL(110, 4),  // "name"
        QT_MOC_LITERAL(115, 13),  // "reportMissing"
        QT_MOC_LITERAL(129, 15),  // "parameterExists"
        QT_MOC_LITERAL(145, 20),  // "getMissingParameters"
        QT_MOC_LITERAL(166, 7),  // "rgNames"
        QT_MOC_LITERAL(174, 7),  // "vehicle"
        QT_MOC_LITERAL(182, 8)   // "Vehicle*"
    },
    "FactPanelController",
    "missingParametersAvailable",
    "",
    "_checkForMissingParameters",
    "getParameterFact",
    "Fact*",
    "componentId",
    "name",
    "reportMissing",
    "parameterExists",
    "getMissingParameters",
    "rgNames",
    "vehicle",
    "Vehicle*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFactPanelControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    3 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    3,   52,    2, 0x02,    4 /* Public */,
       4,    2,   59,    2, 0x22,    8 /* Public | MethodCloned */,
       9,    2,   64,    2, 0x02,   11 /* Public */,
      10,    1,   69,    2, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    6,    7,    8,
    0x80000000 | 5, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QStringList,   11,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FactPanelController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFactPanelControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFactPanelControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFactPanelControllerENDCLASS_t,
        // property 'vehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FactPanelController, std::true_type>,
        // method 'missingParametersAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_checkForMissingParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getParameterFact'
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getParameterFact'
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'parameterExists'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getMissingParameters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
    >,
    nullptr
} };

void FactPanelController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactPanelController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->missingParametersAvailable(); break;
        case 1: _t->_checkForMissingParameters(); break;
        case 2: { Fact* _r = _t->getParameterFact((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 3: { Fact* _r = _t->getParameterFact((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->parameterExists((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->getMissingParameters((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FactPanelController::*)();
            if (_t _q_method = &FactPanelController::missingParametersAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FactPanelController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Vehicle**>(_v) = _t->_vehicle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FactPanelController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactPanelController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFactPanelControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactPanelController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FactPanelController::missingParametersAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
