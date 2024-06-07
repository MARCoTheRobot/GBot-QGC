/****************************************************************************
** Meta object code from reading C++ file 'ActuatorOutputs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Actuators/ActuatorOutputs.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActuatorOutputs.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ConfigParameter",
    "label",
    "fact",
    "Fact*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[33];
    char stringdata1[6];
    char stringdata2[5];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 32),  // "ActuatorOutputs::ConfigParameter"
        QT_MOC_LITERAL(33, 5),  // "label"
        QT_MOC_LITERAL(39, 4),  // "fact"
        QT_MOC_LITERAL(44, 5)   // "Fact*"
    },
    "ActuatorOutputs::ConfigParameter",
    "label",
    "fact",
    "Fact*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ConfigParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fact'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConfigParameter, std::true_type>
    >,
    nullptr
} };

void ActuatorOutputs::ConfigParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConfigParameter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->fact(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *ActuatorOutputs::ConfigParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ConfigParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEConfigParameterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ConfigParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ChannelConfig",
    "visibleChanged",
    "",
    "label",
    "advanced",
    "visible"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[31];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[9];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "ActuatorOutputs::ChannelConfig"
        QT_MOC_LITERAL(31, 14),  // "visibleChanged"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 5),  // "label"
        QT_MOC_LITERAL(53, 8),  // "advanced"
        QT_MOC_LITERAL(62, 7)   // "visible"
    },
    "ActuatorOutputs::ChannelConfig",
    "visibleChanged",
    "",
    "label",
    "advanced",
    "visible"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, QMetaType::Bool, 0x00015401, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ChannelConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'advanced'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfig, std::true_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ActuatorOutputs::ChannelConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelConfig::*)();
            if (_t _q_method = &ChannelConfig::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ActuatorOutputs::ChannelConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ChannelConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ChannelConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ActuatorOutputs::ChannelConfig::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ChannelConfigInstance",
    "config",
    "ChannelConfig*",
    "fact",
    "Fact*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[39];
    char stringdata1[7];
    char stringdata2[15];
    char stringdata3[5];
    char stringdata4[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 38),  // "ActuatorOutputs::ChannelConfi..."
        QT_MOC_LITERAL(39, 6),  // "config"
        QT_MOC_LITERAL(46, 14),  // "ChannelConfig*"
        QT_MOC_LITERAL(61, 4),  // "fact"
        QT_MOC_LITERAL(66, 5)   // "Fact*"
    },
    "ActuatorOutputs::ChannelConfigInstance",
    "config",
    "ChannelConfig*",
    "fact",
    "Fact*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015409, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ChannelConfigInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS_t,
        // property 'config'
        QtPrivate::TypeAndForceComplete<ChannelConfig*, std::true_type>,
        // property 'fact'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfigInstance, std::true_type>
    >,
    nullptr
} };

void ActuatorOutputs::ChannelConfigInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelConfig* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChannelConfigInstance *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ChannelConfig**>(_v) = _t->channelConfig(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->fact(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *ActuatorOutputs::ChannelConfigInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ChannelConfigInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEChannelConfigInstanceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ChannelConfigInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ActuatorOutputChannel",
    "configInstancesChanged",
    "",
    "label",
    "configInstances",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[39];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 38),  // "ActuatorOutputs::ActuatorOutp..."
        QT_MOC_LITERAL(39, 22),  // "configInstancesChanged"
        QT_MOC_LITERAL(62, 0),  // ""
        QT_MOC_LITERAL(63, 5),  // "label"
        QT_MOC_LITERAL(69, 15),  // "configInstances"
        QT_MOC_LITERAL(85, 19)   // "QmlObjectListModel*"
    },
    "ActuatorOutputs::ActuatorOutputChannel",
    "configInstancesChanged",
    "",
    "label",
    "configInstances",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015401, uint(-1), 0,
       4, 0x80000000 | 5, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ActuatorOutputChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'configInstances'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActuatorOutputChannel, std::true_type>,
        // method 'configInstancesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ActuatorOutputs::ActuatorOutputChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutputChannel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configInstancesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutputChannel::*)();
            if (_t _q_method = &ActuatorOutputChannel::configInstancesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutputChannel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configInstances(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ActuatorOutputs::ActuatorOutputChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutputChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputChannelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutputChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ActuatorOutputs::ActuatorOutputChannel::configInstancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ActuatorOutputSubgroup",
    "channelsChanged",
    "",
    "channelConfigsChanged",
    "label",
    "channels",
    "QmlObjectListModel*",
    "channelConfigs",
    "primaryParam",
    "ConfigParameter*",
    "configParams"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[40];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[6];
    char stringdata5[9];
    char stringdata6[20];
    char stringdata7[15];
    char stringdata8[13];
    char stringdata9[17];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 39),  // "ActuatorOutputs::ActuatorOutp..."
        QT_MOC_LITERAL(40, 15),  // "channelsChanged"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 21),  // "channelConfigsChanged"
        QT_MOC_LITERAL(79, 5),  // "label"
        QT_MOC_LITERAL(85, 8),  // "channels"
        QT_MOC_LITERAL(94, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(114, 14),  // "channelConfigs"
        QT_MOC_LITERAL(129, 12),  // "primaryParam"
        QT_MOC_LITERAL(142, 16),  // "ConfigParameter*"
        QT_MOC_LITERAL(159, 12)   // "configParams"
    },
    "ActuatorOutputs::ActuatorOutputSubgroup",
    "channelsChanged",
    "",
    "channelConfigsChanged",
    "label",
    "channels",
    "QmlObjectListModel*",
    "channelConfigs",
    "primaryParam",
    "ConfigParameter*",
    "configParams"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    6 /* Public */,
       3,    0,   27,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(0), 0,
       7, 0x80000000 | 6, 0x00015009, uint(1), 0,
       8, 0x80000000 | 9, 0x00015409, uint(-1), 0,
      10, 0x80000000 | 6, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ActuatorOutputSubgroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'channels'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'channelConfigs'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'primaryParam'
        QtPrivate::TypeAndForceComplete<ConfigParameter*, std::true_type>,
        // property 'configParams'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActuatorOutputSubgroup, std::true_type>,
        // method 'channelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'channelConfigsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ActuatorOutputs::ActuatorOutputSubgroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutputSubgroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->channelsChanged(); break;
        case 1: _t->channelConfigsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutputSubgroup::*)();
            if (_t _q_method = &ActuatorOutputSubgroup::channelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorOutputSubgroup::*)();
            if (_t _q_method = &ActuatorOutputSubgroup::channelConfigsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConfigParameter* >(); break;
        case 4:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutputSubgroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channels(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channelConfigs(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->primaryParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ActuatorOutputs::ActuatorOutputSubgroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutputSubgroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputSubgroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutputSubgroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ActuatorOutputs::ActuatorOutputSubgroup::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorOutputs::ActuatorOutputSubgroup::channelConfigsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS = QtMocHelpers::stringData(
    "ActuatorOutputs::ActuatorOutput",
    "subgroupsChanged",
    "",
    "groupsVisibleChanged",
    "notesChanged",
    "label",
    "groupsVisible",
    "subgroups",
    "QmlObjectListModel*",
    "enableParam",
    "ConfigParameter*",
    "configParams",
    "notes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[32];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[14];
    char stringdata7[10];
    char stringdata8[20];
    char stringdata9[12];
    char stringdata10[17];
    char stringdata11[13];
    char stringdata12[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS_t qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31),  // "ActuatorOutputs::ActuatorOutput"
        QT_MOC_LITERAL(32, 16),  // "subgroupsChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 20),  // "groupsVisibleChanged"
        QT_MOC_LITERAL(71, 12),  // "notesChanged"
        QT_MOC_LITERAL(84, 5),  // "label"
        QT_MOC_LITERAL(90, 13),  // "groupsVisible"
        QT_MOC_LITERAL(104, 9),  // "subgroups"
        QT_MOC_LITERAL(114, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(134, 11),  // "enableParam"
        QT_MOC_LITERAL(146, 16),  // "ConfigParameter*"
        QT_MOC_LITERAL(163, 12),  // "configParams"
        QT_MOC_LITERAL(176, 5)   // "notes"
    },
    "ActuatorOutputs::ActuatorOutput",
    "subgroupsChanged",
    "",
    "groupsVisibleChanged",
    "notesChanged",
    "label",
    "groupsVisible",
    "subgroups",
    "QmlObjectListModel*",
    "enableParam",
    "ConfigParameter*",
    "configParams",
    "notes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    7 /* Public */,
       3,    0,   33,    2, 0x06,    8 /* Public */,
       4,    0,   34,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, QMetaType::Bool, 0x00015001, uint(1), 0,
       7, 0x80000000 | 8, 0x00015009, uint(0), 0,
       9, 0x80000000 | 10, 0x00015409, uint(-1), 0,
      11, 0x80000000 | 8, 0x00015409, uint(-1), 0,
      12, QMetaType::QStringList, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ActuatorOutputs::ActuatorOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'groupsVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'subgroups'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'enableParam'
        QtPrivate::TypeAndForceComplete<ConfigParameter*, std::true_type>,
        // property 'configParams'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'notes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActuatorOutput, std::true_type>,
        // method 'subgroupsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'groupsVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ActuatorOutputs::ActuatorOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActuatorOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->subgroupsChanged(); break;
        case 1: _t->groupsVisibleChanged(); break;
        case 2: _t->notesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActuatorOutput::*)();
            if (_t _q_method = &ActuatorOutput::subgroupsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActuatorOutput::*)();
            if (_t _q_method = &ActuatorOutput::groupsVisibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActuatorOutput::*)();
            if (_t _q_method = &ActuatorOutput::notesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConfigParameter* >(); break;
        case 4:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActuatorOutput *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->groupsVisible(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->subgroups(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->enableParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->notes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ActuatorOutputs::ActuatorOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActuatorOutputs::ActuatorOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActuatorOutputsSCOPEActuatorOutputENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActuatorOutputs::ActuatorOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ActuatorOutputs::ActuatorOutput::subgroupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActuatorOutputs::ActuatorOutput::groupsVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ActuatorOutputs::ActuatorOutput::notesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
