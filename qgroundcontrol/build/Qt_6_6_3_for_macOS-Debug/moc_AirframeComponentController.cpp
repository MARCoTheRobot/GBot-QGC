/****************************************************************************
** Meta object code from reading C++ file 'AirframeComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/AirframeComponentController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirframeComponentController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS = QtMocHelpers::stringData(
    "AirframeComponentController",
    "autostartIdChanged",
    "",
    "newAutostartId",
    "showCustomConfigPanelChanged",
    "show",
    "_waitParamWriteSignal",
    "value",
    "_rebootAfterStackUnwind",
    "changeAutostart",
    "showCustomConfigPanel",
    "airframeTypes",
    "currentAirframeType",
    "currentVehicleName",
    "currentVehicleIndex",
    "autostartId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[28];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[29];
    char stringdata5[5];
    char stringdata6[22];
    char stringdata7[6];
    char stringdata8[24];
    char stringdata9[16];
    char stringdata10[22];
    char stringdata11[14];
    char stringdata12[20];
    char stringdata13[19];
    char stringdata14[20];
    char stringdata15[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS_t qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "AirframeComponentController"
        QT_MOC_LITERAL(28, 18),  // "autostartIdChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 14),  // "newAutostartId"
        QT_MOC_LITERAL(63, 28),  // "showCustomConfigPanelChanged"
        QT_MOC_LITERAL(92, 4),  // "show"
        QT_MOC_LITERAL(97, 21),  // "_waitParamWriteSignal"
        QT_MOC_LITERAL(119, 5),  // "value"
        QT_MOC_LITERAL(125, 23),  // "_rebootAfterStackUnwind"
        QT_MOC_LITERAL(149, 15),  // "changeAutostart"
        QT_MOC_LITERAL(165, 21),  // "showCustomConfigPanel"
        QT_MOC_LITERAL(187, 13),  // "airframeTypes"
        QT_MOC_LITERAL(201, 19),  // "currentAirframeType"
        QT_MOC_LITERAL(221, 18),  // "currentVehicleName"
        QT_MOC_LITERAL(240, 19),  // "currentVehicleIndex"
        QT_MOC_LITERAL(260, 11)   // "autostartId"
    },
    "AirframeComponentController",
    "autostartIdChanged",
    "",
    "newAutostartId",
    "showCustomConfigPanelChanged",
    "show",
    "_waitParamWriteSignal",
    "value",
    "_rebootAfterStackUnwind",
    "changeAutostart",
    "showCustomConfigPanel",
    "airframeTypes",
    "currentAirframeType",
    "currentVehicleName",
    "currentVehicleIndex",
    "autostartId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAirframeComponentControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    7 /* Public */,
       4,    1,   47,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   50,    2, 0x08,   11 /* Private */,
       8,    0,   53,    2, 0x08,   13 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   54,    2, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    7,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00015003, uint(1), 0,
      11, QMetaType::QVariantList, 0x00015401, uint(-1), 0,
      12, QMetaType::QString, 0x00015401, uint(-1), 0,
      13, QMetaType::QString, 0x00015401, uint(-1), 0,
      14, QMetaType::Int, 0x00015401, uint(-1), 0,
      15, QMetaType::Int, 0x00015003, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AirframeComponentController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAirframeComponentControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS_t,
        // property 'showCustomConfigPanel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'airframeTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentAirframeType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentVehicleName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentVehicleIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autostartId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AirframeComponentController, std::true_type>,
        // method 'autostartIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showCustomConfigPanelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_waitParamWriteSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method '_rebootAfterStackUnwind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeAutostart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AirframeComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirframeComponentController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->autostartIdChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->showCustomConfigPanelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->_waitParamWriteSignal((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 3: _t->_rebootAfterStackUnwind(); break;
        case 4: _t->changeAutostart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirframeComponentController::*)(int );
            if (_t _q_method = &AirframeComponentController::autostartIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirframeComponentController::*)(bool );
            if (_t _q_method = &AirframeComponentController::showCustomConfigPanelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirframeComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_showCustomConfigPanel; break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->_airframeTypes; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_currentAirframeType; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_currentVehicleName; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->_currentVehicleIndex; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->_autostartId; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirframeComponentController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_showCustomConfigPanel != *reinterpret_cast< bool*>(_v)) {
                _t->_showCustomConfigPanel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showCustomConfigPanelChanged(_t->_showCustomConfigPanel);
            }
            break;
        case 5:
            if (_t->_autostartId != *reinterpret_cast< int*>(_v)) {
                _t->_autostartId = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->autostartIdChanged(_t->_autostartId);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *AirframeComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirframeComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAirframeComponentControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int AirframeComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AirframeComponentController::autostartIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirframeComponentController::showCustomConfigPanelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAirframeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAirframeENDCLASS = QtMocHelpers::stringData(
    "Airframe",
    "text",
    "autostartId"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAirframeENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[9];
    char stringdata1[5];
    char stringdata2[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAirframeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAirframeENDCLASS_t qt_meta_stringdata_CLASSAirframeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Airframe"
        QT_MOC_LITERAL(9, 4),  // "text"
        QT_MOC_LITERAL(14, 11)   // "autostartId"
    },
    "Airframe",
    "text",
    "autostartId"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAirframeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Airframe::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAirframeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAirframeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAirframeENDCLASS_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'autostartId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Airframe, std::true_type>
    >,
    nullptr
} };

void Airframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Airframe *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_autostartId; break;
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

const QMetaObject *Airframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Airframe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAirframeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Airframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAirframeTypeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAirframeTypeENDCLASS = QtMocHelpers::stringData(
    "AirframeType",
    "name",
    "imageResource",
    "airframes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAirframeTypeENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[13];
    char stringdata1[5];
    char stringdata2[14];
    char stringdata3[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAirframeTypeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAirframeTypeENDCLASS_t qt_meta_stringdata_CLASSAirframeTypeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "AirframeType"
        QT_MOC_LITERAL(13, 4),  // "name"
        QT_MOC_LITERAL(18, 13),  // "imageResource"
        QT_MOC_LITERAL(32, 9)   // "airframes"
    },
    "AirframeType",
    "name",
    "imageResource",
    "airframes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAirframeTypeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::QVariantList, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject AirframeType::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAirframeTypeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAirframeTypeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAirframeTypeENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'imageResource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'airframes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AirframeType, std::true_type>
    >,
    nullptr
} };

void AirframeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirframeType *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_imageResource; break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->_airframes; break;
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

const QMetaObject *AirframeType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirframeType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAirframeTypeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AirframeType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
