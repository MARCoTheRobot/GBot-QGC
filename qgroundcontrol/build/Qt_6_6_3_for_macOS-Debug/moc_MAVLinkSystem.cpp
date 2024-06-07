/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkSystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkSystem.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkSystem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS = QtMocHelpers::stringData(
    "QGCMAVLinkSystem",
    "QML.Element",
    "auto",
    "compIDsChanged",
    "",
    "selectedChanged",
    "id",
    "messages",
    "QmlObjectListModel*",
    "compIDs",
    "QList<int>",
    "compIDsStr",
    "selected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[17];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[15];
    char stringdata4[1];
    char stringdata5[16];
    char stringdata6[3];
    char stringdata7[9];
    char stringdata8[20];
    char stringdata9[8];
    char stringdata10[11];
    char stringdata11[11];
    char stringdata12[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS_t qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QGCMAVLinkSystem"
        QT_MOC_LITERAL(17, 11),  // "QML.Element"
        QT_MOC_LITERAL(29, 4),  // "auto"
        QT_MOC_LITERAL(34, 14),  // "compIDsChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 15),  // "selectedChanged"
        QT_MOC_LITERAL(66, 2),  // "id"
        QT_MOC_LITERAL(69, 8),  // "messages"
        QT_MOC_LITERAL(78, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(98, 7),  // "compIDs"
        QT_MOC_LITERAL(106, 10),  // "QList<int>"
        QT_MOC_LITERAL(117, 10),  // "compIDsStr"
        QT_MOC_LITERAL(128, 8)   // "selected"
    },
    "QGCMAVLinkSystem",
    "QML.Element",
    "auto",
    "compIDsChanged",
    "",
    "selectedChanged",
    "id",
    "messages",
    "QmlObjectListModel*",
    "compIDs",
    "QList<int>",
    "compIDsStr",
    "selected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMAVLinkSystemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       5,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   28,    4, 0x06,    6 /* Public */,
       5,    0,   29,    4, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::UChar, 0x00015401, uint(-1), 0,
       7, 0x80000000 | 8, 0x00015409, uint(-1), 0,
       9, 0x80000000 | 10, 0x00015009, uint(0), 0,
      11, QMetaType::QStringList, 0x00015001, uint(0), 0,
      12, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMAVLinkSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMAVLinkSystemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'id'
        quint8,
        // property 'messages'
        QmlObjectListModel*,
        // property 'compIDs'
        QList<int>,
        // property 'compIDsStr'
        QStringList,
        // property 'selected'
        int,
        // Q_OBJECT / Q_GADGET
        QGCMAVLinkSystem,
        // method 'compIDsChanged'
        void,
        // method 'selectedChanged'
        void
    >,
    nullptr
} };

void QGCMAVLinkSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->compIDsChanged(); break;
        case 1: _t->selectedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkSystem::*)();
            if (_t _q_method = &QGCMAVLinkSystem::compIDsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkSystem::*)();
            if (_t _q_method = &QGCMAVLinkSystem::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint8*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->messages(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->compIDs(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->compIDsStr(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMAVLinkSystem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setSelected(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMAVLinkSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMAVLinkSystemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkSystem::compIDsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkSystem::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
