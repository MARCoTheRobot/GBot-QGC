/****************************************************************************
** Meta object code from reading C++ file 'TerrainProfile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/TerrainProfile.h"
#include "MissionController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainProfile.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTerrainProfileENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTerrainProfileENDCLASS = QtMocHelpers::stringData(
    "TerrainProfile",
    "missionControllerChanged",
    "",
    "visibleWidthChanged",
    "pixelsPerMeterChanged",
    "minAMSLAltChanged",
    "maxAMSLAltChanged",
    "_updateSignal",
    "_newVisualItems",
    "visibleWidth",
    "missionController",
    "MissionController*",
    "pixelsPerMeter",
    "minAMSLAlt",
    "maxAMSLAlt"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTerrainProfileENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[22];
    char stringdata5[18];
    char stringdata6[18];
    char stringdata7[14];
    char stringdata8[16];
    char stringdata9[13];
    char stringdata10[18];
    char stringdata11[19];
    char stringdata12[15];
    char stringdata13[11];
    char stringdata14[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTerrainProfileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTerrainProfileENDCLASS_t qt_meta_stringdata_CLASSTerrainProfileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TerrainProfile"
        QT_MOC_LITERAL(15, 24),  // "missionControllerChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 19),  // "visibleWidthChanged"
        QT_MOC_LITERAL(61, 21),  // "pixelsPerMeterChanged"
        QT_MOC_LITERAL(83, 17),  // "minAMSLAltChanged"
        QT_MOC_LITERAL(101, 17),  // "maxAMSLAltChanged"
        QT_MOC_LITERAL(119, 13),  // "_updateSignal"
        QT_MOC_LITERAL(133, 15),  // "_newVisualItems"
        QT_MOC_LITERAL(149, 12),  // "visibleWidth"
        QT_MOC_LITERAL(162, 17),  // "missionController"
        QT_MOC_LITERAL(180, 18),  // "MissionController*"
        QT_MOC_LITERAL(199, 14),  // "pixelsPerMeter"
        QT_MOC_LITERAL(214, 10),  // "minAMSLAlt"
        QT_MOC_LITERAL(225, 10)   // "maxAMSLAlt"
    },
    "TerrainProfile",
    "missionControllerChanged",
    "",
    "visibleWidthChanged",
    "pixelsPerMeterChanged",
    "minAMSLAltChanged",
    "maxAMSLAltChanged",
    "_updateSignal",
    "_newVisualItems",
    "visibleWidth",
    "missionController",
    "MissionController*",
    "pixelsPerMeter",
    "minAMSLAlt",
    "maxAMSLAlt"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTerrainProfileENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    6 /* Public */,
       3,    0,   57,    2, 0x06,    7 /* Public */,
       4,    0,   58,    2, 0x06,    8 /* Public */,
       5,    0,   59,    2, 0x06,    9 /* Public */,
       6,    0,   60,    2, 0x06,   10 /* Public */,
       7,    0,   61,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   62,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Double, 0x00015003, uint(1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(0), 0,
      12, QMetaType::Double, 0x00015003, uint(2), 0,
      13, QMetaType::Double, 0x00015003, uint(3), 0,
      14, QMetaType::Double, 0x00015003, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerrainProfile::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSTerrainProfileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTerrainProfileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTerrainProfileENDCLASS_t,
        // property 'visibleWidth'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'missionController'
        QtPrivate::TypeAndForceComplete<MissionController*, std::true_type>,
        // property 'pixelsPerMeter'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'minAMSLAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maxAMSLAlt'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerrainProfile, std::true_type>,
        // method 'missionControllerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibleWidthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pixelsPerMeterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minAMSLAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxAMSLAltChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_updateSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_newVisualItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TerrainProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->missionControllerChanged(); break;
        case 1: _t->visibleWidthChanged(); break;
        case 2: _t->pixelsPerMeterChanged(); break;
        case 3: _t->minAMSLAltChanged(); break;
        case 4: _t->maxAMSLAltChanged(); break;
        case 5: _t->_updateSignal(); break;
        case 6: _t->_newVisualItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::missionControllerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::visibleWidthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::pixelsPerMeterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::minAMSLAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::maxAMSLAltChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TerrainProfile::*)();
            if (_t _q_method = &TerrainProfile::_updateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->_visibleWidth; break;
        case 1: *reinterpret_cast< MissionController**>(_v) = _t->missionController(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->_pixelsPerMeter; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->_minAMSLAlt; break;
        case 4: *reinterpret_cast< double*>(_v) = _t->_maxAMSLAlt; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TerrainProfile *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_visibleWidth != *reinterpret_cast< double*>(_v)) {
                _t->_visibleWidth = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->visibleWidthChanged();
            }
            break;
        case 1: _t->setMissionController(*reinterpret_cast< MissionController**>(_v)); break;
        case 2:
            if (_t->_pixelsPerMeter != *reinterpret_cast< double*>(_v)) {
                _t->_pixelsPerMeter = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->pixelsPerMeterChanged();
            }
            break;
        case 3:
            if (_t->_minAMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_minAMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->minAMSLAltChanged();
            }
            break;
        case 4:
            if (_t->_maxAMSLAlt != *reinterpret_cast< double*>(_v)) {
                _t->_maxAMSLAlt = *reinterpret_cast< double*>(_v);
                Q_EMIT _t->maxAMSLAltChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *TerrainProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTerrainProfileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int TerrainProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TerrainProfile::missionControllerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TerrainProfile::visibleWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TerrainProfile::pixelsPerMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TerrainProfile::minAMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TerrainProfile::maxAMSLAltChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TerrainProfile::_updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
