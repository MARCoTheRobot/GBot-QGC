/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPolygon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCMapPolygon.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPolygon.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS = QtMocHelpers::stringData(
    "QGCMapPolygon",
    "countChanged",
    "",
    "count",
    "pathChanged",
    "dirtyChanged",
    "dirty",
    "cleared",
    "centerChanged",
    "QGeoCoordinate",
    "center",
    "centerDragChanged",
    "centerDrag",
    "interactiveChanged",
    "interactive",
    "isValidChanged",
    "isEmptyChanged",
    "traceModeChanged",
    "traceMode",
    "showAltColorChanged",
    "showAltColor",
    "selectedVertexChanged",
    "index",
    "_polygonModelCountChanged",
    "_polygonModelDirtyChanged",
    "_updateCenter",
    "clear",
    "appendVertex",
    "coordinate",
    "removeVertex",
    "vertexIndex",
    "appendVertices",
    "varCoords",
    "adjustVertex",
    "splitPolygonSegment",
    "containsCoordinate",
    "offset",
    "distance",
    "loadKMLOrSHPFile",
    "file",
    "vertexCoordinate",
    "vertex",
    "verifyClockwiseWinding",
    "beginReset",
    "endReset",
    "path",
    "area",
    "pathModel",
    "QmlObjectListModel*",
    "isValid",
    "empty",
    "selectedVertex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS_t {
    uint offsetsAndSizes[104];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[13];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[14];
    char stringdata9[15];
    char stringdata10[7];
    char stringdata11[18];
    char stringdata12[11];
    char stringdata13[19];
    char stringdata14[12];
    char stringdata15[15];
    char stringdata16[15];
    char stringdata17[17];
    char stringdata18[10];
    char stringdata19[20];
    char stringdata20[13];
    char stringdata21[22];
    char stringdata22[6];
    char stringdata23[26];
    char stringdata24[26];
    char stringdata25[14];
    char stringdata26[6];
    char stringdata27[13];
    char stringdata28[11];
    char stringdata29[13];
    char stringdata30[12];
    char stringdata31[15];
    char stringdata32[10];
    char stringdata33[13];
    char stringdata34[20];
    char stringdata35[19];
    char stringdata36[7];
    char stringdata37[9];
    char stringdata38[17];
    char stringdata39[5];
    char stringdata40[17];
    char stringdata41[7];
    char stringdata42[23];
    char stringdata43[11];
    char stringdata44[9];
    char stringdata45[5];
    char stringdata46[5];
    char stringdata47[10];
    char stringdata48[20];
    char stringdata49[8];
    char stringdata50[6];
    char stringdata51[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS_t qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "QGCMapPolygon"
        QT_MOC_LITERAL(14, 12),  // "countChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "count"
        QT_MOC_LITERAL(34, 11),  // "pathChanged"
        QT_MOC_LITERAL(46, 12),  // "dirtyChanged"
        QT_MOC_LITERAL(59, 5),  // "dirty"
        QT_MOC_LITERAL(65, 7),  // "cleared"
        QT_MOC_LITERAL(73, 13),  // "centerChanged"
        QT_MOC_LITERAL(87, 14),  // "QGeoCoordinate"
        QT_MOC_LITERAL(102, 6),  // "center"
        QT_MOC_LITERAL(109, 17),  // "centerDragChanged"
        QT_MOC_LITERAL(127, 10),  // "centerDrag"
        QT_MOC_LITERAL(138, 18),  // "interactiveChanged"
        QT_MOC_LITERAL(157, 11),  // "interactive"
        QT_MOC_LITERAL(169, 14),  // "isValidChanged"
        QT_MOC_LITERAL(184, 14),  // "isEmptyChanged"
        QT_MOC_LITERAL(199, 16),  // "traceModeChanged"
        QT_MOC_LITERAL(216, 9),  // "traceMode"
        QT_MOC_LITERAL(226, 19),  // "showAltColorChanged"
        QT_MOC_LITERAL(246, 12),  // "showAltColor"
        QT_MOC_LITERAL(259, 21),  // "selectedVertexChanged"
        QT_MOC_LITERAL(281, 5),  // "index"
        QT_MOC_LITERAL(287, 25),  // "_polygonModelCountChanged"
        QT_MOC_LITERAL(313, 25),  // "_polygonModelDirtyChanged"
        QT_MOC_LITERAL(339, 13),  // "_updateCenter"
        QT_MOC_LITERAL(353, 5),  // "clear"
        QT_MOC_LITERAL(359, 12),  // "appendVertex"
        QT_MOC_LITERAL(372, 10),  // "coordinate"
        QT_MOC_LITERAL(383, 12),  // "removeVertex"
        QT_MOC_LITERAL(396, 11),  // "vertexIndex"
        QT_MOC_LITERAL(408, 14),  // "appendVertices"
        QT_MOC_LITERAL(423, 9),  // "varCoords"
        QT_MOC_LITERAL(433, 12),  // "adjustVertex"
        QT_MOC_LITERAL(446, 19),  // "splitPolygonSegment"
        QT_MOC_LITERAL(466, 18),  // "containsCoordinate"
        QT_MOC_LITERAL(485, 6),  // "offset"
        QT_MOC_LITERAL(492, 8),  // "distance"
        QT_MOC_LITERAL(501, 16),  // "loadKMLOrSHPFile"
        QT_MOC_LITERAL(518, 4),  // "file"
        QT_MOC_LITERAL(523, 16),  // "vertexCoordinate"
        QT_MOC_LITERAL(540, 6),  // "vertex"
        QT_MOC_LITERAL(547, 22),  // "verifyClockwiseWinding"
        QT_MOC_LITERAL(570, 10),  // "beginReset"
        QT_MOC_LITERAL(581, 8),  // "endReset"
        QT_MOC_LITERAL(590, 4),  // "path"
        QT_MOC_LITERAL(595, 4),  // "area"
        QT_MOC_LITERAL(600, 9),  // "pathModel"
        QT_MOC_LITERAL(610, 19),  // "QmlObjectListModel*"
        QT_MOC_LITERAL(630, 7),  // "isValid"
        QT_MOC_LITERAL(638, 5),  // "empty"
        QT_MOC_LITERAL(644, 14)   // "selectedVertex"
    },
    "QGCMapPolygon",
    "countChanged",
    "",
    "count",
    "pathChanged",
    "dirtyChanged",
    "dirty",
    "cleared",
    "centerChanged",
    "QGeoCoordinate",
    "center",
    "centerDragChanged",
    "centerDrag",
    "interactiveChanged",
    "interactive",
    "isValidChanged",
    "isEmptyChanged",
    "traceModeChanged",
    "traceMode",
    "showAltColorChanged",
    "showAltColor",
    "selectedVertexChanged",
    "index",
    "_polygonModelCountChanged",
    "_polygonModelDirtyChanged",
    "_updateCenter",
    "clear",
    "appendVertex",
    "coordinate",
    "removeVertex",
    "vertexIndex",
    "appendVertices",
    "varCoords",
    "adjustVertex",
    "splitPolygonSegment",
    "containsCoordinate",
    "offset",
    "distance",
    "loadKMLOrSHPFile",
    "file",
    "vertexCoordinate",
    "vertex",
    "verifyClockwiseWinding",
    "beginReset",
    "endReset",
    "path",
    "area",
    "pathModel",
    "QmlObjectListModel*",
    "isValid",
    "empty",
    "selectedVertex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQGCMapPolygonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      13,  250, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x06,   14 /* Public */,
       4,    0,  185,    2, 0x06,   16 /* Public */,
       5,    1,  186,    2, 0x06,   17 /* Public */,
       7,    0,  189,    2, 0x06,   19 /* Public */,
       8,    1,  190,    2, 0x06,   20 /* Public */,
      11,    1,  193,    2, 0x06,   22 /* Public */,
      13,    1,  196,    2, 0x06,   24 /* Public */,
      15,    0,  199,    2, 0x06,   26 /* Public */,
      16,    0,  200,    2, 0x06,   27 /* Public */,
      17,    1,  201,    2, 0x06,   28 /* Public */,
      19,    1,  204,    2, 0x06,   30 /* Public */,
      21,    1,  207,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    1,  210,    2, 0x08,   34 /* Private */,
      24,    1,  213,    2, 0x08,   36 /* Private */,
      25,    0,  216,    2, 0x08,   38 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      26,    0,  217,    2, 0x02,   39 /* Public */,
      27,    1,  218,    2, 0x02,   40 /* Public */,
      29,    1,  221,    2, 0x02,   42 /* Public */,
      31,    1,  224,    2, 0x02,   44 /* Public */,
      33,    2,  227,    2, 0x02,   46 /* Public */,
      34,    1,  232,    2, 0x02,   49 /* Public */,
      35,    1,  235,    2, 0x102,   51 /* Public | MethodIsConst  */,
      36,    1,  238,    2, 0x02,   53 /* Public */,
      38,    1,  241,    2, 0x02,   55 /* Public */,
      40,    1,  244,    2, 0x102,   57 /* Public | MethodIsConst  */,
      42,    0,  247,    2, 0x02,   59 /* Public */,
      43,    0,  248,    2, 0x02,   60 /* Public */,
      44,    0,  249,    2, 0x02,   61 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::QVariantList,   32,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   30,   28,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Bool, 0x80000000 | 9,   28,
    QMetaType::Void, QMetaType::Double,   37,
    QMetaType::Bool, QMetaType::QString,   39,
    0x80000000 | 9, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015001, uint(0), 0,
      45, QMetaType::QVariantList, 0x00015001, uint(1), 0,
      46, QMetaType::Double, 0x00015001, uint(1), 0,
      47, 0x80000000 | 48, 0x00015409, uint(-1), 0,
       6, QMetaType::Bool, 0x00015103, uint(2), 0,
      10, 0x80000000 | 9, 0x0001510b, uint(4), 0,
      12, QMetaType::Bool, 0x00015103, uint(5), 0,
      14, QMetaType::Bool, 0x00015103, uint(6), 0,
      49, QMetaType::Bool, 0x00015001, uint(7), 0,
      50, QMetaType::Bool, 0x00015001, uint(8), 0,
      18, QMetaType::Bool, 0x00015103, uint(9), 0,
      20, QMetaType::Bool, 0x00015103, uint(10), 0,
      51, QMetaType::Int, 0x00015003, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGCMapPolygon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQGCMapPolygonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS_t,
        // property 'count'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'area'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'pathModel'
        QtPrivate::TypeAndForceComplete<QmlObjectListModel*, std::true_type>,
        // property 'dirty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'center'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::true_type>,
        // property 'centerDrag'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'interactive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isValid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'empty'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'traceMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showAltColor'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectedVertex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGCMapPolygon, std::true_type>,
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
        // method 'centerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        // method 'centerDragChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'interactiveChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isValidChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isEmptyChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'traceModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showAltColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectedVertexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_polygonModelCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_polygonModelDirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_updateCenter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<const QVariantList &, std::false_type>,
        // method 'adjustVertex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate, std::false_type>,
        // method 'splitPolygonSegment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'containsCoordinate'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QGeoCoordinate &, std::false_type>,
        // method 'offset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'loadKMLOrSHPFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'vertexCoordinate'
        QtPrivate::TypeAndForceComplete<QGeoCoordinate, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'verifyClockwiseWinding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'beginReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGCMapPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->cleared(); break;
        case 4: _t->centerChanged((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 5: _t->centerDragChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->interactiveChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: { bool _r = _t->isValidChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isEmptyChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->traceModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->showAltColorChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->selectedVertexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->_polygonModelCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->_polygonModelDirtyChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->_updateCenter(); break;
        case 15: _t->clear(); break;
        case 16: _t->appendVertex((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1]))); break;
        case 17: _t->removeVertex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->appendVertices((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 19: _t->adjustVertex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[2]))); break;
        case 20: _t->splitPolygonSegment((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: { bool _r = _t->containsCoordinate((*reinterpret_cast< std::add_pointer_t<QGeoCoordinate>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->offset((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 23: { bool _r = _t->loadKMLOrSHPFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { QGeoCoordinate _r = _t->vertexCoordinate((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGeoCoordinate*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->verifyClockwiseWinding(); break;
        case 26: _t->beginReset(); break;
        case 27: _t->endReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGCMapPolygon::*)(int );
            if (_t _q_method = &QGCMapPolygon::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)();
            if (_t _q_method = &QGCMapPolygon::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (_t _q_method = &QGCMapPolygon::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)();
            if (_t _q_method = &QGCMapPolygon::cleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(QGeoCoordinate );
            if (_t _q_method = &QGCMapPolygon::centerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (_t _q_method = &QGCMapPolygon::centerDragChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (_t _q_method = &QGCMapPolygon::interactiveChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = bool (QGCMapPolygon::*)();
            if (_t _q_method = &QGCMapPolygon::isValidChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = bool (QGCMapPolygon::*)();
            if (_t _q_method = &QGCMapPolygon::isEmptyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (_t _q_method = &QGCMapPolygon::traceModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(bool );
            if (_t _q_method = &QGCMapPolygon::showAltColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QGCMapPolygon::*)(int );
            if (_t _q_method = &QGCMapPolygon::selectedVertexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->area(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->qmlPathModel(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 5: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->centerDrag(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->empty(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->traceMode(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->showAltColor(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->selectedVertex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QGCMapPolygon *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 6: _t->setCenterDrag(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setTraceMode(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowAltColor(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->selectVertex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QGCMapPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQGCMapPolygonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QGCMapPolygon::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapPolygon::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapPolygon::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapPolygon::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapPolygon::centerChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCMapPolygon::centerDragChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCMapPolygon::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
bool QGCMapPolygon::isValidChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
bool QGCMapPolygon::isEmptyChanged()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
void QGCMapPolygon::traceModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGCMapPolygon::showAltColorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCMapPolygon::selectedVertexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
