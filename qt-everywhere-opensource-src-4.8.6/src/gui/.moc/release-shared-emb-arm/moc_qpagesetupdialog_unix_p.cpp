/****************************************************************************
** Meta object code from reading C++ file 'qpagesetupdialog_unix_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qpagesetupdialog_unix_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpagesetupdialog_unix_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPageSetupWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      46,   17,   17,   17, 0x08,
      73,   68,   17,   17, 0x08,
      99,   90,   17,   17, 0x08,
     120,   90,   17,   17, 0x08,
     144,   90,   17,   17, 0x08,
     166,   90,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPageSetupWidget[] = {
    "QPageSetupWidget\0\0_q_pageOrientationChanged()\0"
    "_q_paperSizeChanged()\0item\0unitChanged(int)\0"
    "newValue\0setTopMargin(double)\0"
    "setBottomMargin(double)\0setLeftMargin(double)\0"
    "setRightMargin(double)\0"
};

void QPageSetupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPageSetupWidget *_t = static_cast<QPageSetupWidget *>(_o);
        switch (_id) {
        case 0: _t->_q_pageOrientationChanged(); break;
        case 1: _t->_q_paperSizeChanged(); break;
        case 2: _t->unitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setTopMargin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setBottomMargin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setLeftMargin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setRightMargin((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPageSetupWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPageSetupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QPageSetupWidget,
      qt_meta_data_QPageSetupWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPageSetupWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPageSetupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPageSetupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPageSetupWidget))
        return static_cast<void*>(const_cast< QPageSetupWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QPageSetupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
