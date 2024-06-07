/****************************************************************************
** Meta object code from reading C++ file 'RallyPointController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/RallyPointController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RallyPointController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRallyPointControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSRallyPointControllerENDCLASS = QtMocHelpers::stringData(
    "RallyPointController",
    "currentRallyPointChanged",
    "",
    "rallyPoint",
    "loadComplete",
    "_managerLoadComplete",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_setFirstPointCurrent",
    "_updateContainsItems",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "addPoint",
    "QGeoCoordinate",
    "point",
    "removePoint",
    "points",
    "QmlObjectListModel*",
    "editorQml",
    "currentRallyPoint"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRallyPointControllerENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[21];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[21];
    char stringdata6[21];
    char stringdata7[6];
    char stringdata8[26];
    char stringdata9[22];
    char stringdata10[21];
    char stringdata11[23];
    char stringdata12[9];
    char stringdata13[15];
    char stringdata14[9];
    char stringdata15[15];
    char stringdata16[6];
    char stringdata17[12];
    char stringdata18[7];
    char stringdata19[20];
    char stringdata20[10];
    char stringdata21[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRallyPointControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRallyPointControllerENDCLASS_t qt_meta_stringdata_CLASSRallyPointControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "RallyPointController"
        QT_MOC_LITERAL(21, 24),  // "currentRallyPointChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 10),  // "rallyPoint"
        QT_MOC_LITERAL(58, 12),  // "loadComplete"
        QT_MOC_LITERAL(71, 20),  // "_managerLoadComplete"
        QT_MOC_LITERAL(92, 20),  // "_managerSendComplete"
        QT_MOC_LITERAL(113, 5),  // "error"
        QT_MOC_LITERAL(119, 25),  // "_managerRemoveAllComplete"
        QT_MOC_LITERAL(145, 21),  // "_setFirstPointCurrent"
        QT_MOC_LITERAL(167, 20),  // "_updateContainsItems"
        QT_MOC_LITERAL(188, 22),  // "_managerVehicleChanged"
        QT_MOC_LITERAL(211, 8),  // "Vehicle*"
        QT_MOC_LITERAL(220, 14),  // "managerVehicle"
        QT_MOC_LITERAL(235, 8),  // "addPoint"
        QT_MOC_LITERAL(244, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(259, 5),  // "point"
        QT_MOC_LITERAL(265, 11),  // "removePoint"
        QT_MOC_LITERAL(277, 6),  // "points"
        QT_MOC_LITERAL(284, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(304, 9),  // "editorQml"
        QT_MOC_LITERAL(314, 17)   // "currentRallyPoint"
    },
    "RallyPointController",
    "currentRallyPointChanged",
    "",
    "rallyPoint",
    "loadComplete",
    "_managerLoadComplete",
    "_managerSendComplete",
    "error",
    "_managerRemoveAllComplete",
    "_setFirstPointCurrent",
    "_updateContainsItems",
    "_managerVehicleChanged",
    "Vehicle*",
    "managerVehicle",
    "addPoint",
    "QGeoCoordinate",
    "point",
    "removePoint",
    "points",
    "QmlObjectListModel*",
    "editorQml",
    "currentRallyPoint"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRallyPointControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    4 /* Public */,
       4,    0,   77,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   78,    2, 0x08,    7 /* Private */,
       6,    1,   79,    2, 0x08,    8 /* Private */,
       8,    1,   82,    2, 0x08,   10 /* Private */,
       9,    0,   85,    2, 0x08,   12 /* Private */,
      10,    0,   86,    2, 0x08,   13 /* Private */,
      11,    1,   87,    2, 0x08,   14 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   90,    2, 0x02,   16 /* Public */,
      17,    1,   93,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x00015409, uint(-1), 0,
      20, QMetaType::QString, 0x00015401, uint(-1), 0,
      21, QMetaType::QObjectStar, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject RallyPointController::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanElementController::staticMetaObject>(),
    qt_meta_stringdata_CLASSRallyPointControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRallyPointControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRallyPointControllerENDCLASS_t,
        // property 'points'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'editorQml'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentRallyPoint'
        QtPrivate::TypeAndForceComplete<QObject*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RallyPointController, std::true_type>,
        // method 'currentRallyPointChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'loadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerLoadComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerSendComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_managerRemoveAllComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setFirstPointCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateContainsItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_managerVehicleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'addPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'removePoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void RallyPointController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RallyPointController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentRallyPointChanged((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 1: _t->loadComplete(); break;
        case 2: _t->_managerLoadComplete(); break;
        case 3: _t->_managerSendComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->_managerRemoveAllComplete((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->_setFirstPointCurrent(); break;
        case 6: _t->_updateContainsItems(); break;
        case 7: _t->_managerVehicleChanged((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1]))); break;
        case 8: _t->addPoint((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 9: _t->removePoint((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RallyPointController::*)(QObject * );
            if (_t _q_method = &RallyPointController::currentRallyPointChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RallyPointController::*)();
            if (_t _q_method = &RallyPointController::loadComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RallyPointController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->points(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->editorQml(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->currentRallyPoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RallyPointController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCurrentRallyPoint(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *RallyPointController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RallyPointController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRallyPointControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int RallyPointController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RallyPointController::currentRallyPointChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RallyPointController::loadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
