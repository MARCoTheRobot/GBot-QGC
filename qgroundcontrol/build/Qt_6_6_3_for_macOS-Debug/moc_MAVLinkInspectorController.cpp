/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkInspectorController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MAVLinkInspectorController.h"
#include "LinkInterface.h"
#include "Vehicle.h"
#include "MAVLinkSystem.h"
#include "MAVLinkChartController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkInspectorController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS = QtMocHelpers::stringData(
    "MAVLinkInspectorController",
    "QML.Element",
    "auto",
    "systemsChanged",
    "",
    "chartsChanged",
    "activeSystemChanged",
    "timeScalesChanged",
    "rangeListChanged",
    "_receiveMessage",
    "LinkInterface*",
    "link",
    "mavlink_message_t",
    "message",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleRemoved",
    "_setActiveVehicle",
    "_refreshFrequency",
    "createChart",
    "MAVLinkChartController*",
    "deleteChart",
    "chart",
    "setActiveSystem",
    "systemId",
    "setMessageInterval",
    "int32_t",
    "rate",
    "systemNames",
    "systems",
    "QmlObjectListModel*",
    "charts",
    "activeSystem",
    "QGCMAVLinkSystem*",
    "timeScales",
    "rangeList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[27];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[15];
    char stringdata4[1];
    char stringdata5[14];
    char stringdata6[20];
    char stringdata7[18];
    char stringdata8[17];
    char stringdata9[16];
    char stringdata10[15];
    char stringdata11[5];
    char stringdata12[18];
    char stringdata13[8];
    char stringdata14[14];
    char stringdata15[9];
    char stringdata16[8];
    char stringdata17[16];
    char stringdata18[18];
    char stringdata19[18];
    char stringdata20[12];
    char stringdata21[24];
    char stringdata22[12];
    char stringdata23[6];
    char stringdata24[16];
    char stringdata25[9];
    char stringdata26[19];
    char stringdata27[8];
    char stringdata28[5];
    char stringdata29[12];
    char stringdata30[8];
    char stringdata31[20];
    char stringdata32[7];
    char stringdata33[13];
    char stringdata34[18];
    char stringdata35[11];
    char stringdata36[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS_t qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "MAVLinkInspectorController"
        QT_MOC_LITERAL(27, 11),  // "QML.Element"
        QT_MOC_LITERAL(39, 4),  // "auto"
        QT_MOC_LITERAL(44, 14),  // "systemsChanged"
        QT_MOC_LITERAL(59, 0),  // ""
        QT_MOC_LITERAL(60, 13),  // "chartsChanged"
        QT_MOC_LITERAL(74, 19),  // "activeSystemChanged"
        QT_MOC_LITERAL(94, 17),  // "timeScalesChanged"
        QT_MOC_LITERAL(112, 16),  // "rangeListChanged"
        QT_MOC_LITERAL(129, 15),  // "_receiveMessage"
        QT_MOC_LITERAL(145, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(160, 4),  // "link"
        QT_MOC_LITERAL(165, 17),  // "mavlink_message_t"
        QT_MOC_LITERAL(183, 7),  // "message"
        QT_MOC_LITERAL(191, 13),  // "_vehicleAdded"
        QT_MOC_LITERAL(205, 8),  // "Vehicle*"
        QT_MOC_LITERAL(214, 7),  // "vehicle"
        QT_MOC_LITERAL(222, 15),  // "_vehicleRemoved"
        QT_MOC_LITERAL(238, 17),  // "_setActiveVehicle"
        QT_MOC_LITERAL(256, 17),  // "_refreshFrequency"
        QT_MOC_LITERAL(274, 11),  // "createChart"
        QT_MOC_LITERAL(286, 23),  // "MAVLinkChartController*"
        QT_MOC_LITERAL(310, 11),  // "deleteChart"
        QT_MOC_LITERAL(322, 5),  // "chart"
        QT_MOC_LITERAL(328, 15),  // "setActiveSystem"
        QT_MOC_LITERAL(344, 8),  // "systemId"
        QT_MOC_LITERAL(353, 18),  // "setMessageInterval"
        QT_MOC_LITERAL(372, 7),  // "int32_t"
        QT_MOC_LITERAL(380, 4),  // "rate"
        QT_MOC_LITERAL(385, 11),  // "systemNames"
        QT_MOC_LITERAL(397, 7),  // "systems"
        QT_MOC_LITERAL(405, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(425, 6),  // "charts"
        QT_MOC_LITERAL(432, 12),  // "activeSystem"
        QT_MOC_LITERAL(445, 17),  // "QGCMAVLinkSystem*"
        QT_MOC_LITERAL(463, 10),  // "timeScales"
        QT_MOC_LITERAL(474, 9)   // "rangeList"
    },
    "MAVLinkInspectorController",
    "QML.Element",
    "auto",
    "systemsChanged",
    "",
    "chartsChanged",
    "activeSystemChanged",
    "timeScalesChanged",
    "rangeListChanged",
    "_receiveMessage",
    "LinkInterface*",
    "link",
    "mavlink_message_t",
    "message",
    "_vehicleAdded",
    "Vehicle*",
    "vehicle",
    "_vehicleRemoved",
    "_setActiveVehicle",
    "_refreshFrequency",
    "createChart",
    "MAVLinkChartController*",
    "deleteChart",
    "chart",
    "setActiveSystem",
    "systemId",
    "setMessageInterval",
    "int32_t",
    "rate",
    "systemNames",
    "systems",
    "QmlObjectListModel*",
    "charts",
    "activeSystem",
    "QGCMAVLinkSystem*",
    "timeScales",
    "rangeList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMAVLinkInspectorControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
       6,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  100,    4, 0x06,    7 /* Public */,
       5,    0,  101,    4, 0x06,    8 /* Public */,
       6,    0,  102,    4, 0x06,    9 /* Public */,
       7,    0,  103,    4, 0x06,   10 /* Public */,
       8,    0,  104,    4, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,  105,    4, 0x08,   12 /* Private */,
      14,    1,  110,    4, 0x08,   15 /* Private */,
      17,    1,  113,    4, 0x08,   17 /* Private */,
      18,    1,  116,    4, 0x08,   19 /* Private */,
      19,    0,  119,    4, 0x08,   21 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  120,    4, 0x02,   22 /* Public */,
      22,    1,  121,    4, 0x02,   23 /* Public */,
      24,    1,  124,    4, 0x02,   25 /* Public */,
      26,    1,  127,    4, 0x02,   27 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 21,
    QMetaType::Void, 0x80000000 | 21,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, 0x80000000 | 27,   28,

 // properties: name, type, flags
      29, QMetaType::QStringList, 0x00015001, uint(0), 0,
      30, 0x80000000 | 31, 0x00015009, uint(0), 0,
      32, 0x80000000 | 31, 0x00015009, uint(1), 0,
      33, 0x80000000 | 34, 0x00015009, uint(2), 0,
      35, QMetaType::QStringList, 0x00015001, uint(3), 0,
      36, QMetaType::QStringList, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MAVLinkInspectorController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMAVLinkInspectorControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'systemNames'
        QStringList,
        // property 'systems'
        QmlObjectListModel*,
        // property 'charts'
        QmlObjectListModel*,
        // property 'activeSystem'
        QGCMAVLinkSystem*,
        // property 'timeScales'
        QStringList,
        // property 'rangeList'
        QStringList,
        // Q_OBJECT / Q_GADGET
        MAVLinkInspectorController,
        // method 'systemsChanged'
        void,
        // method 'chartsChanged'
        void,
        // method 'activeSystemChanged'
        void,
        // method 'timeScalesChanged'
        void,
        // method 'rangeListChanged'
        void,
        // method '_receiveMessage'
        void,
        LinkInterface *,
        mavlink_message_t,
        // method '_vehicleAdded'
        void,
        Vehicle *,
        // method '_vehicleRemoved'
        void,
        Vehicle *,
        // method '_setActiveVehicle'
        void,
        Vehicle *,
        // method '_refreshFrequency'
        void,
        // method 'createChart'
        MAVLinkChartController *,
        // method 'deleteChart'
        void,
        MAVLinkChartController *,
        // method 'setActiveSystem'
        void,
        int,
        // method 'setMessageInterval'
        void,
        int32_t
    >,
    nullptr
} };

void MAVLinkInspectorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MAVLinkInspectorController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->systemsChanged(); break;
        case 1: _t->chartsChanged(); break;
        case 2: _t->activeSystemChanged(); break;
        case 3: _t->timeScalesChanged(); break;
        case 4: _t->rangeListChanged(); break;
        case 5: _t->_receiveMessage((*reinterpret_cast< std::add_pointer_t<LinkInterface*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<mavlink_message_t>>(_a[2]))); break;
        case 6: _t->_vehicleAdded((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 7: _t->_vehicleRemoved((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 8: _t->_setActiveVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 9: _t->_refreshFrequency(); break;
        case 10: { MAVLinkChartController* _r = _t->createChart();
            if (_a[0]) *reinterpret_cast< MAVLinkChartController**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->deleteChart((*reinterpret_cast< std::add_pointer_t<MAVLinkChartController*>>(_a[1]))); break;
        case 12: _t->setActiveSystem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->setMessageInterval((*reinterpret_cast< std::add_pointer_t<int32_t>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (_t _q_method = &MAVLinkInspectorController::systemsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (_t _q_method = &MAVLinkInspectorController::chartsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (_t _q_method = &MAVLinkInspectorController::activeSystemChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (_t _q_method = &MAVLinkInspectorController::timeScalesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MAVLinkInspectorController::*)();
            if (_t _q_method = &MAVLinkInspectorController::rangeListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MAVLinkInspectorController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->systemNames(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->systems(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->charts(); break;
        case 3: *reinterpret_cast< QGCMAVLinkSystem**>(_v) = _t->activeSystem(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->timeScales(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->rangeList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MAVLinkInspectorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkInspectorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMAVLinkInspectorControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkInspectorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkInspectorController::systemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkInspectorController::chartsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkInspectorController::activeSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkInspectorController::timeScalesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkInspectorController::rangeListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
