/****************************************************************************
** Meta object code from reading C++ file 'MissionCommandTree.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionCommandTree.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionCommandTree.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS = QtMocHelpers::stringData(
    "MissionCommandTree",
    "categoriesForVehicle",
    "",
    "Vehicle*",
    "vehicle",
    "getCommandsForCategory",
    "category",
    "showFlyThroughCommands"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[8];
    char stringdata5[23];
    char stringdata6[9];
    char stringdata7[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS_t qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "MissionCommandTree"
        QT_MOC_LITERAL(19, 20),  // "categoriesForVehicle"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 8),  // "Vehicle*"
        QT_MOC_LITERAL(50, 7),  // "vehicle"
        QT_MOC_LITERAL(58, 22),  // "getCommandsForCategory"
        QT_MOC_LITERAL(81, 8),  // "category"
        QT_MOC_LITERAL(90, 22)   // "showFlyThroughCommands"
    },
    "MissionCommandTree",
    "categoriesForVehicle",
    "",
    "Vehicle*",
    "vehicle",
    "getCommandsForCategory",
    "category",
    "showFlyThroughCommands"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionCommandTreeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x02,    1 /* Public */,
       5,    3,   29,    2, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::QVariantList, 0x80000000 | 3, QMetaType::QString, QMetaType::Bool,    4,    6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionCommandTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QGCTool::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionCommandTreeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionCommandTree, std::true_type>,
        // method 'categoriesForVehicle'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        // method 'getCommandsForCategory'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vehicle *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void MissionCommandTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MissionCommandTree *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->categoriesForVehicle((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantList _r = _t->getCommandsForCategory((*reinterpret_cast< std::add_pointer_t<Vehicle*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MissionCommandTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCommandTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionCommandTreeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MissionCommandTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}
QT_WARNING_POP
