/****************************************************************************
** Meta object code from reading C++ file 'qtabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtabwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      10,   49, // properties
       2,   89, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      38,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   12,   11,   11, 0x0a,
      89,   82,   11,   11, 0x0a,
     116,   11,   11,   11, 0x08,
     132,   11,   11,   11, 0x08,
     152,  150,   11,   11, 0x08,

 // properties: name, type, flags
     185,  173, 0x0009510b,
     206,  197, 0x0009510b,
     219,  215, 0x02495103,
     232,  215, 0x02095001,
     244,  238, 0x15095103,
     271,  253, 0x0009510b,
     286,  281, 0x01095103,
     304,  281, 0x01095103,
     317,  281, 0x01095103,
     330,  281, 0x01095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     173, 0x0,    4,   97,
     197, 0x0,    2,  105,

 // enum data: key, value
     338, uint(QTabWidget::North),
     344, uint(QTabWidget::South),
     350, uint(QTabWidget::West),
     355, uint(QTabWidget::East),
     360, uint(QTabWidget::Rounded),
     368, uint(QTabWidget::Triangular),

       0        // eod
};

static const char qt_meta_stringdata_QTabWidget[] = {
    "QTabWidget\0\0index\0currentChanged(int)\0"
    "tabCloseRequested(int)\0setCurrentIndex(int)\0"
    "widget\0setCurrentWidget(QWidget*)\0"
    "_q_showTab(int)\0_q_removeTab(int)\0,\0"
    "_q_tabMoved(int,int)\0TabPosition\0"
    "tabPosition\0TabShape\0tabShape\0int\0"
    "currentIndex\0count\0QSize\0iconSize\0"
    "Qt::TextElideMode\0elideMode\0bool\0"
    "usesScrollButtons\0documentMode\0"
    "tabsClosable\0movable\0North\0South\0West\0"
    "East\0Rounded\0Triangular\0"
};

void QTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTabWidget *_t = static_cast<QTabWidget *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_showTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_removeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_tabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QTabWidget,
      qt_meta_data_QTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTabWidget))
        return static_cast<void*>(const_cast< QTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TabPosition*>(_v) = tabPosition(); break;
        case 1: *reinterpret_cast< TabShape*>(_v) = tabShape(); break;
        case 2: *reinterpret_cast< int*>(_v) = currentIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = count(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = elideMode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = usesScrollButtons(); break;
        case 7: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = tabsClosable(); break;
        case 9: *reinterpret_cast< bool*>(_v) = isMovable(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTabPosition(*reinterpret_cast< TabPosition*>(_v)); break;
        case 1: setTabShape(*reinterpret_cast< TabShape*>(_v)); break;
        case 2: setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 4: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: setUsesScrollButtons(*reinterpret_cast< bool*>(_v)); break;
        case 7: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 8: setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 9: setMovable(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTabWidget::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTabWidget::tabCloseRequested(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
