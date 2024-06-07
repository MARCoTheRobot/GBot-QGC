/****************************************************************************
** Meta object code from reading C++ file 'Mixer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Actuators/Mixer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mixer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS = QtMocHelpers::stringData(
    "Mixer::ConfigParameter",
    "label",
    "fact",
    "Fact*",
    "advanced"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[23];
    char stringdata1[6];
    char stringdata2[5];
    char stringdata3[6];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "Mixer::ConfigParameter"
        QT_MOC_LITERAL(23, 5),  // "label"
        QT_MOC_LITERAL(29, 4),  // "fact"
        QT_MOC_LITERAL(34, 5),  // "Fact*"
        QT_MOC_LITERAL(40, 8)   // "advanced"
    },
    "Mixer::ConfigParameter",
    "label",
    "fact",
    "Fact*",
    "advanced"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEConfigParameterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015401, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015409, uint(-1), 0,
       4, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::ConfigParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEConfigParameterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fact'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'advanced'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConfigParameter, std::true_type>
    >,
    nullptr
} };

void Mixer::ConfigParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        case 2: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *Mixer::ConfigParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ConfigParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEConfigParameterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ConfigParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS = QtMocHelpers::stringData(
    "Mixer::ChannelConfig",
    "visibleChanged",
    "",
    "instanceVisibleChanged",
    "label",
    "visible",
    "advanced"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[6];
    char stringdata5[8];
    char stringdata6[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "Mixer::ChannelConfig"
        QT_MOC_LITERAL(21, 14),  // "visibleChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 22),  // "instanceVisibleChanged"
        QT_MOC_LITERAL(60, 5),  // "label"
        QT_MOC_LITERAL(66, 7),  // "visible"
        QT_MOC_LITERAL(74, 8)   // "advanced"
    },
    "Mixer::ChannelConfig",
    "visibleChanged",
    "",
    "instanceVisibleChanged",
    "label",
    "visible",
    "advanced"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEChannelConfigENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00015401, uint(-1), 0,
       5, QMetaType::Bool, 0x00015001, uint(0), 0,
       6, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::ChannelConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEChannelConfigENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'advanced'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfig, std::true_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instanceVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::ChannelConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfig *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->instanceVisibleChanged(); break;
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
        case 1: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->advanced(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *Mixer::ChannelConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEChannelConfigENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ChannelConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Mixer::ChannelConfig::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS = QtMocHelpers::stringData(
    "Mixer::ChannelConfigVirtualAxis"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS = {
    {
        QT_MOC_LITERAL(0, 31)   // "Mixer::ChannelConfigVirtualAxis"
    },
    "Mixer::ChannelConfigVirtualAxis"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::ChannelConfigVirtualAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<ChannelConfig::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfigVirtualAxis, std::true_type>
    >,
    nullptr
} };

void Mixer::ChannelConfigVirtualAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Mixer::ChannelConfigVirtualAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigVirtualAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEChannelConfigVirtualAxisENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ChannelConfig::qt_metacast(_clname);
}

int Mixer::ChannelConfigVirtualAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChannelConfig::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS = QtMocHelpers::stringData(
    "Mixer::ChannelConfigInstance",
    "visibleChanged",
    "",
    "enabledChanged",
    "config",
    "ChannelConfig*",
    "fact",
    "Fact*",
    "visible",
    "enabled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[29];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[7];
    char stringdata5[15];
    char stringdata6[5];
    char stringdata7[6];
    char stringdata8[8];
    char stringdata9[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "Mixer::ChannelConfigInstance"
        QT_MOC_LITERAL(29, 14),  // "visibleChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "enabledChanged"
        QT_MOC_LITERAL(60, 6),  // "config"
        QT_MOC_LITERAL(67, 14),  // "ChannelConfig*"
        QT_MOC_LITERAL(82, 4),  // "fact"
        QT_MOC_LITERAL(87, 5),  // "Fact*"
        QT_MOC_LITERAL(93, 7),  // "visible"
        QT_MOC_LITERAL(101, 7)   // "enabled"
    },
    "Mixer::ChannelConfigInstance",
    "visibleChanged",
    "",
    "enabledChanged",
    "config",
    "ChannelConfig*",
    "fact",
    "Fact*",
    "visible",
    "enabled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEChannelConfigInstanceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    5 /* Public */,
       3,    0,   27,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015409, uint(-1), 0,
       6, 0x80000000 | 7, 0x00015409, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(0), 0,
       9, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::ChannelConfigInstance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEChannelConfigInstanceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS_t,
        // property 'config'
        QtPrivate::TypeAndForceComplete<ChannelConfig*, std::true_type>,
        // property 'fact'
        QtPrivate::TypeAndForceComplete<Fact*, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfigInstance, std::true_type>,
        // method 'visibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::ChannelConfigInstance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfigInstance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->visibleChanged(); break;
        case 1: _t->enabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelConfigInstance::*)();
            if (_t _q_method = &ChannelConfigInstance::visibleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChannelConfigInstance::*)();
            if (_t _q_method = &ChannelConfigInstance::enabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
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
        case 2: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Mixer::ChannelConfigInstance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigInstance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::ChannelConfigInstance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Mixer::ChannelConfigInstance::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::ChannelConfigInstance::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS = QtMocHelpers::stringData(
    "Mixer::ChannelConfigInstanceVirtualAxis",
    "setFactFromAxes",
    "",
    "keepVisible",
    "setAxesFromFact",
    "axisVisibleChanged",
    "axisEnableChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[40];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[16];
    char stringdata5[19];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS = {
    {
        QT_MOC_LITERAL(0, 39),  // "Mixer::ChannelConfigInstanceV..."
        QT_MOC_LITERAL(40, 15),  // "setFactFromAxes"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 11),  // "keepVisible"
        QT_MOC_LITERAL(69, 15),  // "setAxesFromFact"
        QT_MOC_LITERAL(85, 18),  // "axisVisibleChanged"
        QT_MOC_LITERAL(104, 17)   // "axisEnableChanged"
    },
    "Mixer::ChannelConfigInstanceVirtualAxis",
    "setFactFromAxes",
    "",
    "keepVisible",
    "setAxesFromFact",
    "axisVisibleChanged",
    "axisEnableChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       1,    0,   47,    2, 0x28,    3 /* Private | MethodCloned */,
       4,    0,   48,    2, 0x08,    4 /* Private */,
       5,    0,   49,    2, 0x08,    5 /* Private */,
       6,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::ChannelConfigInstanceVirtualAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<ChannelConfigInstance::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChannelConfigInstanceVirtualAxis, std::true_type>,
        // method 'setFactFromAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFactFromAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAxesFromFact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'axisVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'axisEnableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::ChannelConfigInstanceVirtualAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelConfigInstanceVirtualAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setFactFromAxes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setFactFromAxes(); break;
        case 2: _t->setAxesFromFact(); break;
        case 3: _t->axisVisibleChanged(); break;
        case 4: _t->axisEnableChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *Mixer::ChannelConfigInstanceVirtualAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::ChannelConfigInstanceVirtualAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEChannelConfigInstanceVirtualAxisENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ChannelConfigInstance::qt_metacast(_clname);
}

int Mixer::ChannelConfigInstanceVirtualAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChannelConfigInstance::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS = QtMocHelpers::stringData(
    "Mixer::MixerChannel",
    "configInstancesChanged",
    "",
    "applyRule",
    "noConstraints",
    "label",
    "configInstances",
    "QmlObjectListModel*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[14];
    char stringdata5[6];
    char stringdata6[16];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "Mixer::MixerChannel"
        QT_MOC_LITERAL(20, 22),  // "configInstancesChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 9),  // "applyRule"
        QT_MOC_LITERAL(54, 13),  // "noConstraints"
        QT_MOC_LITERAL(68, 5),  // "label"
        QT_MOC_LITERAL(74, 15),  // "configInstances"
        QT_MOC_LITERAL(90, 19)   // "QmlObjectListModel*"
    },
    "Mixer::MixerChannel",
    "configInstancesChanged",
    "",
    "applyRule",
    "noConstraints",
    "label",
    "configInstances",
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEMixerChannelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   37, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x0a,    4 /* Public */,
       3,    0,   36,    2, 0x2a,    6 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015401, uint(-1), 0,
       6, 0x80000000 | 7, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::MixerChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEMixerChannelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'configInstances'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MixerChannel, std::true_type>,
        // method 'configInstancesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applyRule'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'applyRule'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::MixerChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerChannel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configInstancesChanged(); break;
        case 1: _t->applyRule((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->applyRule(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerChannel::*)();
            if (_t _q_method = &MixerChannel::configInstancesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
        auto *_t = static_cast<MixerChannel *>(_o);
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

const QMetaObject *Mixer::MixerChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::MixerChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEMixerChannelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::MixerChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Mixer::MixerChannel::configInstancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS = QtMocHelpers::stringData(
    "Mixer::MixerConfigGroup",
    "channelsChanged",
    "",
    "channelConfigsChanged",
    "label",
    "channels",
    "QmlObjectListModel*",
    "channelConfigs",
    "countParam",
    "ConfigParameter*",
    "configParams"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[24];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[6];
    char stringdata5[9];
    char stringdata6[20];
    char stringdata7[15];
    char stringdata8[11];
    char stringdata9[17];
    char stringdata10[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "Mixer::MixerConfigGroup"
        QT_MOC_LITERAL(24, 15),  // "channelsChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 21),  // "channelConfigsChanged"
        QT_MOC_LITERAL(63, 5),  // "label"
        QT_MOC_LITERAL(69, 8),  // "channels"
        QT_MOC_LITERAL(78, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(98, 14),  // "channelConfigs"
        QT_MOC_LITERAL(113, 10),  // "countParam"
        QT_MOC_LITERAL(124, 16),  // "ConfigParameter*"
        QT_MOC_LITERAL(141, 12)   // "configParams"
    },
    "Mixer::MixerConfigGroup",
    "channelsChanged",
    "",
    "channelConfigsChanged",
    "label",
    "channels",
    "QmlObjectListModel*",
    "channelConfigs",
    "countParam",
    "ConfigParameter*",
    "configParams"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEMixerConfigGroupENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Mixer::MixerConfigGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEMixerConfigGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS_t,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'channels'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'channelConfigs'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'countParam'
        QtPrivate::TypeAndForceComplete<ConfigParameter*, std::true_type>,
        // property 'configParams'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MixerConfigGroup, std::true_type>,
        // method 'channelsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'channelConfigsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::MixerConfigGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MixerConfigGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->channelsChanged(); break;
        case 1: _t->channelConfigsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixerConfigGroup::*)();
            if (_t _q_method = &MixerConfigGroup::channelsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixerConfigGroup::*)();
            if (_t _q_method = &MixerConfigGroup::channelConfigsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
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
        auto *_t = static_cast<MixerConfigGroup *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channels(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->channelConfigs(); break;
        case 3: *reinterpret_cast< ConfigParameter**>(_v) = _t->countParam(); break;
        case 4: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->configParams(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Mixer::MixerConfigGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::MixerConfigGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEMixerConfigGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::MixerConfigGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Mixer::MixerConfigGroup::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::MixerConfigGroup::channelConfigsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS = QtMocHelpers::stringData(
    "Mixer::Mixers",
    "groupsChanged",
    "",
    "paramChanged",
    "geometryParamChanged",
    "update",
    "groups",
    "QmlObjectListModel*",
    "title",
    "helpUrl"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[21];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[20];
    char stringdata8[6];
    char stringdata9[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS_t qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "Mixer::Mixers"
        QT_MOC_LITERAL(14, 13),  // "groupsChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 12),  // "paramChanged"
        QT_MOC_LITERAL(42, 20),  // "geometryParamChanged"
        QT_MOC_LITERAL(63, 6),  // "update"
        QT_MOC_LITERAL(70, 6),  // "groups"
        QT_MOC_LITERAL(77, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(97, 5),  // "title"
        QT_MOC_LITERAL(103, 7)   // "helpUrl"
    },
    "Mixer::Mixers",
    "groupsChanged",
    "",
    "paramChanged",
    "geometryParamChanged",
    "update",
    "groups",
    "QmlObjectListModel*",
    "title",
    "helpUrl"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMixerSCOPEMixersENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,
       4,    0,   40,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   41,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00015009, uint(0), 0,
       8, QMetaType::QString, 0x00015001, uint(0), 0,
       9, QMetaType::QString, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Mixer::Mixers::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMixerSCOPEMixersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS_t,
        // property 'groups'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'helpUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Mixers, std::true_type>,
        // method 'groupsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paramChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'geometryParamChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Mixer::Mixers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mixers *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->groupsChanged(); break;
        case 1: _t->paramChanged(); break;
        case 2: _t->geometryParamChanged(); break;
        case 3: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mixers::*)();
            if (_t _q_method = &Mixers::groupsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mixers::*)();
            if (_t _q_method = &Mixers::paramChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mixers::*)();
            if (_t _q_method = &Mixers::geometryParamChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        auto *_t = static_cast<Mixers *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->groups(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->helpUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Mixer::Mixers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mixer::Mixers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMixerSCOPEMixersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mixer::Mixers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Mixer::Mixers::groupsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mixer::Mixers::paramChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Mixer::Mixers::geometryParamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
