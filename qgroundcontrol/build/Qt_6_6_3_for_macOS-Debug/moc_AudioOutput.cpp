/****************************************************************************
** Meta object code from reading C++ file 'AudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Audio/AudioOutput.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioOutput.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAudioOutputENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSAudioOutputENDCLASS = QtMocHelpers::stringData(
    "AudioOutput",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "mutedChanged",
    "muted",
    "TextMod",
    "None",
    "Translate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAudioOutputENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[14];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[1];
    char stringdata7[13];
    char stringdata8[6];
    char stringdata9[8];
    char stringdata10[5];
    char stringdata11[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAudioOutputENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAudioOutputENDCLASS_t qt_meta_stringdata_CLASSAudioOutputENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AudioOutput"
        QT_MOC_LITERAL(12, 11),  // "QML.Element"
        QT_MOC_LITERAL(24, 4),  // "auto"
        QT_MOC_LITERAL(29, 13),  // "QML.Creatable"
        QT_MOC_LITERAL(43, 5),  // "false"
        QT_MOC_LITERAL(49, 21),  // "QML.UncreatableReason"
        QT_MOC_LITERAL(71, 0),  // ""
        QT_MOC_LITERAL(72, 12),  // "mutedChanged"
        QT_MOC_LITERAL(85, 5),  // "muted"
        QT_MOC_LITERAL(91, 7),  // "TextMod"
        QT_MOC_LITERAL(99, 4),  // "None"
        QT_MOC_LITERAL(104, 9)   // "Translate"
    },
    "AudioOutput",
    "QML.Element",
    "auto",
    "QML.Creatable",
    "false",
    "QML.UncreatableReason",
    "",
    "mutedChanged",
    "muted",
    "TextMod",
    "None",
    "Translate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAudioOutputENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       3,   14, // classinfo
       1,   20, // methods
       1,   29, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   26,    6, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00015103, uint(0), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x3,    2,   39,

 // enum data: key, value
      10, uint(AudioOutput::TextMod::None),
      11, uint(AudioOutput::TextMod::Translate),

       0        // eod
};

Q_CONSTINIT const QMetaObject AudioOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextToSpeech::staticMetaObject>(),
    qt_meta_stringdata_CLASSAudioOutputENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAudioOutputENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'muted'
        bool,
        // enum 'TextMod'
        AudioOutput::TextMod,
        // Q_OBJECT / Q_GADGET
        AudioOutput,
        // method 'mutedChanged'
        void,
        bool
    >,
    nullptr
} };

void AudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioOutput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mutedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioOutput::*)(bool );
            if (_t _q_method = &AudioOutput::mutedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioOutput *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioOutput *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *AudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAudioOutputENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTextToSpeech::qt_metacast(_clname);
}

int AudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextToSpeech::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
