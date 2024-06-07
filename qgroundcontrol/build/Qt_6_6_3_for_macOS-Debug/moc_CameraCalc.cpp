/****************************************************************************
** Meta object code from reading C++ file 'CameraCalc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraCalc.h"
#include "ADSBVehicleManager.h"
#include "FactGroup.h"
#include "LinkManager.h"
#include "MAVLinkLogManager.h"
#include "MissionCommandTree.h"
#include "MultiVehicleManager.h"
#include "QGCCorePlugin.h"
#include "QGCMapEngineManager.h"
#include "QGCPalette.h"
#include "PositionManager.h"
#include "SettingsManager.h"
#include "VideoManager.h"
#include "AirLinkManager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraCalc.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCameraCalcENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCameraCalcENDCLASS = QtMocHelpers::stringData(
    "CameraCalc",
    "imageFootprintSideChanged",
    "",
    "imageFootprintSide",
    "imageFootprintFrontalChanged",
    "imageFootprintFrontal",
    "distanceModeChanged",
    "altMode",
    "isManualCameraChanged",
    "isCustomCameraChanged",
    "cameraBrandChanged",
    "cameraModelChanged",
    "cameraModelListChanged",
    "updateCameraStats",
    "_recalcTriggerDistance",
    "_setDirty",
    "_cameraNameChanged",
    "xlatCustomCameraName",
    "xlatManualCameraName",
    "isManualCamera",
    "isCustomCamera",
    "cameraBrand",
    "cameraModel",
    "cameraBrandList",
    "cameraModelList",
    "valueSetIsDistance",
    "Fact*",
    "distanceToSurface",
    "imageDensity",
    "frontalOverlap",
    "sideOverlap",
    "adjustedFootprintSide",
    "adjustedFootprintFrontal",
    "distanceMode",
    "QGroundControlQmlGlobal::AltMode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCameraCalcENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[29];
    char stringdata5[22];
    char stringdata6[20];
    char stringdata7[8];
    char stringdata8[22];
    char stringdata9[22];
    char stringdata10[19];
    char stringdata11[19];
    char stringdata12[23];
    char stringdata13[18];
    char stringdata14[23];
    char stringdata15[10];
    char stringdata16[19];
    char stringdata17[21];
    char stringdata18[21];
    char stringdata19[15];
    char stringdata20[15];
    char stringdata21[12];
    char stringdata22[12];
    char stringdata23[16];
    char stringdata24[16];
    char stringdata25[19];
    char stringdata26[6];
    char stringdata27[18];
    char stringdata28[13];
    char stringdata29[15];
    char stringdata30[12];
    char stringdata31[22];
    char stringdata32[25];
    char stringdata33[13];
    char stringdata34[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCameraCalcENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCameraCalcENDCLASS_t qt_meta_stringdata_CLASSCameraCalcENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "CameraCalc"
        QT_MOC_LITERAL(11, 25),  // "imageFootprintSideChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 18),  // "imageFootprintSide"
        QT_MOC_LITERAL(57, 28),  // "imageFootprintFrontalChanged"
        QT_MOC_LITERAL(86, 21),  // "imageFootprintFrontal"
        QT_MOC_LITERAL(108, 19),  // "distanceModeChanged"
        QT_MOC_LITERAL(128, 7),  // "altMode"
        QT_MOC_LITERAL(136, 21),  // "isManualCameraChanged"
        QT_MOC_LITERAL(158, 21),  // "isCustomCameraChanged"
        QT_MOC_LITERAL(180, 18),  // "cameraBrandChanged"
        QT_MOC_LITERAL(199, 18),  // "cameraModelChanged"
        QT_MOC_LITERAL(218, 22),  // "cameraModelListChanged"
        QT_MOC_LITERAL(241, 17),  // "updateCameraStats"
        QT_MOC_LITERAL(259, 22),  // "_recalcTriggerDistance"
        QT_MOC_LITERAL(282, 9),  // "_setDirty"
        QT_MOC_LITERAL(292, 18),  // "_cameraNameChanged"
        QT_MOC_LITERAL(311, 20),  // "xlatCustomCameraName"
        QT_MOC_LITERAL(332, 20),  // "xlatManualCameraName"
        QT_MOC_LITERAL(353, 14),  // "isManualCamera"
        QT_MOC_LITERAL(368, 14),  // "isCustomCamera"
        QT_MOC_LITERAL(383, 11),  // "cameraBrand"
        QT_MOC_LITERAL(395, 11),  // "cameraModel"
        QT_MOC_LITERAL(407, 15),  // "cameraBrandList"
        QT_MOC_LITERAL(423, 15),  // "cameraModelList"
        QT_MOC_LITERAL(439, 18),  // "valueSetIsDistance"
        QT_MOC_LITERAL(458, 5),  // "Fact*"
        QT_MOC_LITERAL(464, 17),  // "distanceToSurface"
        QT_MOC_LITERAL(482, 12),  // "imageDensity"
        QT_MOC_LITERAL(495, 14),  // "frontalOverlap"
        QT_MOC_LITERAL(510, 11),  // "sideOverlap"
        QT_MOC_LITERAL(522, 21),  // "adjustedFootprintSide"
        QT_MOC_LITERAL(544, 24),  // "adjustedFootprintFrontal"
        QT_MOC_LITERAL(569, 12),  // "distanceMode"
        QT_MOC_LITERAL(582, 32)   // "QGroundControlQmlGlobal::AltMode"
    },
    "CameraCalc",
    "imageFootprintSideChanged",
    "",
    "imageFootprintSide",
    "imageFootprintFrontalChanged",
    "imageFootprintFrontal",
    "distanceModeChanged",
    "altMode",
    "isManualCameraChanged",
    "isCustomCameraChanged",
    "cameraBrandChanged",
    "cameraModelChanged",
    "cameraModelListChanged",
    "updateCameraStats",
    "_recalcTriggerDistance",
    "_setDirty",
    "_cameraNameChanged",
    "xlatCustomCameraName",
    "xlatManualCameraName",
    "isManualCamera",
    "isCustomCamera",
    "cameraBrand",
    "cameraModel",
    "cameraBrandList",
    "cameraModelList",
    "valueSetIsDistance",
    "Fact*",
    "distanceToSurface",
    "imageDensity",
    "frontalOverlap",
    "sideOverlap",
    "adjustedFootprintSide",
    "adjustedFootprintFrontal",
    "distanceMode",
    "QGroundControlQmlGlobal::AltMode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCameraCalcENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      18,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   19 /* Public */,
       4,    1,   89,    2, 0x06,   21 /* Public */,
       6,    1,   92,    2, 0x06,   23 /* Public */,
       8,    0,   95,    2, 0x06,   25 /* Public */,
       9,    0,   96,    2, 0x06,   26 /* Public */,
      10,    0,   97,    2, 0x06,   27 /* Public */,
      11,    0,   98,    2, 0x06,   28 /* Public */,
      12,    0,   99,    2, 0x06,   29 /* Public */,
      13,    0,  100,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  101,    2, 0x08,   31 /* Private */,
      15,    0,  102,    2, 0x08,   32 /* Private */,
      16,    0,  103,    2, 0x08,   33 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00015401, uint(-1), 0,
      18, QMetaType::QString, 0x00015401, uint(-1), 0,
      19, QMetaType::Bool, 0x00015001, uint(3), 0,
      20, QMetaType::Bool, 0x00015001, uint(4), 0,
      21, QMetaType::QString, 0x00015103, uint(5), 0,
      22, QMetaType::QString, 0x00015103, uint(6), 0,
      23, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      24, QMetaType::QStringList, 0x00015003, uint(7), 0,
      25, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      27, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      28, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      29, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      30, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      31, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      32, 0x80000000 | 26, 0x00015409, uint(-1), 0,
      33, 0x80000000 | 34, 0x0001510b, uint(2), 0,
       3, QMetaType::Double, 0x00015001, uint(0), 0,
       5, QMetaType::Double, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSCameraCalcENDCLASS[] = {
    QMetaObject::SuperData::link<QGroundControlQmlGlobal::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject CameraCalc::staticMetaObject = { {
    QMetaObject::SuperData::link<CameraSpec::staticMetaObject>(),
    qt_meta_stringdata_CLASSCameraCalcENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCameraCalcENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSCameraCalcENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCameraCalcENDCLASS_t,
        // property 'xlatCustomCameraName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'xlatManualCameraName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isManualCamera'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isCustomCamera'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cameraBrand'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cameraModel'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'cameraBrandList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'cameraModelList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'valueSetIsDistance'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distanceToSurface'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'imageDensity'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'frontalOverlap'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'sideOverlap'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'adjustedFootprintSide'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'adjustedFootprintFrontal'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'distanceMode'
        QtPrivate::TypeAndForceComplete<QGroundControlQmlGlobal::AltMode, std::true_type>,
        // property 'imageFootprintSide'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'imageFootprintFrontal'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CameraCalc, std::true_type>,
        // method 'imageFootprintSideChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'imageFootprintFrontalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'distanceModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'isManualCameraChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isCustomCameraChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraBrandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cameraModelListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCameraStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_recalcTriggerDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_cameraNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CameraCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraCalc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageFootprintSideChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->imageFootprintFrontalChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->distanceModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->isManualCameraChanged(); break;
        case 4: _t->isCustomCameraChanged(); break;
        case 5: _t->cameraBrandChanged(); break;
        case 6: _t->cameraModelChanged(); break;
        case 7: _t->cameraModelListChanged(); break;
        case 8: _t->updateCameraStats(); break;
        case 9: _t->_recalcTriggerDistance(); break;
        case 10: _t->_setDirty(); break;
        case 11: _t->_cameraNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraCalc::*)(double );
            if (_t _q_method = &CameraCalc::imageFootprintSideChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)(double );
            if (_t _q_method = &CameraCalc::imageFootprintFrontalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)(int );
            if (_t _q_method = &CameraCalc::distanceModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::isManualCameraChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::isCustomCameraChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::cameraBrandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::cameraModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::cameraModelListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CameraCalc::*)();
            if (_t _q_method = &CameraCalc::updateCameraStats; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CameraCalc *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->xlatCustomCameraName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->xlatManualCameraName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isManualCamera(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isCustomCamera(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_cameraBrand; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->_cameraModel; break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->_cameraBrandList; break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->_cameraModelList; break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->valueSetIsDistance(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->distanceToSurface(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->imageDensity(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->frontalOverlap(); break;
        case 12: *reinterpret_cast< Fact**>(_v) = _t->sideOverlap(); break;
        case 13: *reinterpret_cast< Fact**>(_v) = _t->adjustedFootprintSide(); break;
        case 14: *reinterpret_cast< Fact**>(_v) = _t->adjustedFootprintFrontal(); break;
        case 15: *reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v) = _t->distanceMode(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->imageFootprintSide(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->imageFootprintFrontal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CameraCalc *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setCameraBrand(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCameraModel(*reinterpret_cast< QString*>(_v)); break;
        case 7:
            if (_t->_cameraModelList != *reinterpret_cast< QStringList*>(_v)) {
                _t->_cameraModelList = *reinterpret_cast< QStringList*>(_v);
                Q_EMIT _t->cameraModelListChanged();
            }
            break;
        case 15: _t->setDistanceMode(*reinterpret_cast< QGroundControlQmlGlobal::AltMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CameraCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCameraCalcENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CameraSpec::qt_metacast(_clname);
}

int CameraCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CameraSpec::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void CameraCalc::imageFootprintSideChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraCalc::imageFootprintFrontalChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraCalc::distanceModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraCalc::isManualCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CameraCalc::isCustomCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CameraCalc::cameraBrandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void CameraCalc::cameraModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void CameraCalc::cameraModelListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void CameraCalc::updateCameraStats()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
