/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkChartController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkChartController.h"
#include "MAVLinkInspectorController.h"
#include "MAVLinkMessageField.h"
#include <QtCharts/qabstractseries.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkChartController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS = QtMocHelpers::stringData(
    "MAVLinkChartController",
    "QML.Element",
    "auto",
    "chartFieldsChanged",
    "",
    "rangeXMinChanged",
    "rangeXMaxChanged",
    "rangeYMinChanged",
    "rangeYMaxChanged",
    "rangeYIndexChanged",
    "rangeXIndexChanged",
    "_refreshSeries",
    "addSeries",
    "QGCMAVLinkMessageField*",
    "field",
    "QAbstractSeries*",
    "series",
    "delSeries",
    "controller",
    "MAVLinkInspectorController*",
    "chartFields",
    "rangeXMin",
    "rangeXMax",
    "rangeYMin",
    "rangeYMax",
    "chartIndex",
    "rangeYIndex",
    "rangeXIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[23];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[19];
    char stringdata4[1];
    char stringdata5[17];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[17];
    char stringdata9[19];
    char stringdata10[19];
    char stringdata11[15];
    char stringdata12[10];
    char stringdata13[24];
    char stringdata14[6];
    char stringdata15[17];
    char stringdata16[7];
    char stringdata17[10];
    char stringdata18[11];
    char stringdata19[28];
    char stringdata20[12];
    char stringdata21[10];
    char stringdata22[10];
    char stringdata23[10];
    char stringdata24[10];
    char stringdata25[11];
    char stringdata26[12];
    char stringdata27[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS_t qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "MAVLinkChartController"
        QT_MOC_LITERAL(23, 11),  // "QML.Element"
        QT_MOC_LITERAL(35, 4),  // "auto"
        QT_MOC_LITERAL(40, 18),  // "chartFieldsChanged"
        QT_MOC_LITERAL(59, 0),  // ""
        QT_MOC_LITERAL(60, 16),  // "rangeXMinChanged"
        QT_MOC_LITERAL(77, 16),  // "rangeXMaxChanged"
        QT_MOC_LITERAL(94, 16),  // "rangeYMinChanged"
        QT_MOC_LITERAL(111, 16),  // "rangeYMaxChanged"
        QT_MOC_LITERAL(128, 18),  // "rangeYIndexChanged"
        QT_MOC_LITERAL(147, 18),  // "rangeXIndexChanged"
        QT_MOC_LITERAL(166, 14),  // "_refreshSeries"
        QT_MOC_LITERAL(181, 9),  // "addSeries"
        QT_MOC_LITERAL(191, 23),  // "QGCMAVLinkMessageField*"
        QT_MOC_LITERAL(215, 5),  // "field"
        QT_MOC_LITERAL(221, 16),  // "QAbstractSeries*"
        QT_MOC_LITERAL(238, 6),  // "series"
        QT_MOC_LITERAL(245, 9),  // "delSeries"
        QT_MOC_LITERAL(255, 10),  // "controller"
        QT_MOC_LITERAL(266, 27),  // "MAVLinkInspectorController*"
        QT_MOC_LITERAL(294, 11),  // "chartFields"
        QT_MOC_LITERAL(306, 9),  // "rangeXMin"
        QT_MOC_LITERAL(316, 9),  // "rangeXMax"
        QT_MOC_LITERAL(326, 9),  // "rangeYMin"
        QT_MOC_LITERAL(336, 9),  // "rangeYMax"
        QT_MOC_LITERAL(346, 10),  // "chartIndex"
        QT_MOC_LITERAL(357, 11),  // "rangeYIndex"
        QT_MOC_LITERAL(369, 11)   // "rangeXIndex"
    },
    "MAVLinkChartController",
    "QML.Element",
    "auto",
    "chartFieldsChanged",
    "",
    "rangeXMinChanged",
    "rangeXMaxChanged",
    "rangeYMinChanged",
    "rangeYMaxChanged",
    "rangeYIndexChanged",
    "rangeXIndexChanged",
    "_refreshSeries",
    "addSeries",
    "QGCMAVLinkMessageField*",
    "field",
    "QAbstractSeries*",
    "series",
    "delSeries",
    "controller",
    "MAVLinkInspectorController*",
    "chartFields",
    "rangeXMin",
    "rangeXMax",
    "rangeYMin",
    "rangeYMax",
    "chartIndex",
    "rangeYIndex",
    "rangeXIndex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkChartControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      11,   16, // methods
       8,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   82,    4, 0x06,    9 /* Public */,
       5,    0,   83,    4, 0x06,   10 /* Public */,
       6,    0,   84,    4, 0x06,   11 /* Public */,
       7,    0,   85,    4, 0x06,   12 /* Public */,
       8,    0,   86,    4, 0x06,   13 /* Public */,
       9,    0,   87,    4, 0x06,   14 /* Public */,
      10,    0,   88,    4, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   89,    4, 0x08,   16 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    2,   90,    4, 0x02,   17 /* Public */,
      17,    1,   95,    4, 0x02,   20 /* Public */,
      18,    0,   98,    4, 0x02,   22 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    0x80000000 | 19,

 // properties: name, type, flags
      20, QMetaType::QVariantList, 0x00015001, uint(0), 0,
      21, QMetaType::QDateTime, 0x00015001, uint(1), 0,
      22, QMetaType::QDateTime, 0x00015001, uint(2), 0,
      23, QMetaType::QReal, 0x00015001, uint(3), 0,
      24, QMetaType::QReal, 0x00015001, uint(4), 0,
      25, QMetaType::Int, 0x00015401, uint(-1), 0,
      26, QMetaType::UInt, 0x00015103, uint(5), 0,
      27, QMetaType::UInt, 0x00015103, uint(6), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkChartController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkChartControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'chartFields'
        QVariantList,
        // property 'rangeXMin'
        QDateTime,
        // property 'rangeXMax'
        QDateTime,
        // property 'rangeYMin'
        qreal,
        // property 'rangeYMax'
        qreal,
        // property 'chartIndex'
        int,
        // property 'rangeYIndex'
        quint32,
        // property 'rangeXIndex'
        quint32,
        // Q_OBJECT / Q_GADGET
        MAVLinkChartController,
        // method 'chartFieldsChanged'
        void,
        // method 'rangeXMinChanged'
        void,
        // method 'rangeXMaxChanged'
        void,
        // method 'rangeYMinChanged'
        void,
        // method 'rangeYMaxChanged'
        void,
        // method 'rangeYIndexChanged'
        void,
        // method 'rangeXIndexChanged'
        void,
        // method '_refreshSeries'
        void,
        // method 'addSeries'
        void,
        QGCMAVLinkMessageField *,
        QAbstractSeries *,
        // method 'delSeries'
        void,
        QGCMAVLinkMessageField *,
        // method 'controller'
        MAVLinkInspectorController *
    >,
    nullptr
} };

void MAVLinkChartController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->chartFieldsChanged(); break;
        case 1: _t->rangeXMinChanged(); break;
        case 2: _t->rangeXMaxChanged(); break;
        case 3: _t->rangeYMinChanged(); break;
        case 4: _t->rangeYMaxChanged(); break;
        case 5: _t->rangeYIndexChanged(); break;
        case 6: _t->rangeXIndexChanged(); break;
        case 7: _t->_refreshSeries(); break;
        case 8: _t->addSeries((*reinterpret_cast< std::add_pointer_t<QGCMAVLinkMessageField*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractSeries*>>(_a[2]))); break;
        case 9: _t->delSeries((*reinterpret_cast< std::add_pointer_t<QGCMAVLinkMessageField*>>(_a[1]))); break;
        case 10: { MAVLinkInspectorController* _r = _t->controller();
            if (_a[0]) *reinterpret_cast< MAVLinkInspectorController**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::chartFieldsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeXMinChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeXMaxChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeYMinChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeYMaxChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeYIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MAVLinkChartController::*)();
            if (_t _q_method = &MAVLinkChartController::rangeXIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->chartFields(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->rangeXMin(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->rangeXMax(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->rangeYMin(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->rangeYMax(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->chartIndex(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->rangeYIndex(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->rangeXIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MAVLinkChartController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setRangeYIndex(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setRangeXIndex(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MAVLinkChartController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkChartController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkChartControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkChartController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkChartController::chartFieldsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkChartController::rangeXMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkChartController::rangeXMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkChartController::rangeYMinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkChartController::rangeYMaxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkChartController::rangeYIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MAVLinkChartController::rangeXIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
