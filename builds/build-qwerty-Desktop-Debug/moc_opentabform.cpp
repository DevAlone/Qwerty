/****************************************************************************
** Meta object code from reading C++ file 'opentabform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tabforms/opentabform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opentabform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenTabForm_t {
    QByteArrayData data[9];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenTabForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenTabForm_t qt_meta_stringdata_OpenTabForm = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpenTabForm"
QT_MOC_LITERAL(1, 12, 15), // "invalidFilename"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "filename"
QT_MOC_LITERAL(4, 38, 12), // "pixmapOpened"
QT_MOC_LITERAL(5, 51, 6), // "pixmap"
QT_MOC_LITERAL(6, 58, 29), // "on_pushButtonFromFile_clicked"
QT_MOC_LITERAL(7, 88, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 110, 20) // "invalidFilename_slot"

    },
    "OpenTabForm\0invalidFilename\0\0filename\0"
    "pixmapOpened\0pixmap\0on_pushButtonFromFile_clicked\0"
    "on_pushButton_clicked\0invalidFilename_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenTabForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPixmap,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenTabForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenTabForm *_t = static_cast<OpenTabForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidFilename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pixmapOpened((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonFromFile_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->invalidFilename_slot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenTabForm::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenTabForm::invalidFilename)) {
                *result = 0;
            }
        }
        {
            typedef void (OpenTabForm::*_t)(const QPixmap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenTabForm::pixmapOpened)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject OpenTabForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OpenTabForm.data,
      qt_meta_data_OpenTabForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenTabForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenTabForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenTabForm.stringdata0))
        return static_cast<void*>(const_cast< OpenTabForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int OpenTabForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OpenTabForm::invalidFilename(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenTabForm::pixmapOpened(const QPixmap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
