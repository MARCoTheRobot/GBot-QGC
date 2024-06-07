/****************************************************************************
** Meta object code from reading C++ file 'RemoteIDManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/RemoteIDManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemoteIDManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS = QtMocHelpers::stringData(
    "RemoteIDManager",
    "availableChanged",
    "",
    "armStatusGoodChanged",
    "armStatusErrorChanged",
    "commsGoodChanged",
    "gcsGPSGoodChanged",
    "basicIDGoodChanged",
    "emergencyDeclaredChanged",
    "operatorIDGoodChanged",
    "_odidTimeout",
    "_sendMessages",
    "_updateLastGCSPositionInfo",
    "QGeoPositionInfo",
    "update",
    "_checkGCSBasicID",
    "checkOperatorID",
    "operatorID",
    "setOperatorID",
    "setEmergency",
    "declare",
    "available",
    "armStatusGood",
    "armStatusError",
    "commsGood",
    "gcsGPSGood",
    "basicIDGood",
    "emergencyDeclared",
    "operatorIDGood"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[22];
    char stringdata5[17];
    char stringdata6[18];
    char stringdata7[19];
    char stringdata8[25];
    char stringdata9[22];
    char stringdata10[13];
    char stringdata11[14];
    char stringdata12[27];
    char stringdata13[17];
    char stringdata14[7];
    char stringdata15[17];
    char stringdata16[16];
    char stringdata17[11];
    char stringdata18[14];
    char stringdata19[13];
    char stringdata20[8];
    char stringdata21[10];
    char stringdata22[14];
    char stringdata23[15];
    char stringdata24[10];
    char stringdata25[11];
    char stringdata26[12];
    char stringdata27[18];
    char stringdata28[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS_t qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "RemoteIDManager"
        QT_MOC_LITERAL(16, 16),  // "availableChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 20),  // "armStatusGoodChanged"
        QT_MOC_LITERAL(55, 21),  // "armStatusErrorChanged"
        QT_MOC_LITERAL(77, 16),  // "commsGoodChanged"
        QT_MOC_LITERAL(94, 17),  // "gcsGPSGoodChanged"
        QT_MOC_LITERAL(112, 18),  // "basicIDGoodChanged"
        QT_MOC_LITERAL(131, 24),  // "emergencyDeclaredChanged"
        QT_MOC_LITERAL(156, 21),  // "operatorIDGoodChanged"
        QT_MOC_LITERAL(178, 12),  // "_odidTimeout"
        QT_MOC_LITERAL(191, 13),  // "_sendMessages"
        QT_MOC_LITERAL(205, 26),  // "_updateLastGCSPositionInfo"
        QT_MOC_LITERAL(232, 16),  // "QGeoPositionInfo"
        QT_MOC_LITERAL(249, 6),  // "update"
        QT_MOC_LITERAL(256, 16),  // "_checkGCSBasicID"
        QT_MOC_LITERAL(273, 15),  // "checkOperatorID"
        QT_MOC_LITERAL(289, 10),  // "operatorID"
        QT_MOC_LITERAL(300, 13),  // "setOperatorID"
        QT_MOC_LITERAL(314, 12),  // "setEmergency"
        QT_MOC_LITERAL(327, 7),  // "declare"
        QT_MOC_LITERAL(335, 9),  // "available"
        QT_MOC_LITERAL(345, 13),  // "armStatusGood"
        QT_MOC_LITERAL(359, 14),  // "armStatusError"
        QT_MOC_LITERAL(374, 9),  // "commsGood"
        QT_MOC_LITERAL(384, 10),  // "gcsGPSGood"
        QT_MOC_LITERAL(395, 11),  // "basicIDGood"
        QT_MOC_LITERAL(407, 17),  // "emergencyDeclared"
        QT_MOC_LITERAL(425, 14)   // "operatorIDGood"
    },
    "RemoteIDManager",
    "availableChanged",
    "",
    "armStatusGoodChanged",
    "armStatusErrorChanged",
    "commsGoodChanged",
    "gcsGPSGoodChanged",
    "basicIDGoodChanged",
    "emergencyDeclaredChanged",
    "operatorIDGoodChanged",
    "_odidTimeout",
    "_sendMessages",
    "_updateLastGCSPositionInfo",
    "QGeoPositionInfo",
    "update",
    "_checkGCSBasicID",
    "checkOperatorID",
    "operatorID",
    "setOperatorID",
    "setEmergency",
    "declare",
    "available",
    "armStatusGood",
    "armStatusError",
    "commsGood",
    "gcsGPSGood",
    "basicIDGood",
    "emergencyDeclared",
    "operatorIDGood"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRemoteIDManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       8,  125, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    9 /* Public */,
       3,    0,  105,    2, 0x06,   10 /* Public */,
       4,    0,  106,    2, 0x06,   11 /* Public */,
       5,    0,  107,    2, 0x06,   12 /* Public */,
       6,    0,  108,    2, 0x06,   13 /* Public */,
       7,    0,  109,    2, 0x06,   14 /* Public */,
       8,    0,  110,    2, 0x06,   15 /* Public */,
       9,    0,  111,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  112,    2, 0x08,   17 /* Private */,
      11,    0,  113,    2, 0x08,   18 /* Private */,
      12,    1,  114,    2, 0x08,   19 /* Private */,
      15,    0,  117,    2, 0x08,   21 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  118,    2, 0x02,   22 /* Public */,
      18,    0,  121,    2, 0x02,   24 /* Public */,
      19,    1,  122,    2, 0x02,   25 /* Public */,

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
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00015001, uint(0), 0,
      22, QMetaType::Bool, 0x00015001, uint(1), 0,
      23, QMetaType::QString, 0x00015001, uint(2), 0,
      24, QMetaType::Bool, 0x00015001, uint(3), 0,
      25, QMetaType::Bool, 0x00015001, uint(4), 0,
      26, QMetaType::Bool, 0x00015001, uint(5), 0,
      27, QMetaType::Bool, 0x00015001, uint(6), 0,
      28, QMetaType::Bool, 0x00015001, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RemoteIDManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRemoteIDManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS_t,
        // property 'available'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'armStatusGood'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'armStatusError'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'commsGood'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gcsGPSGood'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'basicIDGood'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'emergencyDeclared'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'operatorIDGood'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RemoteIDManager, std::true_type>,
        // method 'availableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'armStatusGoodChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'armStatusErrorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'commsGoodChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gcsGPSGoodChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'basicIDGoodChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emergencyDeclaredChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'operatorIDGoodChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_odidTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_sendMessages'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateLastGCSPositionInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoPositionInfo, std::false_type>,
        // method '_checkGCSBasicID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkOperatorID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setOperatorID'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setEmergency'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void RemoteIDManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteIDManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->availableChanged(); break;
        case 1: _t->armStatusGoodChanged(); break;
        case 2: _t->armStatusErrorChanged(); break;
        case 3: _t->commsGoodChanged(); break;
        case 4: _t->gcsGPSGoodChanged(); break;
        case 5: _t->basicIDGoodChanged(); break;
        case 6: _t->emergencyDeclaredChanged(); break;
        case 7: _t->operatorIDGoodChanged(); break;
        case 8: _t->_odidTimeout(); break;
        case 9: _t->_sendMessages(); break;
        case 10: _t->_updateLastGCSPositionInfo((*reinterpret_cast< std::add_pointer_t<QGeoPositionInfo>>(_a[1]))); break;
        case 11: _t->_checkGCSBasicID(); break;
        case 12: _t->checkOperatorID((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->setOperatorID(); break;
        case 14: _t->setEmergency((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoPositionInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::availableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::armStatusGoodChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::armStatusErrorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::commsGoodChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::gcsGPSGoodChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::basicIDGoodChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::emergencyDeclaredChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RemoteIDManager::*)();
            if (_t _q_method = &RemoteIDManager::operatorIDGoodChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RemoteIDManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->armStatusGood(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->armStatusError(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->commsGood(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->gcsGPSGood(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->basicIDGood(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->emergencyDeclared(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->operatorIDGood(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *RemoteIDManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteIDManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRemoteIDManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RemoteIDManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RemoteIDManager::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RemoteIDManager::armStatusGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RemoteIDManager::armStatusErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RemoteIDManager::commsGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RemoteIDManager::gcsGPSGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void RemoteIDManager::basicIDGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void RemoteIDManager::emergencyDeclaredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void RemoteIDManager::operatorIDGoodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
