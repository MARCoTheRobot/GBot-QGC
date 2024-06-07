/****************************************************************************
** Meta object code from reading C++ file 'UnitsSettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/UnitsSettings.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UnitsSettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUnitsSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUnitsSettingsENDCLASS = QtMocHelpers::stringData(
    "UnitsSettings",
    "horizontalDistanceUnits",
    "Fact*",
    "verticalDistanceUnits",
    "areaUnits",
    "speedUnits",
    "temperatureUnits",
    "weightUnits",
    "HorizontalDistanceUnits",
    "HorizontalDistanceUnitsFeet",
    "HorizontalDistanceUnitsMeters",
    "VerticalDistanceUnits",
    "VerticalDistanceUnitsFeet",
    "VerticalDistanceUnitsMeters",
    "AreaUnits",
    "AreaUnitsSquareFeet",
    "AreaUnitsSquareMeters",
    "AreaUnitsSquareKilometers",
    "AreaUnitsHectares",
    "AreaUnitsAcres",
    "AreaUnitsSquareMiles",
    "SpeedUnits",
    "SpeedUnitsFeetPerSecond",
    "SpeedUnitsMetersPerSecond",
    "SpeedUnitsMilesPerHour",
    "SpeedUnitsKilometersPerHour",
    "SpeedUnitsKnots",
    "TemperatureUnits",
    "TemperatureUnitsCelsius",
    "TemperatureUnitsFarenheit",
    "WeightUnits",
    "WeightUnitsGrams",
    "WeightUnitsKg",
    "WeightUnitsOz",
    "WeightUnitsLbs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUnitsSettingsENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[14];
    char stringdata1[24];
    char stringdata2[6];
    char stringdata3[22];
    char stringdata4[10];
    char stringdata5[11];
    char stringdata6[17];
    char stringdata7[12];
    char stringdata8[24];
    char stringdata9[28];
    char stringdata10[30];
    char stringdata11[22];
    char stringdata12[26];
    char stringdata13[28];
    char stringdata14[10];
    char stringdata15[20];
    char stringdata16[22];
    char stringdata17[26];
    char stringdata18[18];
    char stringdata19[15];
    char stringdata20[21];
    char stringdata21[11];
    char stringdata22[24];
    char stringdata23[26];
    char stringdata24[23];
    char stringdata25[28];
    char stringdata26[16];
    char stringdata27[17];
    char stringdata28[24];
    char stringdata29[26];
    char stringdata30[12];
    char stringdata31[17];
    char stringdata32[14];
    char stringdata33[14];
    char stringdata34[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUnitsSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUnitsSettingsENDCLASS_t qt_meta_stringdata_CLASSUnitsSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "UnitsSettings"
        QT_MOC_LITERAL(14, 23),  // "horizontalDistanceUnits"
        QT_MOC_LITERAL(38, 5),  // "Fact*"
        QT_MOC_LITERAL(44, 21),  // "verticalDistanceUnits"
        QT_MOC_LITERAL(66, 9),  // "areaUnits"
        QT_MOC_LITERAL(76, 10),  // "speedUnits"
        QT_MOC_LITERAL(87, 16),  // "temperatureUnits"
        QT_MOC_LITERAL(104, 11),  // "weightUnits"
        QT_MOC_LITERAL(116, 23),  // "HorizontalDistanceUnits"
        QT_MOC_LITERAL(140, 27),  // "HorizontalDistanceUnitsFeet"
        QT_MOC_LITERAL(168, 29),  // "HorizontalDistanceUnitsMeters"
        QT_MOC_LITERAL(198, 21),  // "VerticalDistanceUnits"
        QT_MOC_LITERAL(220, 25),  // "VerticalDistanceUnitsFeet"
        QT_MOC_LITERAL(246, 27),  // "VerticalDistanceUnitsMeters"
        QT_MOC_LITERAL(274, 9),  // "AreaUnits"
        QT_MOC_LITERAL(284, 19),  // "AreaUnitsSquareFeet"
        QT_MOC_LITERAL(304, 21),  // "AreaUnitsSquareMeters"
        QT_MOC_LITERAL(326, 25),  // "AreaUnitsSquareKilometers"
        QT_MOC_LITERAL(352, 17),  // "AreaUnitsHectares"
        QT_MOC_LITERAL(370, 14),  // "AreaUnitsAcres"
        QT_MOC_LITERAL(385, 20),  // "AreaUnitsSquareMiles"
        QT_MOC_LITERAL(406, 10),  // "SpeedUnits"
        QT_MOC_LITERAL(417, 23),  // "SpeedUnitsFeetPerSecond"
        QT_MOC_LITERAL(441, 25),  // "SpeedUnitsMetersPerSecond"
        QT_MOC_LITERAL(467, 22),  // "SpeedUnitsMilesPerHour"
        QT_MOC_LITERAL(490, 27),  // "SpeedUnitsKilometersPerHour"
        QT_MOC_LITERAL(518, 15),  // "SpeedUnitsKnots"
        QT_MOC_LITERAL(534, 16),  // "TemperatureUnits"
        QT_MOC_LITERAL(551, 23),  // "TemperatureUnitsCelsius"
        QT_MOC_LITERAL(575, 25),  // "TemperatureUnitsFarenheit"
        QT_MOC_LITERAL(601, 11),  // "WeightUnits"
        QT_MOC_LITERAL(613, 16),  // "WeightUnitsGrams"
        QT_MOC_LITERAL(630, 13),  // "WeightUnitsKg"
        QT_MOC_LITERAL(644, 13),  // "WeightUnitsOz"
        QT_MOC_LITERAL(658, 14)   // "WeightUnitsLbs"
    },
    "UnitsSettings",
    "horizontalDistanceUnits",
    "Fact*",
    "verticalDistanceUnits",
    "areaUnits",
    "speedUnits",
    "temperatureUnits",
    "weightUnits",
    "HorizontalDistanceUnits",
    "HorizontalDistanceUnitsFeet",
    "HorizontalDistanceUnitsMeters",
    "VerticalDistanceUnits",
    "VerticalDistanceUnitsFeet",
    "VerticalDistanceUnitsMeters",
    "AreaUnits",
    "AreaUnitsSquareFeet",
    "AreaUnitsSquareMeters",
    "AreaUnitsSquareKilometers",
    "AreaUnitsHectares",
    "AreaUnitsAcres",
    "AreaUnitsSquareMiles",
    "SpeedUnits",
    "SpeedUnitsFeetPerSecond",
    "SpeedUnitsMetersPerSecond",
    "SpeedUnitsMilesPerHour",
    "SpeedUnitsKilometersPerHour",
    "SpeedUnitsKnots",
    "TemperatureUnits",
    "TemperatureUnitsCelsius",
    "TemperatureUnitsFarenheit",
    "WeightUnits",
    "WeightUnitsGrams",
    "WeightUnitsKg",
    "WeightUnitsOz",
    "WeightUnitsLbs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUnitsSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       6,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       5, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       7, 0x80000000 | 2, 0x00015409, uint(-1), 0,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    2,   74,
      11,   11, 0x0,    2,   78,
      14,   14, 0x0,    6,   82,
      21,   21, 0x0,    5,   94,
      27,   27, 0x0,    2,  104,
      30,   30, 0x0,    4,  108,

 // enum data: key, value
       9, uint(UnitsSettings::HorizontalDistanceUnitsFeet),
      10, uint(UnitsSettings::HorizontalDistanceUnitsMeters),
      12, uint(UnitsSettings::VerticalDistanceUnitsFeet),
      13, uint(UnitsSettings::VerticalDistanceUnitsMeters),
      15, uint(UnitsSettings::AreaUnitsSquareFeet),
      16, uint(UnitsSettings::AreaUnitsSquareMeters),
      17, uint(UnitsSettings::AreaUnitsSquareKilometers),
      18, uint(UnitsSettings::AreaUnitsHectares),
      19, uint(UnitsSettings::AreaUnitsAcres),
      20, uint(UnitsSettings::AreaUnitsSquareMiles),
      22, uint(UnitsSettings::SpeedUnitsFeetPerSecond),
      23, uint(UnitsSettings::SpeedUnitsMetersPerSecond),
      24, uint(UnitsSettings::SpeedUnitsMilesPerHour),
      25, uint(UnitsSettings::SpeedUnitsKilometersPerHour),
      26, uint(UnitsSettings::SpeedUnitsKnots),
      28, uint(UnitsSettings::TemperatureUnitsCelsius),
      29, uint(UnitsSettings::TemperatureUnitsFarenheit),
      31, uint(UnitsSettings::WeightUnitsGrams),
      32, uint(UnitsSettings::WeightUnitsKg),
      33, uint(UnitsSettings::WeightUnitsOz),
      34, uint(UnitsSettings::WeightUnitsLbs),

       0        // eod
};

Q_CONSTINIT const QMetaObject UnitsSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsGroup::staticMetaObject>(),
    qt_meta_stringdata_CLASSUnitsSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUnitsSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUnitsSettingsENDCLASS_t,
        // property 'horizontalDistanceUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'verticalDistanceUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'areaUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'speedUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'temperatureUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'weightUnits'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // enum 'HorizontalDistanceUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::HorizontalDistanceUnits, std::true_type>,
        // enum 'VerticalDistanceUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::VerticalDistanceUnits, std::true_type>,
        // enum 'AreaUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::AreaUnits, std::true_type>,
        // enum 'SpeedUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::SpeedUnits, std::true_type>,
        // enum 'TemperatureUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::TemperatureUnits, std::true_type>,
        // enum 'WeightUnits'
        QtPrivate::TypeAndForceComplete<UnitsSettings::WeightUnits, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UnitsSettings, std::true_type>
    >,
    nullptr
} };

void UnitsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UnitsSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->horizontalDistanceUnits(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->verticalDistanceUnits(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->areaUnits(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->speedUnits(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->temperatureUnits(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->weightUnits(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *UnitsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUnitsSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int UnitsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
