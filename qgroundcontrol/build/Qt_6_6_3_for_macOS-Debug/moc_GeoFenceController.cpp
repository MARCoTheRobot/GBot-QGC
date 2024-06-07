/****************************************************************************
** Meta object code from reading C++ file 'GeoFenceController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/GeoFenceController.h"
#include "QGCFencePolygon.h"
#include "QGCFenceCircle.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoFenceController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS = QtMocHelpers::stringData(
    "GeoFenceController",
    "breachReturnPointChanged",
    "",
    "QGeoCoordinate",
    "breachReturnPoint",
    "editorQmlChanged",
    "editorQml",
    "loadComplete",
    "paramCircularFenceChanged",
    "_polygonDirtyChanged",
    "dirty",
    "_setDirty",
    "_setFenceFromManager",
    "QList<QGCFencePolygon>",
    "polygons",
    "QList<QGCFenceCircle>",
    "circles",
    "_setReturnPointFromManager",
    "_managerLoadComplete",
    "_updateContainsItems",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_parametersReady",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "addInclusionPolygon",
    "topLeft",
    "bottomRight",
    "addInclusionCircle",
    "deletePolygon",
    "index",
    "deleteCircle",
    "clearAllInteractive",
    "QmlObjectListModel*",
    "breachReturnAltitude",
    "Fact*",
    "paramCircularFence"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[19];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[17];
    char stringdata6[10];
    char stringdata7[13];
    char stringdata8[26];
    char stringdata9[21];
    char stringdata10[6];
    char stringdata11[10];
    char stringdata12[21];
    char stringdata13[23];
    char stringdata14[9];
    char stringdata15[22];
    char stringdata16[8];
    char stringdata17[27];
    char stringdata18[21];
    char stringdata19[21];
    char stringdata20[21];
    char stringdata21[6];
    char stringdata22[26];
    char stringdata23[17];
    char stringdata24[23];
    char stringdata25[9];
    char stringdata26[15];
    char stringdata27[20];
    char stringdata28[8];
    char stringdata29[12];
    char stringdata30[19];
    char stringdata31[14];
    char stringdata32[6];
    char stringdata33[13];
    char stringdata34[20];
    char stringdata35[20];
    char stringdata36[21];
    char stringdata37[6];
    char stringdata38[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS_t qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "GeoFenceController"
        QT_MOC_LITERAL(19, 24),  // "breachReturnPointChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(60, 17),  // "breachReturnPoint"
        QT_MOC_LITERAL(78, 16),  // "editorQmlChanged"
        QT_MOC_LITERAL(95, 9),  // "editorQml"
        QT_MOC_LITERAL(105, 12),  // "loadComplete"
        QT_MOC_LITERAL(118, 25),  // "paramCircularFenceChanged"
        QT_MOC_LITERAL(144, 20),  // "_polygonDirtyChanged"
        QT_MOC_LITERAL(165, 5),  // "dirty"
        QT_MOC_LITERAL(171, 9),  // "_setDirty"
        QT_MOC_LITERAL(181, 20),  // "_setFenceFromManager"
        QT_MOC_LITERAL(202, 22),  // "QList<QGCFencePolygon>"
        QT_MOC_LITERAL(225, 8),  // "polygons"
        QT_MOC_LITERAL(234, 21),  // "QList<QGCFenceCircle>"
        QT_MOC_LITERAL(256, 7),  // "circles"
        QT_MOC_LITERAL(264, 26),  // "_setReturnPointFromManager"
        QT_MOC_LITERAL(291, 20),  // "_managerLoadComplete"
        QT_MOC_LITERAL(312, 20),  // "_updateContainsItems"
        QT_MOC_LITERAL(333, 20),  // "_managerSendComplete"
        QT_MOC_LITERAL(354, 5),  // "error"
        QT_MOC_LITERAL(360, 25),  // "_managerRemoveAllComplete"
        QT_MOC_LITERAL(386, 16),  // "_parametersReady"
        QT_MOC_LITERAL(403, 22),  // "_managerVehicleChanged"
        QT_MOC_LITERAL(426, 8),  // "Vehicle*"
        QT_MOC_LITERAL(435, 14),  // "managerVehicle"
        QT_MOC_LITERAL(450, 19),  // "addInclusionPolygon"
        QT_MOC_LITERAL(470, 7),  // "topLeft"
        QT_MOC_LITERAL(478, 11),  // "bottomRight"
        QT_MOC_LITERAL(490, 18),  // "addInclusionCircle"
        QT_MOC_LITERAL(509, 13),  // "deletePolygon"
        QT_MOC_LITERAL(523, 5),  // "index"
        QT_MOC_LITERAL(529, 12),  // "deleteCircle"
        QT_MOC_LITERAL(542, 19),  // "clearAllInteractive"
        QT_MOC_LITERAL(562, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(582, 20),  // "breachReturnAltitude"
        QT_MOC_LITERAL(603, 5),  // "Fact*"
        QT_MOC_LITERAL(609, 18)   // "paramCircularFence"
    },
    "GeoFenceController",
    "breachReturnPointChanged",
    "",
    "QGeoCoordinate",
    "breachReturnPoint",
    "editorQmlChanged",
    "editorQml",
    "loadComplete",
    "paramCircularFenceChanged",
    "_polygonDirtyChanged",
    "dirty",
    "_setDirty",
    "_setFenceFromManager",
    "QList<QGCFencePolygon>",
    "polygons",
    "QList<QGCFenceCircle>",
    "circles",
    "_setReturnPointFromManager",
    "_managerLoadComplete",
    "_updateContainsItems",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_parametersReady",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "addInclusionPolygon",
    "topLeft",
    "bottomRight",
    "addInclusionCircle",
    "deletePolygon",
    "index",
    "deleteCircle",
    "clearAllInteractive",
    "QmlObjectListModel*",
    "breachReturnAltitude",
    "Fact*",
    "paramCircularFence"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGeoFenceControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       5,  177, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  128,    2, 0x06,    6 /* Public */,
       5,    1,  131,    2, 0x06,    8 /* Public */,
       7,    0,  134,    2, 0x06,   10 /* Public */,
       8,    0,  135,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  136,    2, 0x08,   12 /* Private */,
      11,    0,  139,    2, 0x08,   14 /* Private */,
      12,    2,  140,    2, 0x08,   15 /* Private */,
      17,    1,  145,    2, 0x08,   18 /* Private */,
      18,    0,  148,    2, 0x08,   20 /* Private */,
      19,    0,  149,    2, 0x08,   21 /* Private */,
      20,    1,  150,    2, 0x08,   22 /* Private */,
      22,    1,  153,    2, 0x08,   24 /* Private */,
      23,    0,  156,    2, 0x08,   26 /* Private */,
      24,    1,  157,    2, 0x08,   27 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      27,    2,  160,    2, 0x02,   29 /* Public */,
      30,    2,  165,    2, 0x02,   32 /* Public */,
      31,    1,  170,    2, 0x02,   35 /* Public */,
      33,    1,  173,    2, 0x02,   37 /* Public */,
      34,    0,  176,    2, 0x02,   39 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   28,   29,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   28,   29,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 35, 0x00015409, uint(-1), 0,
      16, 0x80000000 | 35, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      36, 0x80000000 | 37, 0x00015409, uint(-1), 0,
      38, QMetaType::Double, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject GeoFenceController::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanElementController::staticMetaObject>(),
    qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGeoFenceControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS_t,
        // property 'polygons'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'circles'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'breachReturnPoint'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'breachReturnAltitude'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'paramCircularFence'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GeoFenceController, std::true_type>,
        // method 'breachReturnPointChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'editorQmlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'loadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paramCircularFenceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_polygonDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setFenceFromManager'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QGCFencePolygon> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QGCFenceCircle> &, std::false_type>,
        // method '_setReturnPointFromManager'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method '_managerLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateContainsItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerSendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_managerRemoveAllComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_parametersReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'addInclusionPolygon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'addInclusionCircle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'deletePolygon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteCircle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clearAllInteractive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GeoFenceController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->breachReturnPointChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 1: _t->editorQmlChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->loadComplete(); break;
        case 3: _t->paramCircularFenceChanged(); break;
        case 4: _t->_polygonDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_setDirty(); break;
        case 6: _t->_setFenceFromManager((*reinterpret_cast< std::add_pointer_t<QList<QGCFencePolygon>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QGCFenceCircle>>>(_a[2]))); break;
        case 7: _t->_setReturnPointFromManager((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 8: _t->_managerLoadComplete(); break;
        case 9: _t->_updateContainsItems(); break;
        case 10: _t->_managerSendComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->_managerRemoveAllComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->_parametersReady(); break;
        case 13: _t->_managerVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 14: _t->addInclusionPolygon((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2]))); break;
        case 15: _t->addInclusionCircle((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2]))); break;
        case 16: _t->deletePolygon((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->deleteCircle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->clearAllInteractive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeoFenceController::*)(QGeoCoordinate );
            if (_t _q_method = &GeoFenceController::breachReturnPointChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)(QString );
            if (_t _q_method = &GeoFenceController::editorQmlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)();
            if (_t _q_method = &GeoFenceController::loadComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GeoFenceController::*)();
            if (_t _q_method = &GeoFenceController::paramCircularFenceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->polygons(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->circles(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->breachReturnPoint(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->breachReturnAltitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->paramCircularFence(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GeoFenceController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setBreachReturnPoint(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *GeoFenceController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoFenceController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGeoFenceControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int GeoFenceController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GeoFenceController::breachReturnPointChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeoFenceController::editorQmlChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GeoFenceController::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GeoFenceController::paramCircularFenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
