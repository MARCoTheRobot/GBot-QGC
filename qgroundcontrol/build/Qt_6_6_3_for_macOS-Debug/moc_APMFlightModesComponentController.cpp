/****************************************************************************
** Meta object code from reading C++ file 'APMFlightModesComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMFlightModesComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFlightModesComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS = QtMocHelpers::stringData(
    "APMFlightModesComponentController",
    "activeFlightModeChanged",
    "",
    "activeFlightMode",
    "channelOptionEnabledChanged",
    "simpleModeChanged",
    "simpleMode",
    "simpleModeEnabledChanged",
    "superSimpleModeEnabledChanged",
    "_rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "_updateSimpleParamsFromSimpleMode",
    "_setupSimpleModeEnabled",
    "setSimpleMode",
    "fltModeIndex",
    "enabled",
    "setSuperSimpleMode",
    "modeParamPrefix",
    "modeChannelParam",
    "channelOptionEnabled",
    "simpleModesSupported",
    "simpleModeNames",
    "simpleModeEnabled",
    "superSimpleModeEnabled",
    "SimpleModeValues",
    "SimpleModeStandard",
    "SimpleModeSimple",
    "SimpleModeSuperSimple",
    "SimpleModeCustom"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[34];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[28];
    char stringdata5[18];
    char stringdata6[11];
    char stringdata7[25];
    char stringdata8[30];
    char stringdata9[19];
    char stringdata10[13];
    char stringdata11[31];
    char stringdata12[10];
    char stringdata13[34];
    char stringdata14[24];
    char stringdata15[14];
    char stringdata16[13];
    char stringdata17[8];
    char stringdata18[19];
    char stringdata19[16];
    char stringdata20[17];
    char stringdata21[21];
    char stringdata22[21];
    char stringdata23[16];
    char stringdata24[18];
    char stringdata25[23];
    char stringdata26[17];
    char stringdata27[19];
    char stringdata28[17];
    char stringdata29[22];
    char stringdata30[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 33),  // "APMFlightModesComponentContro..."
        QT_MOC_LITERAL(34, 23),  // "activeFlightModeChanged"
        QT_MOC_LITERAL(58, 0),  // ""
        QT_MOC_LITERAL(59, 16),  // "activeFlightMode"
        QT_MOC_LITERAL(76, 27),  // "channelOptionEnabledChanged"
        QT_MOC_LITERAL(104, 17),  // "simpleModeChanged"
        QT_MOC_LITERAL(122, 10),  // "simpleMode"
        QT_MOC_LITERAL(133, 24),  // "simpleModeEnabledChanged"
        QT_MOC_LITERAL(158, 29),  // "superSimpleModeEnabledChanged"
        QT_MOC_LITERAL(188, 18),  // "_rcChannelsChanged"
        QT_MOC_LITERAL(207, 12),  // "channelCount"
        QT_MOC_LITERAL(220, 30),  // "int[QGCMAVLink::maxRcChannels]"
        QT_MOC_LITERAL(251, 9),  // "pwmValues"
        QT_MOC_LITERAL(261, 33),  // "_updateSimpleParamsFromSimple..."
        QT_MOC_LITERAL(295, 23),  // "_setupSimpleModeEnabled"
        QT_MOC_LITERAL(319, 13),  // "setSimpleMode"
        QT_MOC_LITERAL(333, 12),  // "fltModeIndex"
        QT_MOC_LITERAL(346, 7),  // "enabled"
        QT_MOC_LITERAL(354, 18),  // "setSuperSimpleMode"
        QT_MOC_LITERAL(373, 15),  // "modeParamPrefix"
        QT_MOC_LITERAL(389, 16),  // "modeChannelParam"
        QT_MOC_LITERAL(406, 20),  // "channelOptionEnabled"
        QT_MOC_LITERAL(427, 20),  // "simpleModesSupported"
        QT_MOC_LITERAL(448, 15),  // "simpleModeNames"
        QT_MOC_LITERAL(464, 17),  // "simpleModeEnabled"
        QT_MOC_LITERAL(482, 22),  // "superSimpleModeEnabled"
        QT_MOC_LITERAL(505, 16),  // "SimpleModeValues"
        QT_MOC_LITERAL(522, 18),  // "SimpleModeStandard"
        QT_MOC_LITERAL(541, 16),  // "SimpleModeSimple"
        QT_MOC_LITERAL(558, 21),  // "SimpleModeSuperSimple"
        QT_MOC_LITERAL(580, 16)   // "SimpleModeCustom"
    },
    "APMFlightModesComponentController",
    "activeFlightModeChanged",
    "",
    "activeFlightMode",
    "channelOptionEnabledChanged",
    "simpleModeChanged",
    "simpleMode",
    "simpleModeEnabledChanged",
    "superSimpleModeEnabledChanged",
    "_rcChannelsChanged",
    "channelCount",
    "int[QGCMAVLink::maxRcChannels]",
    "pwmValues",
    "_updateSimpleParamsFromSimpleMode",
    "_setupSimpleModeEnabled",
    "setSimpleMode",
    "fltModeIndex",
    "enabled",
    "setSuperSimpleMode",
    "modeParamPrefix",
    "modeChannelParam",
    "channelOptionEnabled",
    "simpleModesSupported",
    "simpleModeNames",
    "simpleModeEnabled",
    "superSimpleModeEnabled",
    "SimpleModeValues",
    "SimpleModeStandard",
    "SimpleModeSimple",
    "SimpleModeSuperSimple",
    "SimpleModeCustom"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAPMFlightModesComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,  100, // properties
       1,  150, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,   12 /* Public */,
       4,    0,   77,    2, 0x06,   14 /* Public */,
       5,    1,   78,    2, 0x06,   15 /* Public */,
       7,    0,   81,    2, 0x06,   17 /* Public */,
       8,    0,   82,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   83,    2, 0x08,   19 /* Private */,
      13,    0,   88,    2, 0x08,   22 /* Private */,
      14,    0,   89,    2, 0x08,   23 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      15,    2,   90,    2, 0x02,   24 /* Public */,
      18,    2,   95,    2, 0x02,   27 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   16,   17,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00015401, uint(-1), 0,
      20, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::Int, 0x00015001, uint(0), 0,
      10, QMetaType::Int, 0x00015401, uint(-1), 0,
      21, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      22, QMetaType::Bool, 0x00015401, uint(-1), 0,
      23, QMetaType::QStringList, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015003, uint(2), 0,
      24, QMetaType::QVariantList, 0x00015003, uint(3), 0,
      25, QMetaType::QVariantList, 0x00015003, uint(4), 0,

 // enums: name, alias, flags, count, data
      26,   26, 0x0,    4,  155,

 // enum data: key, value
      27, uint(APMFlightModesComponentController::SimpleModeStandard),
      28, uint(APMFlightModesComponentController::SimpleModeSimple),
      29, uint(APMFlightModesComponentController::SimpleModeSuperSimple),
      30, uint(APMFlightModesComponentController::SimpleModeCustom),

       0        // eod
};

Q_CONSTINIT const QMetaObject APMFlightModesComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAPMFlightModesComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS_t,
        // property 'modeParamPrefix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'modeChannelParam'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'activeFlightMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'channelCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'channelOptionEnabled'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'simpleModesSupported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'simpleModeNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'simpleMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'simpleModeEnabled'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'superSimpleModeEnabled'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // enum 'SimpleModeValues'
        QtPrivate::TypeAndForceComplete<APMFlightModesComponentController::SimpleModeValues, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<APMFlightModesComponentController, std::true_type>,
        // method 'activeFlightModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'channelOptionEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'simpleModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'simpleModeEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'superSimpleModeEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_rcChannelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_updateSimpleParamsFromSimpleMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setupSimpleModeEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSimpleMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSuperSimpleMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void APMFlightModesComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeFlightModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->channelOptionEnabledChanged(); break;
        case 2: _t->simpleModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->simpleModeEnabledChanged(); break;
        case 4: _t->superSimpleModeEnabledChanged(); break;
        case 5: _t->_rcChannelsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int[QGCMAVLink::maxRcChannels]>>(_a[2]))); break;
        case 6: _t->_updateSimpleParamsFromSimpleMode(); break;
        case 7: _t->_setupSimpleModeEnabled(); break;
        case 8: _t->setSimpleMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->setSuperSimpleMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (APMFlightModesComponentController::*)(int );
            if (_t _q_method = &APMFlightModesComponentController::activeFlightModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (_t _q_method = &APMFlightModesComponentController::channelOptionEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)(int );
            if (_t _q_method = &APMFlightModesComponentController::simpleModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (_t _q_method = &APMFlightModesComponentController::simpleModeEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (APMFlightModesComponentController::*)();
            if (_t _q_method = &APMFlightModesComponentController::superSimpleModeEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_modeParamPrefix; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_modeChannelParam; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->activeFlightMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->channelOptionEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_simpleModesSupported; break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->_simpleModeNames; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->_simpleMode; break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->_simpleModeEnabled; break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->_superSimpleModeEnabled; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<APMFlightModesComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7:
            if (_t->_simpleMode != *reinterpret_cast< int*>(_v)) {
                _t->_simpleMode = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->simpleModeChanged(_t->_simpleMode);
            }
            break;
        case 8:
            if (_t->_simpleModeEnabled != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_simpleModeEnabled = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->simpleModeEnabledChanged();
            }
            break;
        case 9:
            if (_t->_superSimpleModeEnabled != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_superSimpleModeEnabled = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->superSimpleModeEnabledChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *APMFlightModesComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFlightModesComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAPMFlightModesComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMFlightModesComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void APMFlightModesComponentController::activeFlightModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void APMFlightModesComponentController::channelOptionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void APMFlightModesComponentController::simpleModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void APMFlightModesComponentController::simpleModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void APMFlightModesComponentController::superSimpleModeEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
