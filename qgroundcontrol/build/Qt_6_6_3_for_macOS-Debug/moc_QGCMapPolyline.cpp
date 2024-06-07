/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPolyline.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCMapPolyline.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPolyline.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS = QtMocHelpers::stringData(
    "QGCMapPolyline",
    "countChanged",
    "",
    "count",
    "pathChanged",
    "dirtyChanged",
    "dirty",
    "cleared",
    "interactiveChanged",
    "interactive",
    "isValidChanged",
    "isEmptyChanged",
    "traceModeChanged",
    "traceMode",
    "selectedVertexChanged",
    "index",
    "_polylineModelCountChanged",
    "_polylineModelDirtyChanged",
    "clear",
    "appendVertex",
    "QGeoCoordinate",
    "coordinate",
    "removeVertex",
    "vertexIndex",
    "appendVertices",
    "QList<QGeoCoordinate>",
    "coordinates",
    "adjustVertex",
    "splitSegment",
    "loadKMLFile",
    "kmlFile",
    "beginReset",
    "endReset",
    "vertexCoordinate",
    "vertex",
    "path",
    "pathModel",
    "QmlObjectListModel*",
    "isValid",
    "empty",
    "selectedVertex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS_t {
    uint offsetsAndSizes[82];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[19];
    char stringdata9[12];
    char stringdata10[15];
    char stringdata11[15];
    char stringdata12[17];
    char stringdata13[10];
    char stringdata14[22];
    char stringdata15[6];
    char stringdata16[27];
    char stringdata17[27];
    char stringdata18[6];
    char stringdata19[13];
    char stringdata20[15];
    char stringdata21[11];
    char stringdata22[13];
    char stringdata23[12];
    char stringdata24[15];
    char stringdata25[22];
    char stringdata26[12];
    char stringdata27[13];
    char stringdata28[13];
    char stringdata29[12];
    char stringdata30[8];
    char stringdata31[11];
    char stringdata32[9];
    char stringdata33[17];
    char stringdata34[7];
    char stringdata35[5];
    char stringdata36[10];
    char stringdata37[20];
    char stringdata38[8];
    char stringdata39[6];
    char stringdata40[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS_t qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "QGCMapPolyline"
        QT_MOC_LITERAL(15, 12),  // "countChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 5),  // "count"
        QT_MOC_LITERAL(35, 11),  // "pathChanged"
        QT_MOC_LITERAL(47, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(60, 5),  // "dirty"
        QT_MOC_LITERAL(66, 7),  // "cleared"
        QT_MOC_LITERAL(74, 18),  // "interactiveChanged"
        QT_MOC_LITERAL(93, 11),  // "interactive"
        QT_MOC_LITERAL(105, 14),  // "isValidChanged"
        QT_MOC_LITERAL(120, 14),  // "isEmptyChanged"
        QT_MOC_LITERAL(135, 16),  // "traceModeChanged"
        QT_MOC_LITERAL(152, 9),  // "traceMode"
        QT_MOC_LITERAL(162, 21),  // "selectedVertexChanged"
        QT_MOC_LITERAL(184, 5),  // "index"
        QT_MOC_LITERAL(190, 26),  // "_polylineModelCountChanged"
        QT_MOC_LITERAL(217, 26),  // "_polylineModelDirtyChanged"
        QT_MOC_LITERAL(244, 5),  // "clear"
        QT_MOC_LITERAL(250, 12),  // "appendVertex"
        QT_MOC_LITERAL(263, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(278, 10),  // "coordinate"
        QT_MOC_LITERAL(289, 12),  // "removeVertex"
        QT_MOC_LITERAL(302, 11),  // "vertexIndex"
        QT_MOC_LITERAL(314, 14),  // "appendVertices"
        QT_MOC_LITERAL(329, 21),  // "QList<QGeoCoordinate>"
        QT_MOC_LITERAL(351, 11),  // "coordinates"
        QT_MOC_LITERAL(363, 12),  // "adjustVertex"
        QT_MOC_LITERAL(376, 12),  // "splitSegment"
        QT_MOC_LITERAL(389, 11),  // "loadKMLFile"
        QT_MOC_LITERAL(401, 7),  // "kmlFile"
        QT_MOC_LITERAL(409, 10),  // "beginReset"
        QT_MOC_LITERAL(420, 8),  // "endReset"
        QT_MOC_LITERAL(429, 16),  // "vertexCoordinate"
        QT_MOC_LITERAL(446, 6),  // "vertex"
        QT_MOC_LITERAL(453, 4),  // "path"
        QT_MOC_LITERAL(458, 9),  // "pathModel"
        QT_MOC_LITERAL(468, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(488, 7),  // "isValid"
        QT_MOC_LITERAL(496, 5),  // "empty"
        QT_MOC_LITERAL(502, 14)   // "selectedVertex"
    },
    "QGCMapPolyline",
    "countChanged",
    "",
    "count",
    "pathChanged",
    "dirtyChanged",
    "dirty",
    "cleared",
    "interactiveChanged",
    "interactive",
    "isValidChanged",
    "isEmptyChanged",
    "traceModeChanged",
    "traceMode",
    "selectedVertexChanged",
    "index",
    "_polylineModelCountChanged",
    "_polylineModelDirtyChanged",
    "clear",
    "appendVertex",
    "QGeoCoordinate",
    "coordinate",
    "removeVertex",
    "vertexIndex",
    "appendVertices",
    "QList<QGeoCoordinate>",
    "coordinates",
    "adjustVertex",
    "splitSegment",
    "loadKMLFile",
    "kmlFile",
    "beginReset",
    "endReset",
    "vertexCoordinate",
    "vertex",
    "path",
    "pathModel",
    "QmlObjectListModel*",
    "isValid",
    "empty",
    "selectedVertex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMapPolylineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       9,  191, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  140,    2, 0x06,   10 /* Public */,
       4,    0,  143,    2, 0x06,   12 /* Public */,
       5,    1,  144,    2, 0x06,   13 /* Public */,
       7,    0,  147,    2, 0x06,   15 /* Public */,
       8,    1,  148,    2, 0x06,   16 /* Public */,
      10,    0,  151,    2, 0x06,   18 /* Public */,
      11,    0,  152,    2, 0x06,   19 /* Public */,
      12,    1,  153,    2, 0x06,   20 /* Public */,
      14,    1,  156,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  159,    2, 0x08,   24 /* Private */,
      17,    1,  162,    2, 0x08,   26 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      18,    0,  165,    2, 0x02,   28 /* Public */,
      19,    1,  166,    2, 0x02,   29 /* Public */,
      22,    1,  169,    2, 0x02,   31 /* Public */,
      24,    1,  172,    2, 0x02,   33 /* Public */,
      27,    2,  175,    2, 0x02,   35 /* Public */,
      28,    1,  180,    2, 0x02,   38 /* Public */,
      29,    1,  183,    2, 0x02,   40 /* Public */,
      31,    0,  186,    2, 0x02,   42 /* Public */,
      32,    0,  187,    2, 0x02,   43 /* Public */,
      33,    1,  188,    2, 0x102,   44 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,   23,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Bool, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 20, QMetaType::Int,   34,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015001, uint(0), 0,
      35, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      36, 0x80000000 | 37, 0x00015409, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(2), 0,
       9, QMetaType::Bool, 0x00015103, uint(4), 0,
      38, QMetaType::Bool, 0x00015001, uint(5), 0,
      39, QMetaType::Bool, 0x00015001, uint(6), 0,
      13, QMetaType::Bool, 0x00015103, uint(7), 0,
      40, QMetaType::Int, 0x00015003, uint(8), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMapPolyline::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMapPolylineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS_t,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'pathModel'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'interactive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isValid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'empty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'traceMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectedVertex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCMapPolyline, std::true_type>,
        // method 'countChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'interactiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isValidChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isEmptyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'traceModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectedVertexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_polylineModelCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_polylineModelDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appendVertex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'removeVertex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'appendVertices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QGeoCoordinate> &, std::false_type>,
        // method 'adjustVertex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate, std::false_type>,
        // method 'splitSegment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadKMLFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'beginReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vertexCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QGCMapPolyline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapPolyline *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->cleared(); break;
        case 4: _t->interactiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->isValidChanged(); break;
        case 6: _t->isEmptyChanged(); break;
        case 7: _t->traceModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->selectedVertexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->_polylineModelCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->_polylineModelDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->clear(); break;
        case 12: _t->appendVertex((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 13: _t->removeVertex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->appendVertices((*reinterpret_cast< std::add_pointer_t<QList<QGeoCoordinate>>>(_a[1]))); break;
        case 15: _t->adjustVertex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2]))); break;
        case 16: _t->splitSegment((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: { bool _r = _t->loadKMLFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->beginReset(); break;
        case 19: _t->endReset(); break;
        case 20: { QGeoCoordinate _r = _t->vertexCoordinate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapPolyline::*)(int );
            if (_t _q_method = &QGCMapPolyline::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)();
            if (_t _q_method = &QGCMapPolyline::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)(bool );
            if (_t _q_method = &QGCMapPolyline::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)();
            if (_t _q_method = &QGCMapPolyline::cleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)(bool );
            if (_t _q_method = &QGCMapPolyline::interactiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)();
            if (_t _q_method = &QGCMapPolyline::isValidChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)();
            if (_t _q_method = &QGCMapPolyline::isEmptyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)(bool );
            if (_t _q_method = &QGCMapPolyline::traceModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QGCMapPolyline::*)(int );
            if (_t _q_method = &QGCMapPolyline::selectedVertexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapPolyline *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->qmlPathModel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->empty(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->traceMode(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->selectedVertex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapPolyline *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTraceMode(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->selectVertex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMapPolyline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPolyline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMapPolylineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPolyline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QGCMapPolyline::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapPolyline::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapPolyline::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapPolyline::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapPolyline::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCMapPolyline::isValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCMapPolyline::isEmptyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCMapPolyline::traceModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCMapPolyline::selectedVertexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
