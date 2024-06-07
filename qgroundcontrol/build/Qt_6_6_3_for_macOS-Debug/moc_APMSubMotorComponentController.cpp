/****************************************************************************
** Meta object code from reading C++ file 'APMSubMotorComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMSubMotorComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMSubMotorComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS = QtMocHelpers::stringData(
    "APMSubMotorComponentController",
    "motorDetectionMessagesChanged",
    "",
    "handleNewMessages",
    "uasid",
    "componentid",
    "severity",
    "text",
    "motorDetectionMessages"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[31];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[6];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[5];
    char stringdata8[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "APMSubMotorComponentController"
        QT_MOC_LITERAL(31, 29),  // "motorDetectionMessagesChanged"
        QT_MOC_LITERAL(61, 0),  // ""
        QT_MOC_LITERAL(62, 17),  // "handleNewMessages"
        QT_MOC_LITERAL(80, 5),  // "uasid"
        QT_MOC_LITERAL(86, 11),  // "componentid"
        QT_MOC_LITERAL(98, 8),  // "severity"
        QT_MOC_LITERAL(107, 4),  // "text"
        QT_MOC_LITERAL(112, 22)   // "motorDetectionMessages"
    },
    "APMSubMotorComponentController",
    "motorDetectionMessagesChanged",
    "",
    "handleNewMessages",
    "uasid",
    "componentid",
    "severity",
    "text",
    "motorDetectionMessages"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMSubMotorComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    4,   27,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,    7,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject APMSubMotorComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMSubMotorComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS_t,
        // property 'motorDetectionMessages'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMSubMotorComponentController, std::true_type>,
        // method 'motorDetectionMessagesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleNewMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void APMSubMotorComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMSubMotorComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->motorDetectionMessagesChanged(); break;
        case 1: _t->handleNewMessages((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMSubMotorComponentController::*)();
            if (_t _q_method = &APMSubMotorComponentController::motorDetectionMessagesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMSubMotorComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->motorDetectionMessages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *APMSubMotorComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMSubMotorComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMSubMotorComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMSubMotorComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void APMSubMotorComponentController::motorDetectionMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
