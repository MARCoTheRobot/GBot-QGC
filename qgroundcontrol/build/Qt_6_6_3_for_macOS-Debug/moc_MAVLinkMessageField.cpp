/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkMessageField.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkMessageField.h"
#include <QtCharts/QAbstractSeries>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkMessageField.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS = QtMocHelpers::stringData(
    "QGCMAVLinkMessageField",
    "QML.Element",
    "auto",
    "seriesChanged",
    "",
    "selectableChanged",
    "valueChanged",
    "name",
    "label",
    "type",
    "value",
    "selectable",
    "chartIndex",
    "series",
    "QAbstractSeries*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[23];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[14];
    char stringdata4[1];
    char stringdata5[18];
    char stringdata6[13];
    char stringdata7[5];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[6];
    char stringdata11[11];
    char stringdata12[11];
    char stringdata13[7];
    char stringdata14[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS_t qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "QGCMAVLinkMessageField"
        QT_MOC_LITERAL(23, 11),  // "QML.Element"
        QT_MOC_LITERAL(35, 4),  // "auto"
        QT_MOC_LITERAL(40, 13),  // "seriesChanged"
        QT_MOC_LITERAL(54, 0),  // ""
        QT_MOC_LITERAL(55, 17),  // "selectableChanged"
        QT_MOC_LITERAL(73, 12),  // "valueChanged"
        QT_MOC_LITERAL(86, 4),  // "name"
        QT_MOC_LITERAL(91, 5),  // "label"
        QT_MOC_LITERAL(97, 4),  // "type"
        QT_MOC_LITERAL(102, 5),  // "value"
        QT_MOC_LITERAL(108, 10),  // "selectable"
        QT_MOC_LITERAL(119, 10),  // "chartIndex"
        QT_MOC_LITERAL(130, 6),  // "series"
        QT_MOC_LITERAL(137, 16)   // "QAbstractSeries*"
    },
    "QGCMAVLinkMessageField",
    "QML.Element",
    "auto",
    "seriesChanged",
    "",
    "selectableChanged",
    "valueChanged",
    "name",
    "label",
    "type",
    "value",
    "selectable",
    "chartIndex",
    "series",
    "QAbstractSeries*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMAVLinkMessageFieldENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       7,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   34,    4, 0x06,    8 /* Public */,
       5,    0,   35,    4, 0x06,    9 /* Public */,
       6,    0,   36,    4, 0x06,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::QString, 0x00015401, uint(-1), 0,
       9, QMetaType::QString, 0x00015401, uint(-1), 0,
      10, QMetaType::QString, 0x00015001, uint(2), 0,
      11, QMetaType::Bool, 0x00015001, uint(1), 0,
      12, QMetaType::Int, 0x00015401, uint(-1), 0,
      13, 0x80000000 | 14, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMAVLinkMessageField::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMAVLinkMessageFieldENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'name'
        QString,
        // property 'label'
        QString,
        // property 'type'
        QString,
        // property 'value'
        QString,
        // property 'selectable'
        bool,
        // property 'chartIndex'
        int,
        // property 'series'
        QAbstractSeries*,
        // Q_OBJECT / Q_GADGET
        QGCMAVLinkMessageField,
        // method 'seriesChanged'
        void,
        // method 'selectableChanged'
        void,
        // method 'valueChanged'
        void
    >,
    nullptr
} };

void QGCMAVLinkMessageField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMAVLinkMessageField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->seriesChanged(); break;
        case 1: _t->selectableChanged(); break;
        case 2: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (_t _q_method = &QGCMAVLinkMessageField::seriesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (_t _q_method = &QGCMAVLinkMessageField::selectableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMAVLinkMessageField::*)();
            if (_t _q_method = &QGCMAVLinkMessageField::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMAVLinkMessageField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->chartIndex(); break;
        case 6: *reinterpret_cast< QAbstractSeries**>(_v) = _t->series(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *QGCMAVLinkMessageField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkMessageField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMAVLinkMessageFieldENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMAVLinkMessageField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkMessageField::seriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMAVLinkMessageField::selectableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMAVLinkMessageField::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
