/****************************************************************************
** Meta object code from reading C++ file 'SyslinkComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/Common/SyslinkComponentController.h"
#include "Vehicle.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SyslinkComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS = QtMocHelpers::stringData(
    "SyslinkComponentController",
    "radioChannelChanged",
    "",
    "radioAddressChanged",
    "radioRateChanged",
    "_channelChanged",
    "value",
    "_addressChanged",
    "_rateChanged",
    "resetDefaults",
    "radioChannel",
    "radioAddress",
    "radioRate",
    "radioRates",
    "vehicle",
    "Vehicle*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[6];
    char stringdata7[16];
    char stringdata8[13];
    char stringdata9[14];
    char stringdata10[13];
    char stringdata11[13];
    char stringdata12[10];
    char stringdata13[11];
    char stringdata14[8];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS_t qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "SyslinkComponentController"
        QT_MOC_LITERAL(27, 19),  // "radioChannelChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 19),  // "radioAddressChanged"
        QT_MOC_LITERAL(68, 16),  // "radioRateChanged"
        QT_MOC_LITERAL(85, 15),  // "_channelChanged"
        QT_MOC_LITERAL(101, 5),  // "value"
        QT_MOC_LITERAL(107, 15),  // "_addressChanged"
        QT_MOC_LITERAL(123, 12),  // "_rateChanged"
        QT_MOC_LITERAL(136, 13),  // "resetDefaults"
        QT_MOC_LITERAL(150, 12),  // "radioChannel"
        QT_MOC_LITERAL(163, 12),  // "radioAddress"
        QT_MOC_LITERAL(176, 9),  // "radioRate"
        QT_MOC_LITERAL(186, 10),  // "radioRates"
        QT_MOC_LITERAL(197, 7),  // "vehicle"
        QT_MOC_LITERAL(205, 8)   // "Vehicle*"
    },
    "SyslinkComponentController",
    "radioChannelChanged",
    "",
    "radioAddressChanged",
    "radioRateChanged",
    "_channelChanged",
    "value",
    "_addressChanged",
    "_rateChanged",
    "resetDefaults",
    "radioChannel",
    "radioAddress",
    "radioRate",
    "radioRates",
    "vehicle",
    "Vehicle*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSyslinkComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    6 /* Public */,
       3,    0,   57,    2, 0x06,    7 /* Public */,
       4,    0,   58,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x08,    9 /* Private */,
       7,    1,   62,    2, 0x08,   11 /* Private */,
       8,    1,   65,    2, 0x08,   13 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   68,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, QMetaType::Int, 0x00015103, uint(2), 0,
      13, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      14, 0x80000000 | 15, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SyslinkComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSyslinkComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS_t,
        // property 'radioChannel'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'radioAddress'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'radioRate'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'radioRates'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'vehicle'
        QtPrivate::TypeAndForceComplete<Vehicle*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyslinkComponentController, std::true_type>,
        // method 'radioChannelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'radioAddressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'radioRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_channelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_addressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_rateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'resetDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SyslinkComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyslinkComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->radioChannelChanged(); break;
        case 1: _t->radioAddressChanged(); break;
        case 2: _t->radioRateChanged(); break;
        case 3: _t->_channelChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 4: _t->_addressChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 5: _t->_rateChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 6: _t->resetDefaults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyslinkComponentController::*)();
            if (_t _q_method = &SyslinkComponentController::radioChannelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyslinkComponentController::*)();
            if (_t _q_method = &SyslinkComponentController::radioAddressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyslinkComponentController::*)();
            if (_t _q_method = &SyslinkComponentController::radioRateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SyslinkComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->radioChannel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->radioAddress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->radioRate(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->radioRates(); break;
        case 4: *reinterpret_cast< Vehicle**>(_v) = _t->vehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SyslinkComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRadioChannel(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRadioAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRadioRate(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SyslinkComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyslinkComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSyslinkComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int SyslinkComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SyslinkComponentController::radioChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SyslinkComponentController::radioAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SyslinkComponentController::radioRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
