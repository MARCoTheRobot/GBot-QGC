/****************************************************************************
** Meta object code from reading C++ file 'VehicleComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/VehicleComponent.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VehicleComponent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVehicleComponentENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSVehicleComponentENDCLASS = QtMocHelpers::stringData(
    "VehicleComponent",
    "setupCompleteChanged",
    "",
    "setupComplete",
    "setupSourceChanged",
    "_triggerUpdated",
    "value",
    "name",
    "description",
    "requiresSetup",
    "iconResource",
    "setupSource",
    "summaryQmlSource",
    "allowSetupWhileArmed",
    "allowSetupWhileFlying"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVehicleComponentENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[17];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[19];
    char stringdata5[16];
    char stringdata6[6];
    char stringdata7[5];
    char stringdata8[12];
    char stringdata9[14];
    char stringdata10[13];
    char stringdata11[12];
    char stringdata12[17];
    char stringdata13[21];
    char stringdata14[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVehicleComponentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVehicleComponentENDCLASS_t qt_meta_stringdata_CLASSVehicleComponentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "VehicleComponent"
        QT_MOC_LITERAL(17, 20),  // "setupCompleteChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 13),  // "setupComplete"
        QT_MOC_LITERAL(53, 18),  // "setupSourceChanged"
        QT_MOC_LITERAL(72, 15),  // "_triggerUpdated"
        QT_MOC_LITERAL(88, 5),  // "value"
        QT_MOC_LITERAL(94, 4),  // "name"
        QT_MOC_LITERAL(99, 11),  // "description"
        QT_MOC_LITERAL(111, 13),  // "requiresSetup"
        QT_MOC_LITERAL(125, 12),  // "iconResource"
        QT_MOC_LITERAL(138, 11),  // "setupSource"
        QT_MOC_LITERAL(150, 16),  // "summaryQmlSource"
        QT_MOC_LITERAL(167, 20),  // "allowSetupWhileArmed"
        QT_MOC_LITERAL(188, 21)   // "allowSetupWhileFlying"
    },
    "VehicleComponent",
    "setupCompleteChanged",
    "",
    "setupComplete",
    "setupSourceChanged",
    "_triggerUpdated",
    "value",
    "name",
    "description",
    "requiresSetup",
    "iconResource",
    "setupSource",
    "summaryQmlSource",
    "allowSetupWhileArmed",
    "allowSetupWhileFlying"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVehicleComponentENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   10 /* Public */,
       4,    0,   35,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   36,    2, 0x09,   13 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::QString, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015401, uint(-1), 0,
       3, QMetaType::Bool, 0x00005001, uint(0), 0,
      10, QMetaType::QString, 0x00015401, uint(-1), 0,
      11, QMetaType::QUrl, 0x00015001, uint(1), 0,
      12, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      13, QMetaType::Bool, 0x00015401, uint(-1), 0,
      14, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject VehicleComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSVehicleComponentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVehicleComponentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVehicleComponentENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'requiresSetup'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'setupComplete'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconResource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'setupSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'summaryQmlSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'allowSetupWhileArmed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allowSetupWhileFlying'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VehicleComponent, std::true_type>,
        // method 'setupCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setupSourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_triggerUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void VehicleComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VehicleComponent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupCompleteChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setupSourceChanged(); break;
        case 2: _t->_triggerUpdated((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VehicleComponent::*)(bool );
            if (_t _q_method = &VehicleComponent::setupCompleteChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VehicleComponent::*)();
            if (_t _q_method = &VehicleComponent::setupSourceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VehicleComponent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->requiresSetup(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->setupComplete(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconResource(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->setupSource(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = _t->summaryQmlSource(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->allowSetupWhileArmed(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->allowSetupWhileFlying(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *VehicleComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVehicleComponentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VehicleComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void VehicleComponent::setupCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VehicleComponent::setupSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
