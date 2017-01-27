/****************************************************************************
** Meta object code from reading C++ file 'drawingarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tabforms/drawingarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawingarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DrawingArea_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawingArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawingArea_t qt_meta_stringdata_DrawingArea = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DrawingArea"
QT_MOC_LITERAL(1, 12, 18), // "mouseButtonClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 45, 10), // "mouseEvent"
QT_MOC_LITERAL(5, 56, 10), // "mouseMoved"
QT_MOC_LITERAL(6, 67, 16), // "imageChangedSlot"
QT_MOC_LITERAL(7, 84, 20), // "std::weak_ptr<Image>"
QT_MOC_LITERAL(8, 105, 5), // "image"
QT_MOC_LITERAL(9, 111, 10) // "updateSlot"

    },
    "DrawingArea\0mouseButtonClicked\0\0"
    "QMouseEvent*\0mouseEvent\0mouseMoved\0"
    "imageChangedSlot\0std::weak_ptr<Image>\0"
    "image\0updateSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawingArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void DrawingArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawingArea *_t = static_cast<DrawingArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseButtonClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseMoved((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->imageChangedSlot((*reinterpret_cast< std::weak_ptr<Image>(*)>(_a[1]))); break;
        case 3: _t->updateSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DrawingArea::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawingArea::mouseButtonClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (DrawingArea::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawingArea::mouseMoved)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject DrawingArea::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_DrawingArea.data,
      qt_meta_data_DrawingArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DrawingArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawingArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DrawingArea.stringdata0))
        return static_cast<void*>(const_cast< DrawingArea*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int DrawingArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DrawingArea::mouseButtonClicked(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawingArea::mouseMoved(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
