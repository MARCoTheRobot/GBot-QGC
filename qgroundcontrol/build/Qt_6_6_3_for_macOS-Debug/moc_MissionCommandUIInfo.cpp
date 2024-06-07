/****************************************************************************
** Meta object code from reading C++ file 'MissionCommandUIInfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionCommandUIInfo.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionCommandUIInfo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS = QtMocHelpers::stringData(
    "MissionCmdParamInfo",
    "decimalPlaces",
    "defaultValue",
    "enumStrings",
    "enumValues",
    "label",
    "param",
    "units",
    "nanUnchanged",
    "min",
    "max"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[20];
    char stringdata1[14];
    char stringdata2[13];
    char stringdata3[12];
    char stringdata4[11];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[6];
    char stringdata8[13];
    char stringdata9[4];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS_t qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "MissionCmdParamInfo"
        QT_MOC_LITERAL(20, 13),  // "decimalPlaces"
        QT_MOC_LITERAL(34, 12),  // "defaultValue"
        QT_MOC_LITERAL(47, 11),  // "enumStrings"
        QT_MOC_LITERAL(59, 10),  // "enumValues"
        QT_MOC_LITERAL(70, 5),  // "label"
        QT_MOC_LITERAL(76, 5),  // "param"
        QT_MOC_LITERAL(82, 5),  // "units"
        QT_MOC_LITERAL(88, 12),  // "nanUnchanged"
        QT_MOC_LITERAL(101, 3),  // "min"
        QT_MOC_LITERAL(105, 3)   // "max"
    },
    "MissionCmdParamInfo",
    "decimalPlaces",
    "defaultValue",
    "enumStrings",
    "enumValues",
    "label",
    "param",
    "units",
    "nanUnchanged",
    "min",
    "max"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionCmdParamInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015401, uint(-1), 0,
       2, QMetaType::Double, 0x00015401, uint(-1), 0,
       3, QMetaType::QStringList, 0x00015401, uint(-1), 0,
       4, QMetaType::QVariantList, 0x00015401, uint(-1), 0,
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015401, uint(-1), 0,
       7, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::Double, 0x00015401, uint(-1), 0,
      10, QMetaType::Double, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionCmdParamInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionCmdParamInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS_t,
        // property 'decimalPlaces'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'defaultValue'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'enumStrings'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'enumValues'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'param'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'units'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'nanUnchanged'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'min'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'max'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionCmdParamInfo, std::true_type>
    >,
    nullptr
} };

void MissionCmdParamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionCmdParamInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->decimalPlaces(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->defaultValue(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->enumStrings(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->enumValues(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->param(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->units(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->nanUnchanged(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->min(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->max(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MissionCmdParamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCmdParamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionCmdParamInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionCmdParamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS = QtMocHelpers::stringData(
    "MissionCommandUIInfo",
    "category",
    "description",
    "friendlyEdit",
    "friendlyName",
    "rawName",
    "isStandaloneCoordinate",
    "specifiesCoordinate",
    "specifiesAltitudeOnly",
    "isLandCommand",
    "isTakeoffCommand",
    "isLoiterCommand",
    "command"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[21];
    char stringdata1[9];
    char stringdata2[12];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[8];
    char stringdata6[23];
    char stringdata7[20];
    char stringdata8[22];
    char stringdata9[14];
    char stringdata10[17];
    char stringdata11[16];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS_t qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "MissionCommandUIInfo"
        QT_MOC_LITERAL(21, 8),  // "category"
        QT_MOC_LITERAL(30, 11),  // "description"
        QT_MOC_LITERAL(42, 12),  // "friendlyEdit"
        QT_MOC_LITERAL(55, 12),  // "friendlyName"
        QT_MOC_LITERAL(68, 7),  // "rawName"
        QT_MOC_LITERAL(76, 22),  // "isStandaloneCoordinate"
        QT_MOC_LITERAL(99, 19),  // "specifiesCoordinate"
        QT_MOC_LITERAL(119, 21),  // "specifiesAltitudeOnly"
        QT_MOC_LITERAL(141, 13),  // "isLandCommand"
        QT_MOC_LITERAL(155, 16),  // "isTakeoffCommand"
        QT_MOC_LITERAL(172, 15),  // "isLoiterCommand"
        QT_MOC_LITERAL(188, 7)   // "command"
    },
    "MissionCommandUIInfo",
    "category",
    "description",
    "friendlyEdit",
    "friendlyName",
    "rawName",
    "isStandaloneCoordinate",
    "specifiesCoordinate",
    "specifiesAltitudeOnly",
    "isLandCommand",
    "isTakeoffCommand",
    "isLoiterCommand",
    "command"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMissionCommandUIInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, QMetaType::QString, 0x00015401, uint(-1), 0,
       3, QMetaType::Bool, 0x00015401, uint(-1), 0,
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::Bool, 0x00015401, uint(-1), 0,
       7, QMetaType::Bool, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015401, uint(-1), 0,
      10, QMetaType::Bool, 0x00015401, uint(-1), 0,
      11, QMetaType::Bool, 0x00015401, uint(-1), 0,
      12, QMetaType::Int, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MissionCommandUIInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMissionCommandUIInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS_t,
        // property 'category'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'friendlyEdit'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'friendlyName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rawName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isStandaloneCoordinate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'specifiesCoordinate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'specifiesAltitudeOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isLandCommand'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isTakeoffCommand'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isLoiterCommand'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'command'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MissionCommandUIInfo, std::true_type>
    >,
    nullptr
} };

void MissionCommandUIInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MissionCommandUIInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->friendlyEdit(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->friendlyName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->rawName(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStandaloneCoordinate(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->specifiesCoordinate(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitudeOnly(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isLandCommand(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isTakeoffCommand(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isLoiterCommand(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->intCommand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MissionCommandUIInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCommandUIInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMissionCommandUIInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionCommandUIInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
