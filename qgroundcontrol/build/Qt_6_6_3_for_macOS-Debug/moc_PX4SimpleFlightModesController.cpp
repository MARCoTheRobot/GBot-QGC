/****************************************************************************
** Meta object code from reading C++ file 'PX4SimpleFlightModesController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/PX4SimpleFlightModesController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4SimpleFlightModesController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS = QtMocHelpers::stringData(
    "PX4SimpleFlightModesController",
    "activeFlightModeChanged",
    "",
    "activeFlightMode",
    "channelOptionEnabledChanged",
    "rcChannelValuesChanged",
    "_rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "rcChannelValues"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[31];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[28];
    char stringdata5[23];
    char stringdata6[19];
    char stringdata7[13];
    char stringdata8[31];
    char stringdata9[10];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS_t qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "PX4SimpleFlightModesController"
        QT_MOC_LITERAL(31, 23),  // "activeFlightModeChanged"
        QT_MOC_LITERAL(55, 0),  // ""
        QT_MOC_LITERAL(56, 16),  // "activeFlightMode"
        QT_MOC_LITERAL(73, 27),  // "channelOptionEnabledChanged"
        QT_MOC_LITERAL(101, 22),  // "rcChannelValuesChanged"
        QT_MOC_LITERAL(124, 18),  // "_rcChannelsChanged"
        QT_MOC_LITERAL(143, 12),  // "channelCount"
        QT_MOC_LITERAL(156, 30),  // "int[QGCMAVLink::maxRcChannels]"
        QT_MOC_LITERAL(187, 9),  // "pwmValues"
        QT_MOC_LITERAL(197, 15)   // "rcChannelValues"
    },
    "PX4SimpleFlightModesController",
    "activeFlightModeChanged",
    "",
    "activeFlightMode",
    "channelOptionEnabledChanged",
    "rcChannelValuesChanged",
    "_rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "rcChannelValues"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPX4SimpleFlightModesControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    4 /* Public */,
       4,    0,   41,    2, 0x06,    6 /* Public */,
       5,    0,   42,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    2,   43,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015001, uint(0), 0,
       7, QMetaType::Int, 0x00015401, uint(-1), 0,
      10, QMetaType::QVariantList, 0x00015003, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PX4SimpleFlightModesController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPX4SimpleFlightModesControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS_t,
        // property 'activeFlightMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'channelCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rcChannelValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PX4SimpleFlightModesController, std::true_type>,
        // method 'activeFlightModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'channelOptionEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rcChannelValuesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rcChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PX4SimpleFlightModesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeFlightModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->channelOptionEnabledChanged(); break;
        case 2: _t->rcChannelValuesChanged(); break;
        case 3: _t->_rcChannelsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int[QGCMAVLink::maxRcChannels]>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PX4SimpleFlightModesController::*)(int );
            if (_t _q_method = &PX4SimpleFlightModesController::activeFlightModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PX4SimpleFlightModesController::*)();
            if (_t _q_method = &PX4SimpleFlightModesController::channelOptionEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PX4SimpleFlightModesController::*)();
            if (_t _q_method = &PX4SimpleFlightModesController::rcChannelValuesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->activeFlightMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->_rcChannelValues; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->_rcChannelValues != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_rcChannelValues = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->rcChannelValuesChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PX4SimpleFlightModesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4SimpleFlightModesController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPX4SimpleFlightModesControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int PX4SimpleFlightModesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PX4SimpleFlightModesController::activeFlightModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4SimpleFlightModesController::channelOptionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4SimpleFlightModesController::rcChannelValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
