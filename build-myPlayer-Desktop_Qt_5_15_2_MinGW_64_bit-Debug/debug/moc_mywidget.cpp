/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../myPlayer/mywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyWidget_t {
    QByteArrayData data[31];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWidget_t qt_meta_stringdata_MyWidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyWidget"
QT_MOC_LITERAL(1, 9, 10), // "updateTime"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "time"
QT_MOC_LITERAL(4, 26, 9), // "setPaused"
QT_MOC_LITERAL(5, 36, 7), // "setStop"
QT_MOC_LITERAL(6, 44, 12), // "skipBackward"
QT_MOC_LITERAL(7, 57, 11), // "skipForward"
QT_MOC_LITERAL(8, 69, 8), // "openFile"
QT_MOC_LITERAL(9, 78, 16), // "setPlaylistShown"
QT_MOC_LITERAL(10, 95, 11), // "setLrcShown"
QT_MOC_LITERAL(11, 107, 12), // "stateChanged"
QT_MOC_LITERAL(12, 120, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(13, 140, 5), // "state"
QT_MOC_LITERAL(14, 146, 18), // "mediaStatusChanged"
QT_MOC_LITERAL(15, 165, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(16, 191, 6), // "status"
QT_MOC_LITERAL(17, 198, 9), // "showError"
QT_MOC_LITERAL(18, 208, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(19, 228, 5), // "error"
QT_MOC_LITERAL(20, 234, 12), // "mediaChanged"
QT_MOC_LITERAL(21, 247, 13), // "QMediaContent"
QT_MOC_LITERAL(22, 261, 5), // "media"
QT_MOC_LITERAL(23, 267, 24), // "metaDataAvailableChanged"
QT_MOC_LITERAL(24, 292, 9), // "available"
QT_MOC_LITERAL(25, 302, 18), // "tableDoubleClicked"
QT_MOC_LITERAL(26, 321, 3), // "row"
QT_MOC_LITERAL(27, 325, 12), // "clearSources"
QT_MOC_LITERAL(28, 338, 17), // "trayIconActivated"
QT_MOC_LITERAL(29, 356, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(30, 390, 16) // "activationReason"

    },
    "MyWidget\0updateTime\0\0time\0setPaused\0"
    "setStop\0skipBackward\0skipForward\0"
    "openFile\0setPlaylistShown\0setLrcShown\0"
    "stateChanged\0QMediaPlayer::State\0state\0"
    "mediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0showError\0QMediaPlayer::Error\0"
    "error\0mediaChanged\0QMediaContent\0media\0"
    "metaDataAvailableChanged\0available\0"
    "tableDoubleClicked\0row\0clearSources\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "activationReason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,
      23,    1,  116,    2, 0x08 /* Private */,
      25,    1,  119,    2, 0x08 /* Private */,
      27,    0,  122,    2, 0x08 /* Private */,
      28,    1,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,

       0        // eod
};

void MyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->setPaused(); break;
        case 2: _t->setStop(); break;
        case 3: _t->skipBackward(); break;
        case 4: _t->skipForward(); break;
        case 5: _t->openFile(); break;
        case 6: _t->setPlaylistShown(); break;
        case 7: _t->setLrcShown(); break;
        case 8: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 9: _t->mediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 10: _t->showError((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        case 11: _t->mediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 12: _t->metaDataAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->tableDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->clearSources(); break;
        case 15: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MyWidget.data,
    qt_meta_data_MyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
