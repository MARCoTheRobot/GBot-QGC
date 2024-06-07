/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkMessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkMessage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkMessage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS = QtMocHelpers::stringData(
    "QGCMAVLinkMessage",
    "QML.Element",
    "auto",
    "countChanged",
    "",
    "actualRateHzChanged",
    "targetRateHzChanged",
    "fieldSelectedChanged",
    "selectedChanged",
    "id",
    "sysId",
    "compId",
    "name",
    "actualRateHz",
    "targetRateHz",
    "int32_t",
    "count",
    "fields",
    "QmlObjectListModel*",
    "fieldSelected",
    "selected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[13];
    char stringdata4[1];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[21];
    char stringdata8[16];
    char stringdata9[3];
    char stringdata10[6];
    char stringdata11[7];
    char stringdata12[5];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[8];
    char stringdata16[6];
    char stringdata17[7];
    char stringdata18[20];
    char stringdata19[14];
    char stringdata20[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS_t qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGCMAVLinkMessage"
        QT_MOC_LITERAL(18, 11),  // "QML.Element"
        QT_MOC_LITERAL(30, 4),  // "auto"
        QT_MOC_LITERAL(35, 12),  // "countChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 19),  // "actualRateHzChanged"
        QT_MOC_LITERAL(69, 19),  // "targetRateHzChanged"
        QT_MOC_LITERAL(89, 20),  // "fieldSelectedChanged"
        QT_MOC_LITERAL(110, 15),  // "selectedChanged"
        QT_MOC_LITERAL(126, 2),  // "id"
        QT_MOC_LITERAL(129, 5),  // "sysId"
        QT_MOC_LITERAL(135, 6),  // "compId"
        QT_MOC_LITERAL(142, 4),  // "name"
        QT_MOC_LITERAL(147, 12),  // "actualRateHz"
        QT_MOC_LITERAL(160, 12),  // "targetRateHz"
        QT_MOC_LITERAL(173, 7),  // "int32_t"
        QT_MOC_LITERAL(181, 5),  // "count"
        QT_MOC_LITERAL(187, 6),  // "fields"
        QT_MOC_LITERAL(194, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(214, 13),  // "fieldSelected"
        QT_MOC_LITERAL(228, 8)   // "selected"
    },
    "QGCMAVLinkMessage",
    "QML.Element",
    "auto",
    "countChanged",
    "",
    "actualRateHzChanged",
    "targetRateHzChanged",
    "fieldSelectedChanged",
    "selectedChanged",
    "id",
    "sysId",
    "compId",
    "name",
    "actualRateHz",
    "targetRateHz",
    "int32_t",
    "count",
    "fields",
    "QmlObjectListModel*",
    "fieldSelected",
    "selected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMAVLinkMessageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
      10,   51, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   46,    4, 0x06,   11 /* Public */,
       5,    0,   47,    4, 0x06,   12 /* Public */,
       6,    0,   48,    4, 0x06,   13 /* Public */,
       7,    0,   49,    4, 0x06,   14 /* Public */,
       8,    0,   50,    4, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::UInt, 0x00015401, uint(-1), 0,
      10, QMetaType::UInt, 0x00015401, uint(-1), 0,
      11, QMetaType::UInt, 0x00015401, uint(-1), 0,
      12, QMetaType::QString, 0x00015401, uint(-1), 0,
      13, QMetaType::QReal, 0x00015001, uint(1), 0,
      14, 0x80000000 | 15, 0x00015009, uint(2), 0,
      16, QMetaType::ULongLong, 0x00015001, uint(0), 0,
      17, 0x80000000 | 18, 0x00015409, uint(-1), 0,
      19, QMetaType::Bool, 0x00015001, uint(3), 0,
      20, QMetaType::Bool, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMAVLinkMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMAVLinkMessageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'id'
        quint32,
        // property 'sysId'
        quint32,
        // property 'compId'
        quint32,
        // property 'name'
        QString,
        // property 'actualRateHz'
        qreal,
        // property 'targetRateHz'
        int32_t,
        // property 'count'
        quint64,
        // property 'fields'
        QmlObjectListModel*,
        // property 'fieldSelected'
        bool,
        // property 'selected'
        bool,
        // Q_OBJECT / Q_GADGET
        QGCMAVLinkMessage,
        // method 'countChanged'
        void,
        // method 'actualRateHzChanged'
        void,
        // method 'targetRateHzChanged'
        void,
        // method 'fieldSelectedChanged'
        void,
        // method 'selectedChanged'
        void
    >,
    nullptr
} };

void QGCMAVLinkMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkMessage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->actualRateHzChanged(); break;
        case 2: _t->targetRateHzChanged(); break;
        case 3: _t->fieldSelectedChanged(); break;
        case 4: _t->selectedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (_t _q_method = &QGCMAVLinkMessage::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (_t _q_method = &QGCMAVLinkMessage::actualRateHzChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (_t _q_method = &QGCMAVLinkMessage::targetRateHzChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (_t _q_method = &QGCMAVLinkMessage::fieldSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessage::*)();
            if (_t _q_method = &QGCMAVLinkMessage::selectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkMessage *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->sysId(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->compId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->actualRateHz(); break;
        case 5: *reinterpret_cast< int32_t*>(_v) = _t->targetRateHz(); break;
        case 6: *reinterpret_cast< quint64*>(_v) = _t->count(); break;
        case 7: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->fields(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->fieldSelected(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMAVLinkMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMAVLinkMessageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkMessage::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkMessage::actualRateHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMAVLinkMessage::targetRateHzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCMAVLinkMessage::fieldSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMAVLinkMessage::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
