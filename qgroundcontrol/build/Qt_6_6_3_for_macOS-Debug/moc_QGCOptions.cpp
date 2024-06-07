/****************************************************************************
** Meta object code from reading C++ file 'QGCOptions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/API/QGCOptions.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCOptions.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS = QtMocHelpers::stringData(
    "QGCFlyViewOptions",
    "guidedBarShowEmergencyStopChanged",
    "",
    "show",
    "guidedBarShowOrbitChanged",
    "guidedBarShowROIChanged",
    "showMultiVehicleList",
    "showInstrumentPanel",
    "showMapScale",
    "guidedBarShowEmergencyStop",
    "guidedBarShowOrbit",
    "guidedBarShowROI"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[18];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[26];
    char stringdata5[24];
    char stringdata6[21];
    char stringdata7[20];
    char stringdata8[13];
    char stringdata9[27];
    char stringdata10[19];
    char stringdata11[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS_t qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QGCFlyViewOptions"
        QT_MOC_LITERAL(18, 33),  // "guidedBarShowEmergencyStopCha..."
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 4),  // "show"
        QT_MOC_LITERAL(58, 25),  // "guidedBarShowOrbitChanged"
        QT_MOC_LITERAL(84, 23),  // "guidedBarShowROIChanged"
        QT_MOC_LITERAL(108, 20),  // "showMultiVehicleList"
        QT_MOC_LITERAL(129, 19),  // "showInstrumentPanel"
        QT_MOC_LITERAL(149, 12),  // "showMapScale"
        QT_MOC_LITERAL(162, 26),  // "guidedBarShowEmergencyStop"
        QT_MOC_LITERAL(189, 18),  // "guidedBarShowOrbit"
        QT_MOC_LITERAL(208, 16)   // "guidedBarShowROI"
    },
    "QGCFlyViewOptions",
    "guidedBarShowEmergencyStopChanged",
    "",
    "show",
    "guidedBarShowOrbitChanged",
    "guidedBarShowROIChanged",
    "showMultiVehicleList",
    "showInstrumentPanel",
    "showMapScale",
    "guidedBarShowEmergencyStop",
    "guidedBarShowOrbit",
    "guidedBarShowROI"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCFlyViewOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    7 /* Public */,
       4,    1,   35,    2, 0x06,    9 /* Public */,
       5,    1,   38,    2, 0x06,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00015401, uint(-1), 0,
       7, QMetaType::Bool, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015001, uint(0), 0,
      10, QMetaType::Bool, 0x00015001, uint(1), 0,
      11, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCFlyViewOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCFlyViewOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS_t,
        // property 'showMultiVehicleList'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showInstrumentPanel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showMapScale'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedBarShowEmergencyStop'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedBarShowOrbit'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedBarShowROI'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCFlyViewOptions, std::true_type>,
        // method 'guidedBarShowEmergencyStopChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'guidedBarShowOrbitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'guidedBarShowROIChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QGCFlyViewOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCFlyViewOptions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->guidedBarShowEmergencyStopChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->guidedBarShowOrbitChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->guidedBarShowROIChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (_t _q_method = &QGCFlyViewOptions::guidedBarShowEmergencyStopChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (_t _q_method = &QGCFlyViewOptions::guidedBarShowOrbitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCFlyViewOptions::*)(bool );
            if (_t _q_method = &QGCFlyViewOptions::guidedBarShowROIChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCFlyViewOptions *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showMultiVehicleList(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showInstrumentPanel(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showMapScale(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowEmergencyStop(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowOrbit(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->guidedBarShowROI(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCFlyViewOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFlyViewOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCFlyViewOptionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCFlyViewOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGCFlyViewOptions::guidedBarShowEmergencyStopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCFlyViewOptions::guidedBarShowOrbitChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCFlyViewOptions::guidedBarShowROIChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQGCOptionsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCOptionsENDCLASS = QtMocHelpers::stringData(
    "QGCOptions",
    "showSensorCalibrationCompassChanged",
    "",
    "show",
    "showSensorCalibrationGyroChanged",
    "showSensorCalibrationAccelChanged",
    "showSensorCalibrationLevelChanged",
    "showSensorCalibrationAirspeedChanged",
    "showFirmwareUpgradeChanged",
    "missionWaypointsOnlyChanged",
    "missionWaypointsOnly",
    "multiVehicleEnabledChanged",
    "multiVehicleEnabled",
    "allowJoystickSelectionChanged",
    "allow",
    "showOfflineMapExportChanged",
    "showOfflineMapImportChanged",
    "showMissionAbsoluteAltitudeChanged",
    "showSimpleMissionStartChanged",
    "devicePixelRatioChanged",
    "devicePixelDensityChanged",
    "combineSettingsAndSetup",
    "toolbarHeightMultiplier",
    "enablePlanViewSelector",
    "preFlightChecklistUrl",
    "showSensorCalibrationCompass",
    "showSensorCalibrationGyro",
    "showSensorCalibrationAccel",
    "showSensorCalibrationLevel",
    "showSensorCalibrationAirspeed",
    "sensorsHaveFixedOrientation",
    "wifiReliableForCalibration",
    "showFirmwareUpgrade",
    "firmwareUpgradeSingleURL",
    "showOfflineMapExport",
    "showOfflineMapImport",
    "useMobileFileDialog",
    "showMissionStatus",
    "guidedActionsRequireRCRSSI",
    "showMissionAbsoluteAltitude",
    "showSimpleMissionStart",
    "disableVehicleConnection",
    "devicePixelRatio",
    "devicePixelDensity",
    "checkFirmwareVersion",
    "showPX4LogTransferOptions",
    "enableSaveMainWindowPosition",
    "surveyBuiltInPresetNames",
    "allowJoystickSelection",
    "flyView",
    "QGCFlyViewOptions*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCOptionsENDCLASS_t {
    uint offsetsAndSizes[102];
    char stringdata0[11];
    char stringdata1[36];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[33];
    char stringdata5[34];
    char stringdata6[34];
    char stringdata7[37];
    char stringdata8[27];
    char stringdata9[28];
    char stringdata10[21];
    char stringdata11[27];
    char stringdata12[20];
    char stringdata13[30];
    char stringdata14[6];
    char stringdata15[28];
    char stringdata16[28];
    char stringdata17[35];
    char stringdata18[30];
    char stringdata19[24];
    char stringdata20[26];
    char stringdata21[24];
    char stringdata22[24];
    char stringdata23[23];
    char stringdata24[22];
    char stringdata25[29];
    char stringdata26[26];
    char stringdata27[27];
    char stringdata28[27];
    char stringdata29[30];
    char stringdata30[28];
    char stringdata31[27];
    char stringdata32[20];
    char stringdata33[25];
    char stringdata34[21];
    char stringdata35[21];
    char stringdata36[20];
    char stringdata37[18];
    char stringdata38[27];
    char stringdata39[28];
    char stringdata40[23];
    char stringdata41[25];
    char stringdata42[17];
    char stringdata43[19];
    char stringdata44[21];
    char stringdata45[26];
    char stringdata46[29];
    char stringdata47[25];
    char stringdata48[23];
    char stringdata49[8];
    char stringdata50[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCOptionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCOptionsENDCLASS_t qt_meta_stringdata_CLASSQGCOptionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "QGCOptions"
        QT_MOC_LITERAL(11, 35),  // "showSensorCalibrationCompassC..."
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 4),  // "show"
        QT_MOC_LITERAL(53, 32),  // "showSensorCalibrationGyroChanged"
        QT_MOC_LITERAL(86, 33),  // "showSensorCalibrationAccelCha..."
        QT_MOC_LITERAL(120, 33),  // "showSensorCalibrationLevelCha..."
        QT_MOC_LITERAL(154, 36),  // "showSensorCalibrationAirspeed..."
        QT_MOC_LITERAL(191, 26),  // "showFirmwareUpgradeChanged"
        QT_MOC_LITERAL(218, 27),  // "missionWaypointsOnlyChanged"
        QT_MOC_LITERAL(246, 20),  // "missionWaypointsOnly"
        QT_MOC_LITERAL(267, 26),  // "multiVehicleEnabledChanged"
        QT_MOC_LITERAL(294, 19),  // "multiVehicleEnabled"
        QT_MOC_LITERAL(314, 29),  // "allowJoystickSelectionChanged"
        QT_MOC_LITERAL(344, 5),  // "allow"
        QT_MOC_LITERAL(350, 27),  // "showOfflineMapExportChanged"
        QT_MOC_LITERAL(378, 27),  // "showOfflineMapImportChanged"
        QT_MOC_LITERAL(406, 34),  // "showMissionAbsoluteAltitudeCh..."
        QT_MOC_LITERAL(441, 29),  // "showSimpleMissionStartChanged"
        QT_MOC_LITERAL(471, 23),  // "devicePixelRatioChanged"
        QT_MOC_LITERAL(495, 25),  // "devicePixelDensityChanged"
        QT_MOC_LITERAL(521, 23),  // "combineSettingsAndSetup"
        QT_MOC_LITERAL(545, 23),  // "toolbarHeightMultiplier"
        QT_MOC_LITERAL(569, 22),  // "enablePlanViewSelector"
        QT_MOC_LITERAL(592, 21),  // "preFlightChecklistUrl"
        QT_MOC_LITERAL(614, 28),  // "showSensorCalibrationCompass"
        QT_MOC_LITERAL(643, 25),  // "showSensorCalibrationGyro"
        QT_MOC_LITERAL(669, 26),  // "showSensorCalibrationAccel"
        QT_MOC_LITERAL(696, 26),  // "showSensorCalibrationLevel"
        QT_MOC_LITERAL(723, 29),  // "showSensorCalibrationAirspeed"
        QT_MOC_LITERAL(753, 27),  // "sensorsHaveFixedOrientation"
        QT_MOC_LITERAL(781, 26),  // "wifiReliableForCalibration"
        QT_MOC_LITERAL(808, 19),  // "showFirmwareUpgrade"
        QT_MOC_LITERAL(828, 24),  // "firmwareUpgradeSingleURL"
        QT_MOC_LITERAL(853, 20),  // "showOfflineMapExport"
        QT_MOC_LITERAL(874, 20),  // "showOfflineMapImport"
        QT_MOC_LITERAL(895, 19),  // "useMobileFileDialog"
        QT_MOC_LITERAL(915, 17),  // "showMissionStatus"
        QT_MOC_LITERAL(933, 26),  // "guidedActionsRequireRCRSSI"
        QT_MOC_LITERAL(960, 27),  // "showMissionAbsoluteAltitude"
        QT_MOC_LITERAL(988, 22),  // "showSimpleMissionStart"
        QT_MOC_LITERAL(1011, 24),  // "disableVehicleConnection"
        QT_MOC_LITERAL(1036, 16),  // "devicePixelRatio"
        QT_MOC_LITERAL(1053, 18),  // "devicePixelDensity"
        QT_MOC_LITERAL(1072, 20),  // "checkFirmwareVersion"
        QT_MOC_LITERAL(1093, 25),  // "showPX4LogTransferOptions"
        QT_MOC_LITERAL(1119, 28),  // "enableSaveMainWindowPosition"
        QT_MOC_LITERAL(1148, 24),  // "surveyBuiltInPresetNames"
        QT_MOC_LITERAL(1173, 22),  // "allowJoystickSelection"
        QT_MOC_LITERAL(1196, 7),  // "flyView"
        QT_MOC_LITERAL(1204, 18)   // "QGCFlyViewOptions*"
    },
    "QGCOptions",
    "showSensorCalibrationCompassChanged",
    "",
    "show",
    "showSensorCalibrationGyroChanged",
    "showSensorCalibrationAccelChanged",
    "showSensorCalibrationLevelChanged",
    "showSensorCalibrationAirspeedChanged",
    "showFirmwareUpgradeChanged",
    "missionWaypointsOnlyChanged",
    "missionWaypointsOnly",
    "multiVehicleEnabledChanged",
    "multiVehicleEnabled",
    "allowJoystickSelectionChanged",
    "allow",
    "showOfflineMapExportChanged",
    "showOfflineMapImportChanged",
    "showMissionAbsoluteAltitudeChanged",
    "showSimpleMissionStartChanged",
    "devicePixelRatioChanged",
    "devicePixelDensityChanged",
    "combineSettingsAndSetup",
    "toolbarHeightMultiplier",
    "enablePlanViewSelector",
    "preFlightChecklistUrl",
    "showSensorCalibrationCompass",
    "showSensorCalibrationGyro",
    "showSensorCalibrationAccel",
    "showSensorCalibrationLevel",
    "showSensorCalibrationAirspeed",
    "sensorsHaveFixedOrientation",
    "wifiReliableForCalibration",
    "showFirmwareUpgrade",
    "firmwareUpgradeSingleURL",
    "showOfflineMapExport",
    "showOfflineMapImport",
    "useMobileFileDialog",
    "showMissionStatus",
    "guidedActionsRequireRCRSSI",
    "showMissionAbsoluteAltitude",
    "showSimpleMissionStart",
    "disableVehicleConnection",
    "devicePixelRatio",
    "devicePixelDensity",
    "checkFirmwareVersion",
    "showPX4LogTransferOptions",
    "enableSaveMainWindowPosition",
    "surveyBuiltInPresetNames",
    "allowJoystickSelection",
    "flyView",
    "QGCFlyViewOptions*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCOptionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      31,  137, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x06,   32 /* Public */,
       4,    1,  107,    2, 0x06,   34 /* Public */,
       5,    1,  110,    2, 0x06,   36 /* Public */,
       6,    1,  113,    2, 0x06,   38 /* Public */,
       7,    1,  116,    2, 0x06,   40 /* Public */,
       8,    1,  119,    2, 0x06,   42 /* Public */,
       9,    1,  122,    2, 0x06,   44 /* Public */,
      11,    1,  125,    2, 0x06,   46 /* Public */,
      13,    1,  128,    2, 0x06,   48 /* Public */,
      15,    0,  131,    2, 0x06,   50 /* Public */,
      16,    0,  132,    2, 0x06,   51 /* Public */,
      17,    0,  133,    2, 0x06,   52 /* Public */,
      18,    0,  134,    2, 0x06,   53 /* Public */,
      19,    0,  135,    2, 0x06,   54 /* Public */,
      20,    0,  136,    2, 0x06,   55 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00015401, uint(-1), 0,
      22, QMetaType::Double, 0x00015401, uint(-1), 0,
      23, QMetaType::Bool, 0x00015401, uint(-1), 0,
      24, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      25, QMetaType::Bool, 0x00015001, uint(0), 0,
      26, QMetaType::Bool, 0x00015001, uint(1), 0,
      27, QMetaType::Bool, 0x00015001, uint(2), 0,
      28, QMetaType::Bool, 0x00015001, uint(3), 0,
      29, QMetaType::Bool, 0x00015001, uint(4), 0,
      30, QMetaType::Bool, 0x00015401, uint(-1), 0,
      31, QMetaType::Bool, 0x00015401, uint(-1), 0,
      32, QMetaType::Bool, 0x00015001, uint(5), 0,
      33, QMetaType::QString, 0x00015401, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(6), 0,
      12, QMetaType::Bool, 0x00015001, uint(7), 0,
      34, QMetaType::Bool, 0x00015001, uint(9), 0,
      35, QMetaType::Bool, 0x00015001, uint(10), 0,
      36, QMetaType::Bool, 0x00015401, uint(-1), 0,
      37, QMetaType::Bool, 0x00015401, uint(-1), 0,
      38, QMetaType::Bool, 0x00015401, uint(-1), 0,
      39, QMetaType::Bool, 0x00015001, uint(11), 0,
      40, QMetaType::Bool, 0x00015001, uint(12), 0,
      41, QMetaType::Bool, 0x00015401, uint(-1), 0,
      42, QMetaType::Float, 0x00015001, uint(13), 0,
      43, QMetaType::Float, 0x00015001, uint(14), 0,
      44, QMetaType::Bool, 0x00015401, uint(-1), 0,
      45, QMetaType::Bool, 0x00015401, uint(-1), 0,
      46, QMetaType::Bool, 0x00015401, uint(-1), 0,
      47, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      48, QMetaType::Bool, 0x00015001, uint(8), 0,
      49, 0x80000000 | 50, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCOptionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCOptionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCOptionsENDCLASS_t,
        // property 'combineSettingsAndSetup'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'toolbarHeightMultiplier'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'enablePlanViewSelector'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'preFlightChecklistUrl'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'showSensorCalibrationCompass'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showSensorCalibrationGyro'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showSensorCalibrationAccel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showSensorCalibrationLevel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showSensorCalibrationAirspeed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sensorsHaveFixedOrientation'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wifiReliableForCalibration'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showFirmwareUpgrade'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'firmwareUpgradeSingleURL'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'missionWaypointsOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'multiVehicleEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showOfflineMapExport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showOfflineMapImport'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'useMobileFileDialog'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showMissionStatus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'guidedActionsRequireRCRSSI'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showMissionAbsoluteAltitude'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showSimpleMissionStart'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'disableVehicleConnection'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'devicePixelRatio'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'devicePixelDensity'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'checkFirmwareVersion'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showPX4LogTransferOptions'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enableSaveMainWindowPosition'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'surveyBuiltInPresetNames'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'allowJoystickSelection'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'flyView'
        QtPrivate::TypeAndForceComplete<QGCFlyViewOptions*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCOptions, std::true_type>,
        // method 'showSensorCalibrationCompassChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showSensorCalibrationGyroChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showSensorCalibrationAccelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showSensorCalibrationLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showSensorCalibrationAirspeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showFirmwareUpgradeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'missionWaypointsOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'multiVehicleEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'allowJoystickSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showOfflineMapExportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showOfflineMapImportChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMissionAbsoluteAltitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSimpleMissionStartChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'devicePixelRatioChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'devicePixelDensityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCOptions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showSensorCalibrationCompassChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->showSensorCalibrationGyroChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->showSensorCalibrationAccelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->showSensorCalibrationLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->showSensorCalibrationAirspeedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->showFirmwareUpgradeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->missionWaypointsOnlyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->multiVehicleEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->allowJoystickSelectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->showOfflineMapExportChanged(); break;
        case 10: _t->showOfflineMapImportChanged(); break;
        case 11: _t->showMissionAbsoluteAltitudeChanged(); break;
        case 12: _t->showSimpleMissionStartChanged(); break;
        case 13: _t->devicePixelRatioChanged(); break;
        case 14: _t->devicePixelDensityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showSensorCalibrationCompassChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showSensorCalibrationGyroChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showSensorCalibrationAccelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showSensorCalibrationLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showSensorCalibrationAirspeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::showFirmwareUpgradeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::missionWaypointsOnlyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::multiVehicleEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)(bool );
            if (_t _q_method = &QGCOptions::allowJoystickSelectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::showOfflineMapExportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::showOfflineMapImportChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::showMissionAbsoluteAltitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::showSimpleMissionStartChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::devicePixelRatioChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QGCOptions::*)();
            if (_t _q_method = &QGCOptions::devicePixelDensityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCFlyViewOptions* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCOptions *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->combineSettingsAndSetup(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->toolbarHeightMultiplier(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enablePlanViewSelector(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->preFlightChecklistUrl(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationCompass(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationGyro(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationAccel(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationLevel(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->showSensorCalibrationAirspeed(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->sensorsHaveFixedOrientation(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->wifiReliableForCalibration(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->showFirmwareUpgrade(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->firmwareUpgradeSingleURL(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->missionWaypointsOnly(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->multiVehicleEnabled(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->showOfflineMapExport(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->showOfflineMapImport(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->useMobileFileDialog(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->showMissionStatus(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->guidedActionsRequireRCRSSI(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->showMissionAbsoluteAltitude(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->showSimpleMissionStart(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->disableVehicleConnection(); break;
        case 23: *reinterpret_cast< float*>(_v) = _t->devicePixelRatio(); break;
        case 24: *reinterpret_cast< float*>(_v) = _t->devicePixelDensity(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->checkFirmwareVersion(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->showPX4LogTransferOptions(); break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->enableSaveMainWindowPosition(); break;
        case 28: *reinterpret_cast< QStringList*>(_v) = _t->surveyBuiltInPresetNames(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->allowJoystickSelection(); break;
        case 30: *reinterpret_cast< QGCFlyViewOptions**>(_v) = _t->flyViewOptions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCOptionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void QGCOptions::showSensorCalibrationCompassChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCOptions::showSensorCalibrationGyroChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCOptions::showSensorCalibrationAccelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCOptions::showSensorCalibrationLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCOptions::showSensorCalibrationAirspeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCOptions::showFirmwareUpgradeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCOptions::missionWaypointsOnlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGCOptions::multiVehicleEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCOptions::allowJoystickSelectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGCOptions::showOfflineMapExportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCOptions::showOfflineMapImportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCOptions::showMissionAbsoluteAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QGCOptions::showSimpleMissionStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCOptions::devicePixelRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCOptions::devicePixelDensityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
