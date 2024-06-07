/****************************************************************************
** Meta object code from reading C++ file 'FactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactGroup.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactGroup.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFactGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFactGroupENDCLASS = QtMocHelpers::stringData(
    "FactGroup",
    "factNamesChanged",
    "",
    "factGroupNamesChanged",
    "telemetryAvailableChanged",
    "telemetryAvailable",
    "_updateAllValues",
    "factExists",
    "name",
    "getFact",
    "Fact*",
    "getFactGroup",
    "FactGroup*",
    "setLiveUpdates",
    "liveUpdates",
    "factNames",
    "factGroupNames"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFactGroupENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[26];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[11];
    char stringdata8[5];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[13];
    char stringdata12[11];
    char stringdata13[15];
    char stringdata14[12];
    char stringdata15[10];
    char stringdata16[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFactGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFactGroupENDCLASS_t qt_meta_stringdata_CLASSFactGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "FactGroup"
        QT_MOC_LITERAL(10, 16),  // "factNamesChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 21),  // "factGroupNamesChanged"
        QT_MOC_LITERAL(50, 25),  // "telemetryAvailableChanged"
        QT_MOC_LITERAL(76, 18),  // "telemetryAvailable"
        QT_MOC_LITERAL(95, 16),  // "_updateAllValues"
        QT_MOC_LITERAL(112, 10),  // "factExists"
        QT_MOC_LITERAL(123, 4),  // "name"
        QT_MOC_LITERAL(128, 7),  // "getFact"
        QT_MOC_LITERAL(136, 5),  // "Fact*"
        QT_MOC_LITERAL(142, 12),  // "getFactGroup"
        QT_MOC_LITERAL(155, 10),  // "FactGroup*"
        QT_MOC_LITERAL(166, 14),  // "setLiveUpdates"
        QT_MOC_LITERAL(181, 11),  // "liveUpdates"
        QT_MOC_LITERAL(193, 9),  // "factNames"
        QT_MOC_LITERAL(203, 14)   // "factGroupNames"
    },
    "FactGroup",
    "factNamesChanged",
    "",
    "factGroupNamesChanged",
    "telemetryAvailableChanged",
    "telemetryAvailable",
    "_updateAllValues",
    "factExists",
    "name",
    "getFact",
    "Fact*",
    "getFactGroup",
    "FactGroup*",
    "setLiveUpdates",
    "liveUpdates",
    "factNames",
    "factGroupNames"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFactGroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    4 /* Public */,
       3,    0,   63,    2, 0x06,    5 /* Public */,
       4,    1,   64,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   67,    2, 0x09,    8 /* Protected */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x02,    9 /* Public */,
       9,    1,   71,    2, 0x02,   11 /* Public */,
      11,    1,   74,    2, 0x02,   13 /* Public */,
      13,    1,   77,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    8,
    0x80000000 | 10, QMetaType::QString,    8,
    0x80000000 | 12, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::QStringList, 0x00015001, uint(0), 0,
      16, QMetaType::QStringList, 0x00015001, uint(1), 0,
       5, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FactGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSFactGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFactGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFactGroupENDCLASS_t,
        // property 'factNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'factGroupNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'telemetryAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FactGroup, std::true_type>,
        // method 'factNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'factGroupNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'telemetryAvailableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateAllValues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'factExists'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getFact'
        QtPrivate::TypeAndForceComplete<Fact *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getFactGroup'
        QtPrivate::TypeAndForceComplete<FactGroup *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setLiveUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void FactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FactGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->factNamesChanged(); break;
        case 1: _t->factGroupNamesChanged(); break;
        case 2: _t->telemetryAvailableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->_updateAllValues(); break;
        case 4: { bool _r = _t->factExists((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { Fact* _r = _t->getFact((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 6: { FactGroup* _r = _t->getFactGroup((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< FactGroup**>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setLiveUpdates((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FactGroup::*)();
            if (_t _q_method = &FactGroup::factNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FactGroup::*)();
            if (_t _q_method = &FactGroup::factGroupNamesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FactGroup::*)(bool );
            if (_t _q_method = &FactGroup::telemetryAvailableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FactGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->factNames(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->factGroupNames(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->telemetryAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFactGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FactGroup::factNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FactGroup::factGroupNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FactGroup::telemetryAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
