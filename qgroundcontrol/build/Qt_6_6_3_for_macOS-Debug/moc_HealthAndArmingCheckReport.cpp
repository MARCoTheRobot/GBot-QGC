/****************************************************************************
** Meta object code from reading C++ file 'HealthAndArmingCheckReport.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MAVLink/LibEvents/HealthAndArmingCheckReport.h"
#include "QmlObjectListModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HealthAndArmingCheckReport.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS = QtMocHelpers::stringData(
    "HealthAndArmingCheckProblem",
    "expandedChanged",
    "",
    "message",
    "description",
    "severity",
    "expanded"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[28];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS_t qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "HealthAndArmingCheckProblem"
        QT_MOC_LITERAL(28, 15),  // "expandedChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 7),  // "message"
        QT_MOC_LITERAL(53, 11),  // "description"
        QT_MOC_LITERAL(65, 8),  // "severity"
        QT_MOC_LITERAL(74, 8)   // "expanded"
    },
    "HealthAndArmingCheckProblem",
    "expandedChanged",
    "",
    "message",
    "description",
    "severity",
    "expanded"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHealthAndArmingCheckProblemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject HealthAndArmingCheckProblem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHealthAndArmingCheckProblemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS_t,
        // property 'message'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'severity'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'expanded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HealthAndArmingCheckProblem, std::true_type>,
        // method 'expandedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HealthAndArmingCheckProblem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expandedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HealthAndArmingCheckProblem::*)();
            if (_t _q_method = &HealthAndArmingCheckProblem::expandedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->severity(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->expanded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HealthAndArmingCheckProblem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setExpanded(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *HealthAndArmingCheckProblem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HealthAndArmingCheckProblem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHealthAndArmingCheckProblemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HealthAndArmingCheckProblem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HealthAndArmingCheckProblem::expandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS = QtMocHelpers::stringData(
    "HealthAndArmingCheckReport",
    "updated",
    "",
    "supported",
    "canArm",
    "canTakeoff",
    "canStartMission",
    "hasWarningsOrErrors",
    "gpsState",
    "problemsForCurrentMode",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[27];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[11];
    char stringdata6[16];
    char stringdata7[20];
    char stringdata8[9];
    char stringdata9[23];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS_t qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "HealthAndArmingCheckReport"
        QT_MOC_LITERAL(27, 7),  // "updated"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 9),  // "supported"
        QT_MOC_LITERAL(46, 6),  // "canArm"
        QT_MOC_LITERAL(53, 10),  // "canTakeoff"
        QT_MOC_LITERAL(64, 15),  // "canStartMission"
        QT_MOC_LITERAL(80, 19),  // "hasWarningsOrErrors"
        QT_MOC_LITERAL(100, 8),  // "gpsState"
        QT_MOC_LITERAL(109, 22),  // "problemsForCurrentMode"
        QT_MOC_LITERAL(132, 19)   // "QmlObjectListModel*"
    },
    "HealthAndArmingCheckReport",
    "updated",
    "",
    "supported",
    "canArm",
    "canTakeoff",
    "canStartMission",
    "hasWarningsOrErrors",
    "gpsState",
    "problemsForCurrentMode",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHealthAndArmingCheckReportENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00015001, uint(0), 0,
       4, QMetaType::Bool, 0x00015001, uint(0), 0,
       5, QMetaType::Bool, 0x00015001, uint(0), 0,
       6, QMetaType::Bool, 0x00015001, uint(0), 0,
       7, QMetaType::Bool, 0x00015001, uint(0), 0,
       8, QMetaType::QString, 0x00015001, uint(0), 0,
       9, 0x80000000 | 10, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject HealthAndArmingCheckReport::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHealthAndArmingCheckReportENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS_t,
        // property 'supported'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canArm'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canTakeoff'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canStartMission'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasWarningsOrErrors'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gpsState'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'problemsForCurrentMode'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HealthAndArmingCheckReport, std::true_type>,
        // method 'updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HealthAndArmingCheckReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HealthAndArmingCheckReport *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HealthAndArmingCheckReport::*)();
            if (_t _q_method = &HealthAndArmingCheckReport::updated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HealthAndArmingCheckReport *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->supported(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canArm(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canTakeoff(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canStartMission(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasWarningsOrErrors(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->gpsState(); break;
        case 6: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->problemsForCurrentMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *HealthAndArmingCheckReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HealthAndArmingCheckReport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHealthAndArmingCheckReportENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HealthAndArmingCheckReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void HealthAndArmingCheckReport::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
