/****************************************************************************
** Meta object code from reading C++ file 'LogEntry.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/LogEntry.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogEntry.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCLogEntryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCLogEntryENDCLASS = QtMocHelpers::stringData(
    "QGCLogEntry",
    "QML.Element",
    "auto",
    "idChanged",
    "",
    "timeChanged",
    "sizeChanged",
    "receivedChanged",
    "selectedChanged",
    "statusChanged",
    "id",
    "time",
    "size",
    "sizeStr",
    "received",
    "selected",
    "status"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCLogEntryENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[10];
    char stringdata4[1];
    char stringdata5[12];
    char stringdata6[12];
    char stringdata7[16];
    char stringdata8[16];
    char stringdata9[14];
    char stringdata10[3];
    char stringdata11[5];
    char stringdata12[5];
    char stringdata13[8];
    char stringdata14[9];
    char stringdata15[9];
    char stringdata16[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCLogEntryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCLogEntryENDCLASS_t qt_meta_stringdata_CLASSQGCLogEntryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QGCLogEntry"
        QT_MOC_LITERAL(12, 11),  // "QML.Element"
        QT_MOC_LITERAL(24, 4),  // "auto"
        QT_MOC_LITERAL(29, 9),  // "idChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 11),  // "timeChanged"
        QT_MOC_LITERAL(52, 11),  // "sizeChanged"
        QT_MOC_LITERAL(64, 15),  // "receivedChanged"
        QT_MOC_LITERAL(80, 15),  // "selectedChanged"
        QT_MOC_LITERAL(96, 13),  // "statusChanged"
        QT_MOC_LITERAL(110, 2),  // "id"
        QT_MOC_LITERAL(113, 4),  // "time"
        QT_MOC_LITERAL(118, 4),  // "size"
        QT_MOC_LITERAL(123, 7),  // "sizeStr"
        QT_MOC_LITERAL(131, 8),  // "received"
        QT_MOC_LITERAL(140, 8),  // "selected"
        QT_MOC_LITERAL(149, 6)   // "status"
    },
    "QGCLogEntry",
    "QML.Element",
    "auto",
    "idChanged",
    "",
    "timeChanged",
    "sizeChanged",
    "receivedChanged",
    "selectedChanged",
    "statusChanged",
    "id",
    "time",
    "size",
    "sizeStr",
    "received",
    "selected",
    "status"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCLogEntryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       7,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   52,    4, 0x06,    8 /* Public */,
       5,    0,   53,    4, 0x06,    9 /* Public */,
       6,    0,   54,    4, 0x06,   10 /* Public */,
       7,    0,   55,    4, 0x06,   11 /* Public */,
       8,    0,   56,    4, 0x06,   12 /* Public */,
       9,    0,   57,    4, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::UInt, 0x00015401, uint(-1), 0,
      11, QMetaType::QDateTime, 0x00015001, uint(1), 0,
      12, QMetaType::UInt, 0x00015001, uint(2), 0,
      13, QMetaType::QString, 0x00015001, uint(2), 0,
      14, QMetaType::Bool, 0x00015001, uint(3), 0,
      15, QMetaType::Bool, 0x00015103, uint(4), 0,
      16, QMetaType::QString, 0x00015001, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCLogEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCLogEntryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCLogEntryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'id'
        uint,
        // property 'time'
        QDateTime,
        // property 'size'
        uint,
        // property 'sizeStr'
        QString,
        // property 'received'
        bool,
        // property 'selected'
        bool,
        // property 'status'
        QString,
        // Q_OBJECT / Q_GADGET
        QGCLogEntry,
        // method 'idChanged'
        void,
        // method 'timeChanged'
        void,
        // method 'sizeChanged'
        void,
        // method 'receivedChanged'
        void,
        // method 'selectedChanged'
        void,
        // method 'statusChanged'
        void
    >,
    nullptr
} };

void QGCLogEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCLogEntry *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->timeChanged(); break;
        case 2: _t->sizeChanged(); break;
        case 3: _t->receivedChanged(); break;
        case 4: _t->selectedChanged(); break;
        case 5: _t->statusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::idChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::timeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::sizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::receivedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCLogEntry::*)();
            if (_t _q_method = &QGCLogEntry::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCLogEntry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->time(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->size(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sizeStr(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->received(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCLogEntry *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QGCLogEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCLogEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCLogEntryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCLogEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGCLogEntry::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCLogEntry::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCLogEntry::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCLogEntry::receivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCLogEntry::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCLogEntry::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
