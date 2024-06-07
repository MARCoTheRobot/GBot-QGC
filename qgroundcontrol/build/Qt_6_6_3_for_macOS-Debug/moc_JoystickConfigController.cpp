/****************************************************************************
** Meta object code from reading C++ file 'JoystickConfigController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/JoystickConfigController.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickConfigController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS = QtMocHelpers::stringData(
    "JoystickConfigController",
    "axisValueChanged",
    "",
    "axis",
    "value",
    "axisDeadbandChanged",
    "rollAxisMappedChanged",
    "mapped",
    "pitchAxisMappedChanged",
    "yawAxisMappedChanged",
    "throttleAxisMappedChanged",
    "rollAxisReversedChanged",
    "reversed",
    "pitchAxisReversedChanged",
    "yawAxisReversedChanged",
    "throttleAxisReversedChanged",
    "deadbandToggled",
    "transmitterModeChanged",
    "mode",
    "calibratingChanged",
    "nextEnabledChanged",
    "skipEnabledChanged",
    "stickPositionsChanged",
    "statusTextChanged",
    "nextButtonMessageBoxDisplayed",
    "_activeJoystickChanged",
    "Joystick*",
    "joystick",
    "_axisValueChanged",
    "_axisDeadbandChanged",
    "cancelButtonClicked",
    "skipButtonClicked",
    "nextButtonClicked",
    "start",
    "setDeadbandValue",
    "statusText",
    "rollAxisMapped",
    "pitchAxisMapped",
    "yawAxisMapped",
    "throttleAxisMapped",
    "rollAxisReversed",
    "pitchAxisReversed",
    "yawAxisReversed",
    "throttleAxisReversed",
    "deadbandToggle",
    "transmitterMode",
    "calibrating",
    "nextEnabled",
    "skipEnabled",
    "stickPositions",
    "QList<qreal>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS_t {
    uint offsetsAndSizes[102];
    char stringdata0[25];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[6];
    char stringdata5[20];
    char stringdata6[22];
    char stringdata7[7];
    char stringdata8[23];
    char stringdata9[21];
    char stringdata10[26];
    char stringdata11[24];
    char stringdata12[9];
    char stringdata13[25];
    char stringdata14[23];
    char stringdata15[28];
    char stringdata16[16];
    char stringdata17[23];
    char stringdata18[5];
    char stringdata19[19];
    char stringdata20[19];
    char stringdata21[19];
    char stringdata22[22];
    char stringdata23[18];
    char stringdata24[30];
    char stringdata25[23];
    char stringdata26[10];
    char stringdata27[9];
    char stringdata28[18];
    char stringdata29[21];
    char stringdata30[20];
    char stringdata31[18];
    char stringdata32[18];
    char stringdata33[6];
    char stringdata34[17];
    char stringdata35[11];
    char stringdata36[15];
    char stringdata37[16];
    char stringdata38[14];
    char stringdata39[19];
    char stringdata40[17];
    char stringdata41[18];
    char stringdata42[16];
    char stringdata43[21];
    char stringdata44[15];
    char stringdata45[16];
    char stringdata46[12];
    char stringdata47[12];
    char stringdata48[12];
    char stringdata49[15];
    char stringdata50[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS_t qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "JoystickConfigController"
        QT_MOC_LITERAL(25, 16),  // "axisValueChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 4),  // "axis"
        QT_MOC_LITERAL(48, 5),  // "value"
        QT_MOC_LITERAL(54, 19),  // "axisDeadbandChanged"
        QT_MOC_LITERAL(74, 21),  // "rollAxisMappedChanged"
        QT_MOC_LITERAL(96, 6),  // "mapped"
        QT_MOC_LITERAL(103, 22),  // "pitchAxisMappedChanged"
        QT_MOC_LITERAL(126, 20),  // "yawAxisMappedChanged"
        QT_MOC_LITERAL(147, 25),  // "throttleAxisMappedChanged"
        QT_MOC_LITERAL(173, 23),  // "rollAxisReversedChanged"
        QT_MOC_LITERAL(197, 8),  // "reversed"
        QT_MOC_LITERAL(206, 24),  // "pitchAxisReversedChanged"
        QT_MOC_LITERAL(231, 22),  // "yawAxisReversedChanged"
        QT_MOC_LITERAL(254, 27),  // "throttleAxisReversedChanged"
        QT_MOC_LITERAL(282, 15),  // "deadbandToggled"
        QT_MOC_LITERAL(298, 22),  // "transmitterModeChanged"
        QT_MOC_LITERAL(321, 4),  // "mode"
        QT_MOC_LITERAL(326, 18),  // "calibratingChanged"
        QT_MOC_LITERAL(345, 18),  // "nextEnabledChanged"
        QT_MOC_LITERAL(364, 18),  // "skipEnabledChanged"
        QT_MOC_LITERAL(383, 21),  // "stickPositionsChanged"
        QT_MOC_LITERAL(405, 17),  // "statusTextChanged"
        QT_MOC_LITERAL(423, 29),  // "nextButtonMessageBoxDisplayed"
        QT_MOC_LITERAL(453, 22),  // "_activeJoystickChanged"
        QT_MOC_LITERAL(476, 9),  // "Joystick*"
        QT_MOC_LITERAL(486, 8),  // "joystick"
        QT_MOC_LITERAL(495, 17),  // "_axisValueChanged"
        QT_MOC_LITERAL(513, 20),  // "_axisDeadbandChanged"
        QT_MOC_LITERAL(534, 19),  // "cancelButtonClicked"
        QT_MOC_LITERAL(554, 17),  // "skipButtonClicked"
        QT_MOC_LITERAL(572, 17),  // "nextButtonClicked"
        QT_MOC_LITERAL(590, 5),  // "start"
        QT_MOC_LITERAL(596, 16),  // "setDeadbandValue"
        QT_MOC_LITERAL(613, 10),  // "statusText"
        QT_MOC_LITERAL(624, 14),  // "rollAxisMapped"
        QT_MOC_LITERAL(639, 15),  // "pitchAxisMapped"
        QT_MOC_LITERAL(655, 13),  // "yawAxisMapped"
        QT_MOC_LITERAL(669, 18),  // "throttleAxisMapped"
        QT_MOC_LITERAL(688, 16),  // "rollAxisReversed"
        QT_MOC_LITERAL(705, 17),  // "pitchAxisReversed"
        QT_MOC_LITERAL(723, 15),  // "yawAxisReversed"
        QT_MOC_LITERAL(739, 20),  // "throttleAxisReversed"
        QT_MOC_LITERAL(760, 14),  // "deadbandToggle"
        QT_MOC_LITERAL(775, 15),  // "transmitterMode"
        QT_MOC_LITERAL(791, 11),  // "calibrating"
        QT_MOC_LITERAL(803, 11),  // "nextEnabled"
        QT_MOC_LITERAL(815, 11),  // "skipEnabled"
        QT_MOC_LITERAL(827, 14),  // "stickPositions"
        QT_MOC_LITERAL(842, 12)   // "QList<qreal>"
    },
    "JoystickConfigController",
    "axisValueChanged",
    "",
    "axis",
    "value",
    "axisDeadbandChanged",
    "rollAxisMappedChanged",
    "mapped",
    "pitchAxisMappedChanged",
    "yawAxisMappedChanged",
    "throttleAxisMappedChanged",
    "rollAxisReversedChanged",
    "reversed",
    "pitchAxisReversedChanged",
    "yawAxisReversedChanged",
    "throttleAxisReversedChanged",
    "deadbandToggled",
    "transmitterModeChanged",
    "mode",
    "calibratingChanged",
    "nextEnabledChanged",
    "skipEnabledChanged",
    "stickPositionsChanged",
    "statusTextChanged",
    "nextButtonMessageBoxDisplayed",
    "_activeJoystickChanged",
    "Joystick*",
    "joystick",
    "_axisValueChanged",
    "_axisDeadbandChanged",
    "cancelButtonClicked",
    "skipButtonClicked",
    "nextButtonClicked",
    "start",
    "setDeadbandValue",
    "statusText",
    "rollAxisMapped",
    "pitchAxisMapped",
    "yawAxisMapped",
    "throttleAxisMapped",
    "rollAxisReversed",
    "pitchAxisReversed",
    "yawAxisReversed",
    "throttleAxisReversed",
    "deadbandToggle",
    "transmitterMode",
    "calibrating",
    "nextEnabled",
    "skipEnabled",
    "stickPositions",
    "QList<qreal>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJoystickConfigControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      15,  238, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  170,    2, 0x06,   16 /* Public */,
       5,    2,  175,    2, 0x06,   19 /* Public */,
       6,    1,  180,    2, 0x06,   22 /* Public */,
       8,    1,  183,    2, 0x06,   24 /* Public */,
       9,    1,  186,    2, 0x06,   26 /* Public */,
      10,    1,  189,    2, 0x06,   28 /* Public */,
      11,    1,  192,    2, 0x06,   30 /* Public */,
      13,    1,  195,    2, 0x06,   32 /* Public */,
      14,    1,  198,    2, 0x06,   34 /* Public */,
      15,    1,  201,    2, 0x06,   36 /* Public */,
      16,    1,  204,    2, 0x06,   38 /* Public */,
      17,    1,  207,    2, 0x06,   40 /* Public */,
      19,    0,  210,    2, 0x06,   42 /* Public */,
      20,    0,  211,    2, 0x06,   43 /* Public */,
      21,    0,  212,    2, 0x06,   44 /* Public */,
      22,    0,  213,    2, 0x06,   45 /* Public */,
      23,    0,  214,    2, 0x06,   46 /* Public */,
      24,    0,  215,    2, 0x06,   47 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      25,    1,  216,    2, 0x08,   48 /* Private */,
      28,    2,  219,    2, 0x08,   50 /* Private */,
      29,    2,  224,    2, 0x08,   53 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      30,    0,  229,    2, 0x02,   56 /* Public */,
      31,    0,  230,    2, 0x02,   57 /* Public */,
      32,    0,  231,    2, 0x02,   58 /* Public */,
      33,    0,  232,    2, 0x02,   59 /* Public */,
      34,    2,  233,    2, 0x02,   60 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // properties: name, type, flags
      35, QMetaType::QString, 0x00015001, uint(16), 0,
      36, QMetaType::Bool, 0x00015001, uint(2), 0,
      37, QMetaType::Bool, 0x00015001, uint(3), 0,
      38, QMetaType::Bool, 0x00015001, uint(4), 0,
      39, QMetaType::Bool, 0x00015001, uint(5), 0,
      40, QMetaType::Int, 0x00015001, uint(6), 0,
      41, QMetaType::Int, 0x00015001, uint(7), 0,
      42, QMetaType::Int, 0x00015001, uint(8), 0,
      43, QMetaType::Int, 0x00015001, uint(9), 0,
      44, QMetaType::Bool, 0x00015103, uint(10), 0,
      45, QMetaType::Int, 0x00015103, uint(11), 0,
      46, QMetaType::Bool, 0x00015001, uint(12), 0,
      47, QMetaType::Bool, 0x00015001, uint(13), 0,
      48, QMetaType::Bool, 0x00015001, uint(14), 0,
      49, 0x80000000 | 50, 0x00015009, uint(15), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject JoystickConfigController::staticMetaObject = { {
    QMetaObject::SuperData::link<FactPanelController::staticMetaObject>(),
    qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJoystickConfigControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS_t,
        // property 'statusText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rollAxisMapped'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pitchAxisMapped'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'yawAxisMapped'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'throttleAxisMapped'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'rollAxisReversed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'pitchAxisReversed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'yawAxisReversed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'throttleAxisReversed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'deadbandToggle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'transmitterMode'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'calibrating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'nextEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'skipEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'stickPositions'
        QtPrivate::TypeAndForceComplete<QList<qreal>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JoystickConfigController, std::true_type>,
        // method 'axisValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'axisDeadbandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rollAxisMappedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pitchAxisMappedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'yawAxisMappedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'throttleAxisMappedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rollAxisReversedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pitchAxisReversedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'yawAxisReversedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'throttleAxisReversedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deadbandToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'transmitterModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'calibratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skipEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stickPositionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextButtonMessageBoxDisplayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_activeJoystickChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Joystick *, std::false_type>,
        // method '_axisValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_axisDeadbandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cancelButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skipButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDeadbandValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void JoystickConfigController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JoystickConfigController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->axisValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->axisDeadbandChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->rollAxisMappedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->pitchAxisMappedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->yawAxisMappedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->throttleAxisMappedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->rollAxisReversedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->pitchAxisReversedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->yawAxisReversedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->throttleAxisReversedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->deadbandToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->transmitterModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->calibratingChanged(); break;
        case 13: _t->nextEnabledChanged(); break;
        case 14: _t->skipEnabledChanged(); break;
        case 15: _t->stickPositionsChanged(); break;
        case 16: _t->statusTextChanged(); break;
        case 17: _t->nextButtonMessageBoxDisplayed(); break;
        case 18: _t->_activeJoystickChanged((*reinterpret_cast< std::add_pointer_t<Joystick*>>(_a[1]))); break;
        case 19: _t->_axisValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 20: _t->_axisDeadbandChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->cancelButtonClicked(); break;
        case 22: _t->skipButtonClicked(); break;
        case 23: _t->nextButtonClicked(); break;
        case 24: _t->start(); break;
        case 25: _t->setDeadbandValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Joystick* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JoystickConfigController::*)(int , int );
            if (_t _q_method = &JoystickConfigController::axisValueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(int , int );
            if (_t _q_method = &JoystickConfigController::axisDeadbandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::rollAxisMappedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::pitchAxisMappedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::yawAxisMappedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::throttleAxisMappedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::rollAxisReversedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::pitchAxisReversedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::yawAxisReversedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::throttleAxisReversedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(bool );
            if (_t _q_method = &JoystickConfigController::deadbandToggled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)(int );
            if (_t _q_method = &JoystickConfigController::transmitterModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::calibratingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::nextEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::skipEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::stickPositionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::statusTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (JoystickConfigController::*)();
            if (_t _q_method = &JoystickConfigController::nextButtonMessageBoxDisplayed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<JoystickConfigController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->statusText(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->rollAxisMapped(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->pitchAxisMapped(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->yawAxisMapped(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->throttleAxisMapped(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rollAxisReversed(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->pitchAxisReversed(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->yawAxisReversed(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->throttleAxisReversed(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getDeadbandToggle(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->transmitterMode(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->calibrating(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->nextEnabled(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->skipEnabled(); break;
        case 14: *reinterpret_cast< QList<qreal>*>(_v) = _t->stickPositions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<JoystickConfigController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 9: _t->setDeadbandToggle(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setTransmitterMode(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *JoystickConfigController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickConfigController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJoystickConfigControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int JoystickConfigController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void JoystickConfigController::axisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickConfigController::axisDeadbandChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickConfigController::rollAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickConfigController::pitchAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoystickConfigController::yawAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoystickConfigController::throttleAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoystickConfigController::rollAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoystickConfigController::pitchAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void JoystickConfigController::yawAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void JoystickConfigController::throttleAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void JoystickConfigController::deadbandToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void JoystickConfigController::transmitterModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void JoystickConfigController::calibratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void JoystickConfigController::nextEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void JoystickConfigController::skipEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void JoystickConfigController::stickPositionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void JoystickConfigController::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void JoystickConfigController::nextButtonMessageBoxDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
